<?php
// $Id$

/**
 * @file
 * Webform CiviCRM module's utility functions.
 */

/**
 * Find, create, or update CiviCRM contact
 * Runs on both presave and insert webform hooks in order to handle contact_id field correctly
 */
function webform_civicrm_contact_match( $node, &$submission, $settings ) {

  static $cid = 0;
  if ( $cid )
    return $cid;

  $enabled = webform_civicrm_enabled_fields( $node );
  $fields = webform_civicrm_get_fields();
  $params = array( 'check_permission' => FALSE );
  $table = 'contact';

  foreach ( $fields as $fid => $field ) {
    $field = str_replace( 'civicrm_', '', $fid );
    if ( $field == 'street_address' )
      $table = 'address';
    elseif ( $field == 'email' )
      $table = 'email';
    elseif ( $field == 'phone' )
      $table = 'phone';
    elseif ( $field == 'groups' ) {
      $table = 'custom';
      continue;
    }
    if ( $val = $submission->data[$enabled[$fid]]['value'] ) {
      if ( count($val) > 1 && $table == 'custom' )
        $params['civicrm_'. $table][$field] = drupal_map_assoc( $val );
      elseif ( $val[0] !== '' && $val[0] !== NULL )
        $params['civicrm_'. $table][$field] = $val[0];
    }
  }
  $custom = $params['civicrm_custom'];
  unset($params['civicrm_custom']);

  civicrm_initialize();
  require_once 'api/v2/Contact.php';

  // If this is an update op, just use CID from original submission to avoid confusion
  $db = db_query( "SELECT contact_id FROM {webform_civicrm_submissions} WHERE sid = %d", $submission->sid );
  if ( $existing = db_fetch_array($db) ) {
    $cid = $existing['contact_id'];
  }
  else {
    // Try to match an existing contact to this submission. Logged-in user takes priority.
    global $user;
    if ( $user->uid ) {
      require_once 'CRM/Core/BAO/UFMatch.php';
      $cid = CRM_Core_BAO_UFMatch::getContactId($user->uid);
    }
    elseif ( $_SESSION['webform_civicrm_cid'] && $_SESSION['webform_civicrm_cs'] ) {
      require_once 'CRM/Contact/BAO/Contact/Utils.php';
      if ( CRM_Contact_BAO_Contact_Utils::validChecksum( $_SESSION['webform_civicrm_cid'], $_SESSION['webform_civicrm_cs'] ) )
        $cid = $_SESSION['webform_civicrm_cid'];
    }
    // Search for an existing contact using default strict rule
    if ( !$cid ) {
      require_once 'CRM/Dedupe/Finder.php';
      if ( $dupes = CRM_Dedupe_Finder::dupesByParams($params, 'Individual') )
        $cid = $dupes[0];
    }
  }
  $params['civicrm_contact']['contact_type'] = 'Individual';
  if ( $custom )
    $params['civicrm_contact'] = array_merge( $params['civicrm_contact'], $custom );

  // Update or create new contact
  if ( $cid ) {
    $params['civicrm_contact']['contact_id'] = $cid;
    civicrm_contact_update( $params['civicrm_contact'] );
    $op = 'update';
  }
  else{
    $result = civicrm_contact_add( $params['civicrm_contact'] );
    $cid = $result['contact_id'];
    $op = 'create';
  }
  if ( $enabled['civicrm_contact_id'] )
    $submission->data[$enabled['civicrm_contact_id']]['value'] = array($cid);

    // Add or update location
  if ( $params['civicrm_address'] ) {
    $address_params['address'][1] = $params['civicrm_address'];
    $address_params['address'][1]['is_primary'] = 1;
    $address_params['address'][1]['location_type_id'] = 1;
  }
  if ( $params['civicrm_email'] ) {
    $address_params['email'][1] = $params['civicrm_email'];
    $address_params['email'][1]['is_primary'] = 1;
    $address_params['email'][1]['location_type_id'] = 1;
  }
  if ( $params['civicrm_phone'] ) {
    $address_params['phone'][1] = $params['civicrm_phone'];
    if ( !$params['civicrm_phone']['phone_type_id'] )
      $address_params['phone'][1]['phone_type_id'] = 1;
    $address_params['phone'][1]['is_primary'] = 1;
    $address_params['phone'][1]['location_type_id'] = 1;
  }

  if ( $address_params ) {
    require_once 'api/v2/Location.php';
    $address_params['contact_id'] = $cid;
    $address_params['version'] = '3.0';

    // Update existing address
    $result = civicrm_location_update( $address_params );
    // Or create a new one
    if ( $result['is_error'] )
      $result = civicrm_location_add( $address_params );
  }

  if ( $enabled['civicrm_groups'] ) {
    require_once 'api/v2/GroupContact.php';
    $add_groups = $submission->data[$enabled['civicrm_groups']]['value'];
    $all_groups = explode( "\n", $node->webform['components'][$enabled['civicrm_groups']]['extra']['items'] );
    $remove_groups = array();
    foreach ( $all_groups as $g ) {
      list( $gid, $group ) = explode( '|', $g );
      $remove_groups[$gid] = $group;
    }
  }

  if ( $add_groups ) {
    $group_params = array( 'contact_id.1' => $cid );
    if ( !empty( $add_groups ) ) {
      foreach ( $add_groups as $group_params['group_id'] ) {
        unset( $remove_groups[$group_params['group_id']] );
        civicrm_group_contact_add( $group_params );
      }
    }
  }

  if ( $remove_groups && $op=='update' ) {
    $search_params = array( 'contact_id' => $cid );
    $groups = civicrm_group_contact_get( $search_params );
    $in_groups = array();
    foreach ( $groups as $group ) {
      $in_groups[] = $group['group_id'];
    }
    $group_params = array( 'contact_id.1' => $cid );
    foreach ( $remove_groups as $group_params['group_id'] => $group ) {
      if ( in_array( $group_params['group_id'], $in_groups ) ) {
        civicrm_group_contact_remove( $group_params );
        drupal_set_message( t('You have removed yourself from ') . $group );
      }
    }
  }

  return $cid;
}

