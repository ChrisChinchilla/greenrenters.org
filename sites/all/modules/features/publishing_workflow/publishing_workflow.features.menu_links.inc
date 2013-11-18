<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function publishing_workflow_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-block-two:node/1151
  $menu_links['menu-block-two:node/1151'] = array(
    'menu_name' => 'menu-block-two',
    'link_path' => 'node/1151',
    'router_path' => 'node/%',
    'link_title' => 'Contribute to this site',
    'options' => array(
      'attributes' => array(
        'title' => 'Contribute to this site',
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
  t('Contribute to this site');


  return $menu_links;
}
