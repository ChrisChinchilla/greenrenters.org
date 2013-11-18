<?php
/*
 * @file
 * Contains functions that are not Drupal or CiviCRM hooks
 */

/**
 * Gets content for the page showing the user's feed URL.
 */
function civicrm_activity_ical_user_page() {

  global $user;
  $uid = $user->uid;

  $url = civicrm_activity_ical_get_feed_url($uid);

  $alt = t('Add to Google Calendar');
  
  $page = '<p>'
    . t('Your CiviCRM assigned activities feed is available at this URL:')
    . "<br /><input type=\"text\" size=\"120\" id=\"civicrm_activity_ical_url\" value=\"$url\" readonly=\"readonly\"/></p>"
    . '<a href="http://www.google.com/calendar/render?cid='. urlencode($url) .'" target="_blank"><img src="//www.google.com/calendar/images/ext/gc_button6.gif" border="0" alt="'. $alt .'" title="'. $alt .'"></a>'
  ;

  $page .= drupal_get_form('civicrm_activity_ical_settings_user_form');

  // Select the URL field text automatically
  $js = "
    Drupal.behaviors.civicrm_activity_ical_url = function (context) {
      $('#civicrm_activity_ical_url').select();
    }
  ";
  drupal_add_js($js, 'inline');

  return $page;
}

/**
 * Form constructor for the module settings form
 *
 * @ingroup forms
 */
function civicrm_activity_ical_admin_settings_form() {

  $form = array();

  $form['civicrm_activity_ical_cache_interval'] = array(
    '#type' => 'textfield',
    '#title' => t('Cache interval'),
    '#default_value' => variable_get('civicrm_activity_ical_cache_interval', 30),
    '#description' => t('Length of time (in minutes) for which iCalendar feed data should be cached.'),
    '#size' => 60,
    '#required' => TRUE,
  );
  return system_settings_form($form);
}

/**
 * Form constructor for the "Rebuild feed URL" form
 *
 * @ingroup forms
 */
function civicrm_activity_ical_settings_user_form($form_state) {
  $form = array();

  $form['rebuild'] = array(
    '#type' => 'fieldset',
    '#description' =>
      '<p>'
      . t('Anyone who knows your feed URL will be able to view your activities. If you think this URL is known by people who should not have that access, you can rebuild a new URL, so that any existing URL no longer works.')
      . '</p><p>'
      . t("Note: This will cause the existing URL to stop working, so if you're already using the URL in your calendar software (Google Calendar, etc.), you'll need to update that software with the new URL.")
      .'</p>'
    ,
  );
  $form['rebuild']['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Rebuild feed URL',
  );
  return $form;
}

function civicrm_activity_ical_settings_user_form_submit($form, &$form_state) {
  global $user;
  civicrm_activity_ical_make_user_key($user->uid);
  drupal_set_message(t('Activities iCal feed URL has been changed. Be sure to update any calendar software configurations that were using the old URL.'));
}

/**
 * Generates an iCalendar feed for the given key.
 */
function civicrm_activity_ical_view_feed($uid, $key) {
  // Validate user key
  $user = user_load($uid);
  if ($key != $user->civicrm_activity_ical_key) {
    drupal_access_denied();
    return;
  }

  civicrm_activity_ical_print_cache($uid);
}

/**
 * Checks for a valid feed cache for the given user, and rebuilds that cache
 * if no valid feed cache is found.
 */
