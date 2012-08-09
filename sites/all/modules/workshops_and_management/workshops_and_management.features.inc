<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function workshops_and_management_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function workshops_and_management_node_info() {
  $items = array(
    'workshop' => array(
      'name' => t('Workshop'),
      'module' => 'features',
      'description' => t('Workshop types (WIP)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function workshops_and_management_views_api() {
  return array(
    'api' => '3.0',
  );
}