/**
 * Get CiviCRM settings for a webform node
 */
function webform_civicrm_get_settings( $nid ) {
  $db = db_query( 'SELECT * FROM {webform_civicrm_forms} WHERE nid = %d', $nid );
  return db_fetch_array( $db );
}

/**
 * Get CiviCRM options
 */
function webform_civicrm_get_options( $option_group, $return_array = FALSE, $none = '' ) {

  $query = 'SELECT value, label FROM {civicrm_option_value} WHERE is_active = 1 AND option_group_id = ';
  if ( is_numeric( $option_group ) )
    $query .= '%d';
  else
    $query .= "(SELECT id FROM {civicrm_option_group} WHERE name = '%s')";
  $db = db_query( $query .' ORDER BY weight, name', $option_group );

  if ( $none )
    $options = array( $none );
  $string = '';
  while ( $o = db_fetch_array( $db ) ) {
    $options[$o['value']] = $o['label'];
    if ( $string )
      $string .= "\n";
    $string .= $o['value'] .'|'. $o['label'];
  }
  if ( $return_array )
    return $options;
  return $string;
}

function webform_civicrm_js_options( $field_key ) {
  $lists = webform_civicrm_get_fields( 'lists' );
  if ( array_key_exists( $field_key, $lists ) ) {
    print webform_civicrm_get_options( $lists[$field_key] );
    exit();
  }
  if ( $field_key=='civicrm_country_id' ) {
    print webform_civicrm_get_countries();
    exit();
  }
}

/**
 * Get CiviCRM groups
 */
function webform_civicrm_get_groups() {
  $db = db_query( 'SELECT id, title FROM {civicrm_group} WHERE is_active = 1' );
  while ( $row = db_fetch_array( $db ) ) {
    $groups[$row['id']] = $row['title'];
  }
  return $groups;
}

/**
 * Get ids of enabled CiviCRM fields for a webform
 * @Param $node - entire node object, or just the NID works too
 */
function webform_civicrm_enabled_fields( $node ) {
  if ( !is_object( $node ) )
    $node = node_load( $node );
  if ( !is_array( $node->webform['components'] ) )
    return;
  $fields = webform_civicrm_get_fields();
  $enabled = array();
  foreach ( $node->webform['components'] as $c ) {
    if ( array_key_exists($c['form_key'], $fields) )
      $enabled[$c['form_key']] = $c['cid'];
  }
  return $enabled;
}

