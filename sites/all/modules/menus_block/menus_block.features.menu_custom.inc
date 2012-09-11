<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function menus_block_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-block-one
  $menus['menu-block-one'] = array(
    'menu_name' => 'menu-block-one',
    'title' => 'What we do',
    'description' => '',
  );
  // Exported menu: menu-block-three
  $menus['menu-block-three'] = array(
    'menu_name' => 'menu-block-three',
    'title' => 'Support',
    'description' => '',
  );
  // Exported menu: menu-block-two
  $menus['menu-block-two'] = array(
    'menu_name' => 'menu-block-two',
    'title' => 'Get Involved',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Get Involved');
  t('Support');
  t('What we do');


  return $menus;
}
