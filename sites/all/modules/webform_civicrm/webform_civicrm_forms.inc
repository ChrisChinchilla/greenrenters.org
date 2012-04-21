<?php
// $Id$

/**
 * @file
 * Webform CiviCRM module's form building and processing functions.
 */

require_once 'webform_civicrm_utils.inc';

function webform_civicrm_configure_form( &$form_state, $node ) {
  drupal_add_js(drupal_get_path('module', 'webform_civicrm') .'/webform_civicrm_forms.js', 'module', 'header');

  $fields = webform_civicrm_get_fields();
  $settings = webform_civicrm_get_settings( $node->nid );
  $enabled = webform_civicrm_enabled_fields( $node );

  // Get available activity types
  $acts = webform_civicrm_get_options( 'activity_type', TRUE, '- no activity -' );

  $form = array('#prefix' => t('Use the options below to configure CiviCRM processing for this form. ') );

  $form['nid'] = array(
    '#type' => 'checkbox',
      '#title' => t('Enable CiviCRM'),
      '#default_value' => (bool)$settings,
      '#return_value' => $node->nid,
      '#suffix' => '<ul id="civicrm-instructions">'. t('<li>CiviCRM contacts will be created or updated when users submit this webform.</li><li>Logged-in users will have their contact info already filled-in for them.</li><li>The form can also be auto-filled for anonymous users if you send them this link using CiviMail:<br />') . str_replace( array('<', '>'), array('&lt;', '&gt;'), l( t('Click here'), 'node/'. $node->nid, array('query' => 'cid={contact.contact_id}&{contact.checksum}') ) ) .'</li></ul>'
  );

  $form['prefix'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Introduction Text'),
    '#description' => t('This text will appear at the top of the form. You may configure different messages for known contacts (logged in users, or users following a hashed link from civimail) and unknown (anonymous) users viewing the form.')
  );
  $form['prefix']['prefix_known'] = array(
    '#type' => 'textarea',
    '#title' => t('Introduction text for known contacts'),
    '#default_value' => $settings['prefix_known'],
    '#description' => t('<strong>Tokens Available:</strong>') .' ['. implode( '], [', webform_civicrm_get_fields('tokens') ) .'].'
  );
  $form['prefix']['prefix_unknown'] = array(
    '#type' => 'textarea',
    '#title' => t('Introduction text for unknown contacts'),
    '#default_value' => $settings['prefix_unknown'],
    '#description' => t('No tokens available since you don\'t know their contact info.')
  );


  $form['act'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Create Activity'),
    '#description' => t('Automatically create an activity for contacts when this form is submitted?')
  );
  $form['act']['activity_type_id'] = array(
    '#type' => 'select',
    '#title' => t('Activity Type'),
    '#options' => $acts,
    '#default_value' => $settings['activity_type_id']
  );
  $form['act']['activity_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Activity Subject'),
    '#maxlength' => 255,
    '#default_value' => $settings['activity_subject']
  );

  $form['fields'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Enable Fields'),
    '#description' => t('Webform fields will be created for you automatically when you check these boxes. You may then configure, arrange, or delete them using the standard Webform interface.<br />NOTE: Unless this form is only available to logged-in users, including, at minimum a name and email field (or whatever fields your default strict dedupe rule uses) is <em>strongly</em> recommended.')
  );
  $c = 1;
  $t = count( $fields );
  $div = 1;
  foreach ( $fields as $id => $field ) {
    $form['fields'][$id] = array(
      '#type' => 'checkbox',
      '#title' => $field['name'],
      '#default_value' => $enabled[$id],
      '#disabled' => (bool)$enabled[$id],
      '#description' => $field['extra']['description']
    );
    if ( $c == 1 || ($c > $t/3 && $div == 1 ) || ($c > 2*$t/3 && $div == 2 ) ) {
      if ($c != 1) {
        ++$div;
        $form['fields'][$id]['#prefix'] = '</div>';
      }
      $form['fields'][$id]['#prefix'] .= '<div style="float:left; width:32%;">';
    }
    ++$c;
  }
  $form['fields'][$id]['#suffix'] = '</div>';

  $form['options'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Additional Options')
  );
    $form['options']['block_unknown_users'] = array(
      '#type' => 'radios',
      '#title' => t('Block unknown users'),
      '#default_value' => (int)$settings['block_unknown_users'],
      '#options' => array( 0 => t('No'), 1 => t('Yes') ),
      '#description' => t('Selecting this option will only allow users to see this form if they are either logged in or following a personalized link from CiviMail.')
    );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Settings'),
  );
  return $form;
}


