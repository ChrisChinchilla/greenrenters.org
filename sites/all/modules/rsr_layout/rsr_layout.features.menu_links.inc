<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function rsr_layout_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-block-three:node/1146
  $menu_links['menu-block-three:node/1146'] = array(
    'menu_name' => 'menu-block-three',
    'link_path' => 'node/1146',
    'router_path' => 'node/%',
    'link_title' => 'Rental Sweet Rental',
    'options' => array(
      'attributes' => array(
        'title' => 'Rental Sweet Rental',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-block-three:node/1152
  $menu_links['menu-block-three:node/1152'] = array(
    'menu_name' => 'menu-block-three',
    'link_path' => 'node/1152',
    'router_path' => 'node/%',
    'link_title' => 'Prizes',
    'options' => array(
      'attributes' => array(
        'title' => 'Rental Sweet Rental Prizes',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/1146',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Prizes');
  t('Rental Sweet Rental');


  return $menu_links;
}
