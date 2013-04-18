<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function menus_block_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-block-one:node/1108
  $menu_links['menu-block-one:node/1108'] = array(
    'menu_name' => 'menu-block-one',
    'link_path' => 'node/1108',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-block-one:node/13
  $menu_links['menu-block-one:node/13'] = array(
    'menu_name' => 'menu-block-one',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Workshops & events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-block-three:node/16
  $menu_links['menu-block-three:node/16'] = array(
    'menu_name' => 'menu-block-three',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Support',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-block-three:store
  $menu_links['menu-block-three:store'] = array(
    'menu_name' => 'menu-block-three',
    'link_path' => 'store',
    'router_path' => 'store',
    'link_title' => 'Store',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-block-two:node/1127
  $menu_links['menu-block-two:node/1127'] = array(
    'menu_name' => 'menu-block-two',
    'link_path' => 'node/1127',
    'router_path' => 'node/%',
    'link_title' => 'Volunteer',
    'options' => array(
      'attributes' => array(
        'title' => 'Volunteer',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Store');
  t('Support');
  t('Volunteer');
  t('Workshops & events');


  return $menu_links;
}