/**
 * List all enabled countries in the CiviCRM database
 */
function webform_civicrm_get_countries() {

  $config = webform_civicrm_get_config();
  $enabled = implode( ',', $config['countryLimit'] );

  $query = "SELECT name, id FROM {civicrm_country}";
  if ( $enabled )
    $query .=  " WHERE id IN ($enabled)";
  $query .= ' ORDER BY name';
  $resource = db_query($query);
  $countries = '';

  while ($row = db_fetch_array($resource)) {
    if ( $countries )
      $countries .= "\n";
    $countries .= $row['id'] .'|'. $row['name'];
  }
  return $countries;
}

/**
 * Get configuration settings from CiviCRM
 */
function webform_civicrm_get_config() {
  static $config = NULL;
  if ( !$config ) {
    $resource = db_query("SELECT config_backend FROM {civicrm_domain} WHERE id=1");
    $data = db_fetch_array($resource);
    $config = unserialize($data['config_backend']);
  }
  return $config;
}

/**
 * Returns the CiviCRM contact fields this module supports
 * Or available tokens,
 * Or option lists keyed to option_group name
 * TODO: Support custom fields
 */
function webform_civicrm_get_fields( $return = 'fields' ) {
  static $fields = 0;
  static $tokens = 0;
  static $lists = 0;

  if ( !$fields ) {
    // The order of these fields is important: see function webform_civicrm_contact_match
    $fields = array(
      // Contact params
      'civicrm_first_name'     => array( 'name' => t('First Name'), 'type' => 'textfield' ),
      'civicrm_nick_name'      => array( 'name' => t('Nick Name'), 'type' => 'textfield' ),
      'civicrm_middle_name'    => array( 'name' => t('Middle Name'), 'type' => 'textfield' ),
      'civicrm_last_name'      => array( 'name' => t('Last Name'), 'type' => 'textfield' ),
      'civicrm_prefix_id'      => array( 'name' => t('Name Prefix'), 'type' => 'select' ),
      'civicrm_suffix_id'      => array( 'name' => t('Name Suffix'), 'type' => 'select' ),
      'civicrm_gender_id'      => array( 'name' => t('Gender'), 'type' => 'select' ),
      'civicrm_birth_date'     => array( 'name' => t('Birth Date'), 'type' => 'date',
                                'extra' => array('year_start' => '-100', 'year_end' => '-1', 'timezone' => 'user') ),
      'civicrm_job_title'      => array( 'name' => t('Job Title'), 'type' => 'textfield' ),
      'civicrm_contact_id'     => array( 'name' => t('Contact ID'), 'type' => 'hidden', 'extra' => array( 'description' => t('(hidden field, useful for post-processing)') ) ),
      // Address params -- street_address must be first!
      'civicrm_street_address' => array( 'name' => t('Street Address'), 'type' => 'textfield',
                                 'extra' => array( 'width' => 60 ) ),
      'civicrm_city'           => array( 'name' => t('City'), 'type' => 'textfield' ),
      'civicrm_state_province' => array( 'name' => t('State/Province'), 'type' => 'textfield',
                                 'extra' => array( 'maxlength' => 2, 'width' => 3 ) ),
      'civicrm_postal_code'    => array( 'name' => t('Postal Code'), 'type' => 'textfield',
                                 'extra' => array( 'width' => 10 ) ),
      'civicrm_country_id'     => array( 'name' => t('Country'), 'type' => 'select' ),
      // Phone params -- phone must be first!
      'civicrm_phone'          => array( 'name' => t('Phone Number'), 'type' => 'textfield' ),
      'civicrm_phone_type_id'  => array( 'name' => t('Phone Type'), 'type' => 'select' ),
      // Email params -- email must be first!
      'civicrm_email'          => array( 'name' => t('Email'), 'type' => 'email' ),
      // Other
      'civicrm_groups'         => array( 'name' => t('Groups'), 'type' => 'select',
                                 'extra' => array( 'multiple' => 1, 'description' => 'Users can add/remove themselves from CiviCRM groups (mailing lists, etc)' ) )
    );

    $tokens = array( 'first_name'          => t('first name'),
                     'nick_name'           => t('nick name'),
                     'middle_name'         => t('middle name'),
                     'last_name'           => t('last name'),
                     'individual_prefix'   => t('name prefix'),
                     'individual_suffix'   => t('name suffix'),
                     'gender'              => t('gender'),
                     'birth_date'          => t('birth date'),
                     'job_title'           => t('job title'),
                     'contact_id'          => t('contact id'),
                     'street_address'      => t('street address'),
                     'city'                => t('city'),
                     'state_province'      => t('state/province abbr'),
                     'state_province_name' => t('state/province full'),
                     'postal_code'         => t('postal code'),
                     'country'             => t('country'),
                     'world_region'        => t('world_region'),
                     'phone'               => t('phone number'),
                     'email'               => t('address')
                     );

    $lists = array( 'civicrm_phone_type_id'  => 'phone_type',
                    'civicrm_prefix_id'      => 'individual_prefix',
                    'civicrm_suffix_id'      => 'individual_suffix',
                    'civicrm_gender_id'      => 'gender' );
    // Custom fields
    $custom_types = array(
      'Select'          => array( 'type' => 'select' ),
      'Multi-Select'    => array( 'type' => 'select', 'extra' => array( 'multiple' => 1 ) ),
      'AdvMulti-Select' => array( 'type' => 'select', 'extra' => array( 'multiple' => 1 ) ),
      'Radio'           => array( 'type' => 'select', 'extra' => array( 'aslist' => 0 ) ),
      'CheckBox'        => array( 'type' => 'select', 'extra' => array( 'multiple' => 1, 'aslist' => 0 ) ),
      'Text'            => array( 'type' => 'textfield' ),
      'TextArea'        => array( 'type' => 'textarea' ),
      'RichTextArea'    => array( 'type' => 'textarea' ),
      'Select Date'     => array( 'type' => 'date' ),
      'Link'            => array( 'type' => 'textfield' ),
    );
    $db = db_query( "SELECT * FROM {civicrm_custom_field} WHERE is_active <> 0 AND custom_group_id IN (SELECT id FROM {civicrm_custom_group} WHERE extends IN ('Individual','Contact') AND is_active <> 0) ORDER BY custom_group_id, weight" );
    while ( $row = db_fetch_array( $db ) ) {
      $id = 'civicrm_custom_'. $row['id'];
      if ( !$custom_types[$row['html_type']] )
        continue;
      $tokens['custom_'. $row['id']] = strtolower( $row['label'] );
      $fields[$id] = $custom_types[$row['html_type']];
      $fields[$id]['name'] = $row['label'];
      $fields[$id]['mandatory'] = $row['is_required'];
      $fields[$id]['extra']['description'] = $row['help_pre'];
      $fields[$id]['value'] = str_replace( '', ',', trim($row['default_value'], '') );
      if ( $fields[$id]['type'] == 'date' ) {
        $fields[$id]['extra']['year_start'] = $row['start_date_years'] ? '-'. $row['start_date_years'] : '-50';
        $fields[$id]['extra']['year_end'] = $row['end_date_years'] ? '+'. $row['end_date_years'] : '+50';
      }
      elseif ( $og = $row['option_group_id'] ) {
        $lists[$id] = $og;
//         $defaults = array();
//         $query = db_query( "SELECT value FROM {civicrm_option_value} WHERE is_default = 1 AND option_group_id = %d", $og );
//         while ( $d = db_fetch_array( $query ) ) {
//           $defaults[] = $d;
//         }
//         if ( $defaults )
//           $fields[$id]['value'] = implode( ',', $defaults );
      }
      elseif ( $fields[$id]['type'] == 'select' ) {
        $fields[$id]['extra']['items'] = '1|'. t('Yes') ."\n0|". t('No');
      }
      elseif ( $fields[$id]['type'] == 'textarea' ) {
        $fields[$id]['extra']['cols'] = $row['note_columns'];
        $fields[$id]['extra']['rows'] = $row['note_rows'];
      }
    }
  }
  return $$return;
}

function webform_civicrm_replace_tokens( $str, $contact ) {
  $tokens = webform_civicrm_get_fields('tokens');
  $values = array();
  foreach ( $tokens as $k => &$t ) {
    $value = $contact[$k];
    if ( is_array( $value ) )
      $value = explode( ', ', $value );
    $values[] = str_replace( '', ' &amp; ', trim($value, '') );
    $t = "[$t]";
  }
  return str_ireplace( $tokens, $values, $str );
}