function civicrm_activity_ical_print_cache($uid) {
  require_once drupal_get_path('module', 'civicrm_activity_ical') .'/cache.php';

  // Initialize CiviCRM, including its dynamic include path.
  civicrm_initialize();

  // Check for valid cache.
  $cache = CivicrmActivityIcalCache::get($uid);
  if ($cache === FALSE) {
    // Require a file from CiviCRM's dynamic include path.
    require_once 'CRM/Core/Smarty.php';
    $tpl = CRM_Core_Smarty::singleton();
    $tpl->assign('activities', civicrm_activity_ical_get_feed_data($uid));

    // Assign base_url for to be used in links.
    global $base_url;
    $tpl->assign('base_url', $base_url);

    // Calculate and assign the domain for activity uids
    $domain = parse_url('http://'. $_SERVER['HTTP_HOST'], PHP_URL_HOST);
    $tpl->assign('domain', $domain);

    $template = dirname(__FILE__) . '/templates/ICal.tpl';
    $output = $tpl->fetch($template);

    CivicrmActivityIcalCache::set($uid, $output);
    $time = time();
  }
  else {
    $output = $cache['cache'];
    $time = $cache['cached'];
  }

  header('Last-Modified: ' . gmdate('D, d M Y H:i:s \G\M\T', $time));
  // Require a file from CiviCRM's dynamic include path.
  require_once 'CRM/Utils/ICalendar.php';
  CRM_Utils_ICalendar::send($output);
  exit;
}


/**
 * Gets the correct key for the given user, or for the current user if no uid is given.
 */
function civicrm_activity_ical_get_user_key($uid = NULL) {

  if (NULL === $uid) {
    global $user;
    $uid = $user->uid;
  }
  $user = user_load($uid);

  if (isset($user->civicrm_activity_ical_key) && $user->civicrm_activity_ical_key) {
    return $user->civicrm_activity_ical_key;
  }
  else {
    return civicrm_activity_ical_make_user_key($uid);
  }
}
/**
 * Creates a new key and associates it with the given user.
 *
 * @return string The new key
 */
function civicrm_activity_ical_make_user_key($uid) {
  $key = md5(mt_rand(0, 10000000) . microtime());
  $user = user_load($uid);
  $values = array(
    'civicrm_activity_ical_key' => $key,
  );
  user_save($user, $values);
  return $key;
}

/**
 * Gets the most current activity data from the database
 *
 * @param int $uid The uid of the given user
 *
 * @return Array An array of activity data suitable for parsing in the calendar
 */
function civicrm_activity_ical_get_feed_data($uid) {
  $return = array();

  // Initialize CiviCRM, including its dynamic include path.
  civicrm_initialize();
  $contact_id = civicrm_activity_ical_get_contactid($uid);
  if ($contact_id) {

    global $base_url;

    // Set up placeholders for CiviCRM query. CiviCRM's query method doesn't
    // have anything like Drupals db_placeholders, so we do it ourselves here.
    $placeholders = $params = array();
    $placeholders['status'] = array();
    $placeholder_count = 1;

    // Placeholders for blocked statuses
    $blocked_status_values = variable_get('civicrm_activity_ical_blocked_status_values', array());
    if (empty($blocked_status_values)) {
      $blocked_status_values[] = 0;
    }
    foreach ($blocked_status_values as $value) {
      $i = $placeholder_count++;
      $placeholders['status'][] = '%' . $i;
      $params[$i] = array(
        $value,
        'Integer',
      );
    }

    // Placeholder for contact_id
    $i = $placeholder_count++;
    $placeholders['contact_id'] = '%' . $i;
    $params[$i] = array(
      $contact_id,
      'Integer',
    );


    $query = "
      SELECT
      contact_primary.id as contact_id,
      civicrm_activity.id,
      source.id AS source_id,
      source.display_name AS `source_display_name`,
      GROUP_CONCAT(
        DISTINCT
        other_assignee.display_name
        SEPARATOR '; '
      ) AS other_assignees,
      GROUP_CONCAT(
        DISTINCT
        target.display_name
        SEPARATOR '; '
      ) AS targets,
      civicrm_activity.activity_type_id,
      activity_type.label AS activity_type,
      civicrm_activity.subject AS activity_subject,
      civicrm_activity.activity_date_time AS activity_date_time,
      civicrm_activity.duration AS activity_duration,
      civicrm_activity.location AS activity_location,
      civicrm_activity.details AS activity_details
      FROM civicrm_contact contact_primary
      LEFT JOIN civicrm_activity_assignment activity_assignment ON ( activity_assignment.assignee_contact_id = contact_primary.id )
      LEFT JOIN civicrm_activity
        ON (
          civicrm_activity.id = activity_assignment.activity_id
          AND civicrm_activity.is_deleted = 0
          AND civicrm_activity.is_current_revision = 1
        )
      INNER JOIN civicrm_contact source on source.id = civicrm_activity.source_contact_id

      LEFT JOIN civicrm_option_group option_group_activity_type ON (option_group_activity_type.name = 'activity_type')
      LEFT JOIN civicrm_option_value activity_type
        ON (
          civicrm_activity.activity_type_id = activity_type.value
          AND option_group_activity_type.id = activity_type.option_group_id
        )
      LEFT JOIN civicrm_activity_assignment other_activity_assignment ON civicrm_activity.id = other_activity_assignment.activity_id
      LEFT JOIN civicrm_contact other_assignee ON other_activity_assignment.assignee_contact_id = other_assignee.id AND other_assignee.is_deleted = 0 and other_assignee.id <> contact_primary.id

      LEFT JOIN civicrm_activity_target activity_target ON civicrm_activity.id = activity_target.activity_id
      LEFT JOIN civicrm_contact target ON activity_target.target_contact_id = target.id

      WHERE civicrm_activity.status_id NOT IN (". implode(',', $placeholders['status']) . ") AND contact_primary.id = '{$placeholders['contact_id']}' AND civicrm_activity.is_test = 0

      GROUP BY civicrm_activity.id
      ORDER BY activity_date_time desc
    ";
    // Require a file from CiviCRM's dynamic include path.
    require_once 'CRM/Core/DAO.php';
    $dao = CRM_Core_DAO::executeQuery($query, $params);
    while ($dao->fetch()) {
      $row = $dao->toArray();

      $description = array();
      if ($row['activity_details']) {
        $description[] = preg_replace('/(\n|\r)/', '', $row['activity_details']);
      }
      if ($row['targets']) {
        $description[] = 'With: '. $row['targets'];
      }
      if ($row['other_assignees']) {
        $description[] = 'Other assignees: '. $row['other_assignees'];
      }
      $row['description'] = implode("\n", $description);

      $return[] = $row;
    }
  }
  return $return;
}

