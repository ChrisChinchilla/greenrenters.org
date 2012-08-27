<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function projects_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function projects_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'module' => 'features',
      'description' => t('Projects we\'ve been or involved with.'),
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
function projects_views_api() {
  return array(
    'api' => '3.0',
  );
}
