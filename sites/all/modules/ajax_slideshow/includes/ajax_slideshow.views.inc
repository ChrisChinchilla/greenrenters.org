<?php

function ajax_slideshow_views_data() {

    $data['node'] = array(
    'tab_title' => array(
      'title' => t('Tab Title'),
      'help' => t('Title and nid to be used by ajax_slideshow tabs.'), 
      'field' => array(
        'field' => 'title',
        'handler' => 'views_handler_field_tab_title',
        'click sortable' => TRUE,
      ),
    ),
  );
  
  return $data;
}
 
 
/**
 * Implement hook_views_handler().
 *
 * @return array
 */

function ajax_slideshow_views_handlers() {
  $ret = array(
    'info' => array(
      'path'       => drupal_get_path('module', 'ajax_slideshow') . '/includes',
    ),
    'handlers' => array(
      // field handlers
      'views_handler_field_tab_title' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );

  return $ret;
}