function webform_civicrm_configure_form_submit( $form, &$form_state ) {
  $vals = $form_state['values'];
  $nid = arg(1);
  $fields = webform_civicrm_get_fields();
  $enabled = webform_civicrm_enabled_fields( $nid );
  $settings = webform_civicrm_get_settings( $nid );
  $form_state['redirect'] = 'node/'. $nid .'/webform';

  // Disable CiviCRM for this form
  if ( $settings && !$vals['nid'] ) {
    db_query( 'DELETE FROM {webform_civicrm_forms} WHERE nid = %d', $nid );
    db_query( 'DELETE FROM {webform_civicrm_submissions} WHERE sid IN (SELECT sid FROM {webform_submissions} WHERE nid = %d)', $nid );
    drupal_set_message( t('Civicrm processing for this form is now disabled. You may delete any fields you no longer want.') );
  }
  // CiviCRM enabled
  else{
    // Write/update record
    if ( !$settings ) {
      drupal_write_record('webform_civicrm_forms', $vals );
      drupal_set_message( t('Civicrm processing for this form is now enabled.') );
    }
    else{
      drupal_write_record('webform_civicrm_forms', $vals, 'nid' );
      drupal_set_message( t('Your Civicrm form settings have been updated.') );
    }

    // Add fields
    foreach ( $fields as $id => $field ) {
      if ( !$enabled[$id] && $vals[$id] ) {
        $field['nid'] = $nid;
        $field['form_key'] = $id;
        $field['weight'] = $field['pid'] = 0;
        $lists = webform_civicrm_get_fields( 'lists' );

        if ( ($field['type'] == 'textfield' || $field['type'] == 'email') && !$field['extra']['width'] )
          $field['extra']['width'] = 20;

        // Populate countries option list
        if ( $id == 'civicrm_country_id' ) {
          $field['extra']['items'] = webform_civicrm_get_countries();
          $config = webform_civicrm_get_config();
          $field['value'] = $config['defaultContactCountry'];
          $field['extra']['aslist'] = 1;
        }
        // Retrieve option lists
        if ( array_key_exists( $id, $lists ) ) {
          $field['extra']['items'] = webform_civicrm_get_options( $lists[$id] );
          if ( !isset($field['extra']['aslist']) )
            $field['extra']['aslist'] = 1;
        }

        $fid = webform_component_insert( $field );
        if ( $id == 'civicrm_groups' ) {
          drupal_set_message( t('Please choose which group(s) you want to be selectable by users of this form.') );
          $form_state['redirect'] = 'node/'. $nid .'/webform/components/'. $fid;
        }
        else
          $new_fields = TRUE;
      }
    }
    if ( $new_fields )
      drupal_set_message( t('You may now customize your new fields however you wish.') );
  }
}

/**
 * Custom Processing for CiviCRM groups form
 */
function webform_civicrm_process_group_selection( $form, &$form_state ) {
  $groups = webform_civicrm_get_groups();
  $items = '';
  foreach ( $form_state['values']['civicrm_groups_fieldset']['civicrm_groups'] as $gid ) {
    if ( $gid ) {
      if ( $items )
        $items .= "\n";
      $items .= $gid .'|'. $groups[$gid];
    }
  }
  $form_state['values']['extra']['items'] = $items;
}

/**
 * Recursively walk through form array and set default values for fields
 */
function webform_civicrm_fill_values( &$elements, $contact ) {
  foreach ( $elements as $eid => &$element ) {
    if ( substr( $eid, 0, 1 ) == '#' || !is_array($element) )
      continue;
    if ( $element['#type'] == 'fieldset' ) {
      webform_civicrm_fill_values( $element, $contact );
      continue;
    }
    if ( isset($contact[$eid]) ) {
      if ( $element['#type'] == 'date' ) {
        $dates = explode( '-', $contact[$eid] );
        $contact[$eid] = array( 'year' => $dates[0], 'month' => intval($dates[1]), 'day' => intval(substr($dates[2], 0, 2 )) );
      }
      elseif ( ($element['#type'] == 'checkboxes' || $element['#multiple']) && !is_array($contact[$eid]) ) {
        $contact[$eid] = explode( '', trim( $contact[$eid], '' ) );
      }
      $element['#default_value'] = $contact[$eid];
    }
  }
}

/**
 * Webform submission handler.
 * Create new or update existing CiviCRM contact.
 * Create activity record.
 */
function webform_civicrm_process_submission($node, $submission) {

  // Only process CiviCRM enabled forms
  if ( $settings = webform_civicrm_get_settings( $node->nid ) ) {

    $cid = webform_civicrm_contact_match( $node, $submission, $settings );

    $act = 0;
    if ( $settings['activity_type_id'] ) {
      require_once 'api/v2/Activity.php';
      $act_params = array(
        'activity_type_id' => $settings['activity_type_id'],
        'source_contact_id' => $cid,
        'subject' => $settings['activity_subject'],
        'status_id' => 2,
        'activity_date_time' => date('Ymdhis'),
        'details' => l( t('View Webform Submission'), 'node/'. $node->nid .'/submission/'. $submission->sid )
      );
      $result = civicrm_activity_create($act_params);
      $act = $result['id'];
    }
    db_query('INSERT INTO {webform_civicrm_submissions} SET sid = %d, contact_id = %d, activity_id = %d', $submission->sid, $cid, $act);
  }
}