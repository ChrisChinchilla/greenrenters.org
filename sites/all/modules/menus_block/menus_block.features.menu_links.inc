<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function menus_block_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-block-one:blog
  $menu_links['menu-block-one:blog'] = array(
    'menu_name' => 'menu-block-one',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-block-one:node/11
  $menu_links['menu-block-one:node/11'] = array(
    'menu_name' => 'menu-block-one',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Campaigns',
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
    'weight' => '-46',
  );
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
  // Exported menu link: menu-block-one:projects
  $menu_links['menu-block-one:projects'] = array(
    'menu_name' => 'menu-block-one',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Projects',
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
    'weight' => '-48',
  );
  // Exported menu link: menu-block-three:civicrm/contribute/transact
  $menu_links['menu-block-three:civicrm/contribute/transact'] = array(
    'menu_name' => 'menu-block-three',
    'link_path' => 'civicrm/contribute/transact',
    'router_path' => 'civicrm',
    'link_title' => 'Donate',
    'options' => array(
      'query' => 'reset=1&id=4',
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
  // Exported menu link: menu-block-two:contact/lightbox2
  $menu_links['menu-block-two:contact/lightbox2'] = array(
    'menu_name' => 'menu-block-two',
    'link_path' => 'contact/lightbox2',
    'router_path' => 'contact/lightbox2',
    'link_title' => 'Contact Us',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Blog');
  t('Campaigns');
  t('Contact Us');
  t('Donate');
  t('Projects');
  t('Store');
  t('Support');
  t('Volunteer');
  t('Workshops & events');


  return $menu_links;
}
