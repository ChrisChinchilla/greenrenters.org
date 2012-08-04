<?php

function drupalmonitor_get_load_requestscount_300s() {
  //Total Requests
  $time_offset = time() - 5*60;
  $query = "SELECT count(*) as Anzahl FROM {drupalmonitor_log} WHERE dt > " . $time_offset;
  $result = db_query($query);
  return db_result($result);
}

  //Requests per second in the last 300s
function drupalmonitor_get_load_requestspersecondcount_300s() {
  $requests = drupalmonitor_get_load_requestscount_300s();
  return $requests / (5*60);
}

//slow requests //more than 1000 milliseconds
function drupalmonitor_get_load_slowrequestscount_300s() {
  $time_offset = time() - 5*60;
  $query = "SELECT count(*) as Anzahl FROM {drupalmonitor_log} WHERE dt > " . $time_offset . ' AND execution_time > 1000';
  $result = db_query($query);
  return db_result($result);
}

//slow requests //more than 1000 milliseconds
function drupalmonitor_get_load_slowrequests_300s() {
  $time_offset = time() - 5*60;
  $query = "SELECT * FROM {drupalmonitor_log} WHERE dt > " . $time_offset . ' AND execution_time > 1000';
  $result = db_query($query);
  while ($object = db_fetch_object($result)) {
    $slowpages[] = $object;
  }
  return $slowpages;
}

//memory
function drupalmonitor_get_load_maxmemoryusage() {
  $time_offset = time() - 5*60;
  $query = "SELECT MAX(memory) as Anzahl FROM {drupalmonitor_log} WHERE dt > " . $time_offset;
  $result = db_query($query);
  return db_result($result)/1000000;
  return $data;
}

// APC enabled?
function drupalmonitor_load_apcenabled() {
  if (!function_exists('apc_cache_info')) {
    return 0;
  }
  return 1;
}