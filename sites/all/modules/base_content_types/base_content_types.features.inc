<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function base_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function base_content_types_imagecache_default_presets() {
  $items = array(
    'Content_Thumb' => array(
      'presetname' => 'Content_Thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '150',
            'height' => '150',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function base_content_types_node_info() {
  $items = array(
    'campaign' => array(
      'name' => t('Campaign'),
      'module' => 'features',
      'description' => t('Campaigns we support or are part of, but not directly involved in the running of, they would be projects.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'competition' => array(
      'name' => t('Competition'),
      'module' => 'features',
      'description' => t('Short terms and special competitions'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => t('Interesting events that aren\'t run by Green renters.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'module' => 'features',
      'description' => t('News… Much like normal news really, internal, external, interesting tidbits.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'opinion' => array(
      'name' => t('Opinion'),
      'module' => 'features',
      'description' => t('Articles that express an opinion on a topic or topic(s)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('Static pages that rarely change.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'resource' => array(
      'name' => t('Resource'),
      'module' => 'features',
      'description' => t('Helpful resources for Green Renters (WIP)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'service' => array(
      'name' => t('Service'),
      'module' => 'features',
      'description' => t('These are 3rd party services we get a small commission from (For review)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'story' => array(
      'name' => t('Story'),
      'module' => 'features',
      'description' => t('Content that doesn\'t really fit anywhere else…'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'tutorial' => array(
      'name' => t('Tutorial'),
      'module' => 'features',
      'description' => t('Some of our favourite content, how tos, tutorials etc…'),
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
