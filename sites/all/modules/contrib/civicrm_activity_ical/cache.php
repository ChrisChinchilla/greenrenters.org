<?php
/**
 * @file
 * Cache functions for CiviCRM activity iCalendar feed module
 */

/**
 * Cache object for cached iCalendar feed data. Caching is per-user, where user
 * is defined by the submitted user ID (in most cases the Drupal user is
 * anonymous).
 */
class CivicrmActivityIcalCache {

  /**
   * Gets cached data for the given user.
   *
   * @param $uid
   *   The uid of the user.
   *
   * @return
   *   FALSE if no valid cache is found, or if found, an array of cached
   *   data, with these elements:
   *   - cache: Text body of the cached feed.
   *   - cached: Unix timestamp indicating when cache was stored.
   */
  static function get($uid) {
    $min_timestamp = time() - (variable_get('civicrm_activity_ical_cache_interval', 0) * 60);
    $query = "
      SELECT cache, cached FROM {civicrm_activity_ical_cache}
      WHERE uid = %d AND cached > %d
    ";
    $result = db_query($query, $uid, $min_timestamp);
    $row = db_fetch_array($result);
    return $row;
  }

  /**
   * Stores data in cache.
   *
   * @param $uid
   *   The uid of the user
   * @param $data
   *   Text body of the feed, to be stored.
   *
   * @return
   *   Return value of drupal_write_record() when setting the cache data.
   */
  static function set($uid, $data) {
    $query = "SELECT 1 FROM {civicrm_activity_ical_cache} WHERE uid = %d";
    $result = db_query($query, $uid);
    if (db_result($result)) {
      $update = 'uid';
    }
    $row = array(
      'uid' => $uid,
      'cache' => $data,
      'cached' => time(),
    );
    $result = drupal_write_record('civicrm_activity_ical_cache', $row, $update);
    return $result;
  }

  /**
   * Clears expired cache for the given user
   *
   * @param $uid
   *   The uid of the user.
   * @param $force
   *   If TRUE, clear the cache for this user even if it's not expired.
   *   (default FALSE)
   *
   * @return
   *   Return value of db_query() when clearing the cache.
   */
  static function clear($uid, $force = FALSE) {
    $params = array(
      $uid,
    );
    if (!$force) {
      $cached_where = ' AND cached > %d ';
      $params[] = time() - (variable_get('civicrm_activity_ical_cache_interval', 0) * 60);
    }
    $query = "
      DELETE FROM {civicrm_activity_ical_cache}
      WHERE uid = %d $cached_where
    ";
    $result = db_query($query, $uid, $min_timestamp);
    return $result;
  }
}