<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function press_area_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-block-one:press
  $menu_links['menu-block-one:press'] = array(
    'menu_name' => 'menu-block-one',
    'link_path' => 'press',
    'router_path' => 'press',
    'link_title' => 'Press',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Press');


  return $menu_links;
}
