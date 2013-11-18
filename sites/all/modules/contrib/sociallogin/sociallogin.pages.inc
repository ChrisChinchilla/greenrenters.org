<?php
/**
 * @file
 * User page callbacks for the sociallogin module.
 */

/**
 * Menu callback Manage sociallogin identities for the specified user.
 */
function sociallogin_user_identities($account) {
  drupal_set_title(check_plain($account->name));
  $header = array(t('Social Login'), t('Operations'));
  $rows = array();
  $result = db_query("SELECT * FROM {authmap} WHERE module='sociallogin' AND uid=%d", $account->uid);
  while ($identity = db_fetch_object($result)) {
    $rows[] = array(
                $identity->authname, l(t('Delete'), 
                'user/' . $account->uid . '/sociallogin/delete/' . $identity->aid)
              );
  }
  $output = theme('table', $header, $rows);
  return $output;
}

/**
 * Menu callback Delete the specified sociallogin identity from the system.
 */
function sociallogin_user_delete($account, $aid = 0) {
  db_query("DELETE FROM {authmap} WHERE uid=%d AND aid=%d AND module='sociallogin'", $account->uid, $aid);
  if (db_affected_rows()) {
    drupal_set_message(t('Social Login ID deleted.'));
  }
  drupal_goto('user/' . $account->uid . '/sociallogin');
}