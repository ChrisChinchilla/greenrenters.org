<?php

function drupalmonitor_get_watchdog_php_300s() {
  $time = time();
  $time_offset = ($time - (60*5));
  $query = "SELECT count(*) as Anzahl FROM {watchdog} w WHERE w.type = 'php' AND w.timestamp > %d";
  $result = db_query($query, $time_offset);
  return db_result($result);
}

function drupalmonitor_get_watchdog_content_300s() {
  $time = time();
  $time_offset = ($time - (60*5));
  $query = "SELECT count(*) as Anzahl FROM {watchdog} w WHERE w.type = 'content' AND w.timestamp > " . $time_offset;
  $result = db_query($query);
  return db_result($result);
}

/**
 * 
 **/
function drupalmonitor_get_watchdog_pagenotfoundcount_300s() {
  $time = time();
  $time_offset = ($time - (60*5));
  $query = "SELECT count(*) as Anzahl FROM {watchdog} w WHERE w.type = 'page not found' AND w.timestamp > " . $time_offset;
  $result = db_query($query);
  return db_result($result);
}

function drupalmonitor_get_watchdog_user_300s() {
  $time = time();
  $time_offset = ($time - (60*5));
  $query = "SELECT count(*) as Anzahl FROM {watchdog} w WHERE w.type = 'user' AND w.timestamp > " . $time_offset;
  $result = db_query($query);
  return db_result($result);
}

function drupalmonitor_get_watchdog_accessdenied_300s() {
  $time = time();
  $time_offset = ($time - (60*5));
  $query = "SELECT count(*) as Anzahl FROM {watchdog} w WHERE w.type = 'access denied' AND w.timestamp > " . $time_offset;
  $result = db_query($query);
  return db_result($result);
}

function drupalmonitor_get_watchdog_mail_300s() {
  $time = time();
  $time_offset = ($time - (60*5));
  $query = "SELECT count(*) as Anzahl FROM {watchdog} w WHERE w.type = 'mail' AND w.timestamp > " . $time_offset;
  $result = db_query($query);
  return db_result($result);
}

function drupalmonitor_get_watchdog_search_300s() {
  $time = time();
  $time_offset = ($time - (60*5));
  $query = "SELECT count(*) as Anzahl FROM {watchdog} w WHERE w.type = 'search' AND w.timestamp > " . $time_offset;
  $result = db_query($query);
  return db_result($result);
}