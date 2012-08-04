<?php

/**
 * calculate total amount of users
 **/
function drupalmonitor_get_user_usercount() {
  $query = "SELECT count(*) as Anzahl FROM {users} u";
  $result = db_query($query);
  return db_result($result);
}

/**
 * return ative sessions in the last 300 seconds
 */
function drupalmonitor_get_user_activesessioncount_300s() {
  $time = time();
  $time_offset = ($time - (60*5));
  $query = "SELECT count(*) as Anzahl FROM {sessions} s WHERE s.timestamp > " . $time_offset;
  $result = db_query($query);
  return db_result($result);
}

/**
 * return loggedin sessions in the last 300 seconds
 */
function drupalmonitor_get_user_loggedinsessioncount_300s() {
  $time = time();
  $time_offset = ($time - (60*5));
  $query = "SELECT count(*) as Anzahl FROM {users} s WHERE s.access > " . $time_offset;
  $result = db_query($query);
  return db_result($result);
}