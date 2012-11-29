<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function rental_sweet_rental_stories_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function rental_sweet_rental_stories_node_info() {
  $items = array(
    'rsr_story' => array(
      'name' => t('Rental Sweet Rental Story'),
      'module' => 'features',
      'description' => t('Stories for Rental Sweet Rental campaign'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => t('Try to be as descriptive as possible, tell a story, spin a yarn.'),
    ),
  );
  return $items;
}
