<?php

function drupalmonitor_status_listmodules() {
  $query = "SELECT * FROM system";
  $result = db_query($query, $db);
  $data = array();
  while ($result && $array = db_fetch_array($result)) {
    $array['info'] = unserialize($array['info']);
    $data[$array['name']] = $array;
  }
  return $data;
}

function drupalmonitor_status_listvars() {
  $query = "SELECT * FROM variable";
  $result = db_query($query);
  $data = array();
  while ($result && $record = db_fetch_object($result)) {
    $data[$record->name] = unserialize(htmlentities($record->value));
  }
  //print_r($data);
  return $data;
}

function drupalmonitor_status_checkunwantedfiles() {
  $files = array(
    'CHANGELOG.txt',
    'COPYRIGHT.txt',
    'INSTALL.mysql.txt',
    'INSTALL.pgsql.txt',
    'INSTALL.txt',
    'LICENSE.txt',
    'MAINTAINERS.txt',
    'UPGRADE.txt',
  );

  $error = FALSE;
  foreach ($files as $file) {
    // It would seem that $_SERVER['DOCUMENT_ROOT'] is not always set, hence the
    // use of realpath() in combination with base path to determine the full
    // path to the Drupal installation.
    if (file_exists(realpath('.'.base_path()).'/'.$file)) {
      $error = TRUE;
      break;
    }
  }
  if ($error) {
    return 1;
  }
  return 0;
}