/**
 * Confirms access for the given user.
 */
function civicrm_activity_ical_feed_access($uid) {
  $account = user_load($uid);
  return user_access('access CiviCRM activity iCalendar feed', $account);
}

/**
 * Gets the civicrm contact_id for the given drupal user uid (uses per-run caching).
 */
function civicrm_activity_ical_get_contactid($uid) {
  static $index = array();
  if (!isset($index[$uid])) {
    // Initialize CiviCRM, including its dynamic include path.
    civicrm_initialize();
    require_once('api/api.php');
    $index[$uid] = (int) civicrm_api('uf_match', 'getvalue', array('version' => 3, 'uf_id' => $uid, 'return' => 'contact_id'));
  }
  return $index[$uid];
}

/**
 * Gets the correct feed URL for the given user
 */
function civicrm_activity_ical_get_feed_url($uid) {
  global $base_url;
  $key = civicrm_activity_ical_get_user_key($uid);
  return $base_url . "/civicrm_activity_ical/feed/$uid/$key";
}

/**
 * Sets module variables to default values().
 */
function civicrm_activity_ical_set_default_variables() {
  variable_set('civicrm_activity_ical_cache_interval', 30);

  // Initialize CiviCRM, including its dynamic include path.
  civicrm_initialize();
  // Require a file from CiviCRM's dynamic include path.
  require_once 'CRM/Core/OptionGroup.php';
  $values = CRM_Core_OptionGroup::values('activity_status');
  $blocked_statuses = array(
    'Completed',
    'Cancelled',
    'Left Message',
    'Unreachable',
    'Not Required',
  );
  $blocked_status_values = array_keys(array_intersect($values, $blocked_statuses));
  variable_set('civicrm_activity_ical_blocked_status_values', $blocked_status_values);
}

/**
 * Returns HTML for the module's 'quick_links' block.
 *
 * @ingroup themeable
 */
function theme_civicrm_activity_ical_quick_links() {
  return l(t('Feed details'), 'civicrm_activity_ical/settings/user');
}