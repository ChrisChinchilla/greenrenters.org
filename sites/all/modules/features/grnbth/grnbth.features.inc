<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function grnbth_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function grnbth_imagecache_default_presets() {
  $items = array(
    'grnbth_sidebar' => array(
      'presetname' => 'grnbth_sidebar',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '280',
            'height' => '',
            'upscale' => 0,
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
function grnbth_node_info() {
  $items = array(
    'grnbth_holder' => array(
      'name' => t('grnbth holder'),
      'module' => 'features',
      'description' => t('Top level page for Green Renting postcards'),
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
function grnbth_views_api() {
  return array(
    'api' => '3.0',
  );
}
