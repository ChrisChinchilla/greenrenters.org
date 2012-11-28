<?php

/**
 * Implementation of hook_strongarm().
 */
function cdn_setup_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_advanced_pid_file';
  $strongarm->value = '';
  $export['cdn_advanced_pid_file'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_advanced_synced_files_db';
  $strongarm->value = '';
  $export['cdn_advanced_synced_files_db'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_basic_mapping';
  $strongarm->value = 'https://s3-ap-southeast-2.amazonaws.com/greenrentersimages/';
  $export['cdn_basic_mapping'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_basic_mapping_https';
  $strongarm->value = '';
  $export['cdn_basic_mapping_https'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_exception_auth_users_blacklist';
  $strongarm->value = 'admin*';
  $export['cdn_exception_auth_users_blacklist'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_exception_drupal_path_blacklist';
  $strongarm->value = '';
  $export['cdn_exception_drupal_path_blacklist'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_exception_file_path_blacklist';
  $strongarm->value = '*
sites/default/files/css/*
sites/default/files/js/*
sites/default/files/xmlsitemap/*
sites/default/files/civicrm/*
sites/default/files/ctools/*';
  $export['cdn_exception_file_path_blacklist'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_exception_file_path_whitelist';
  $strongarm->value = 'sites/default/files/*.jpg
sites/default/files/*.gif
sites/default/files/*.png
sites/default/files/*.jpeg';
  $export['cdn_exception_file_path_whitelist'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_farfuture_status';
  $strongarm->value = 0;
  $export['cdn_farfuture_status'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_farfuture_unique_identifier_mapping';
  $strongarm->value = 'misc/*:modules/*:themes/*|drupal_version
sites/*|mtime
sites/*|.avi .m4v .mov .mp4 .wmv .flv|perpetual';
  $export['cdn_farfuture_unique_identifier_mapping'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_https_support';
  $strongarm->value = 0;
  $export['cdn_https_support'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_mode';
  $strongarm->value = 'basic';
  $export['cdn_mode'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'CDN_PICK_SERVER_PHP_CODE_VARIABLE';
  $strongarm->value = '';
  $export['CDN_PICK_SERVER_PHP_CODE_VARIABLE'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_reverse_proxy_test';
  $strongarm->value = FALSE;
  $export['cdn_reverse_proxy_test'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_stats';
  $strongarm->value = 0;
  $export['cdn_stats'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_status';
  $strongarm->value = '2';
  $export['cdn_status'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_theme_layer_fallback';
  $strongarm->value = TRUE;
  $export['cdn_theme_layer_fallback'] = $strongarm;

  return $export;
}
