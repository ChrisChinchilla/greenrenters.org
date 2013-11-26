<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function menus_block_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'admin_sitemenus';
  $context->description = '';
  $context->tag = 'site menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~rsr_layout' => '~rsr_layout',
      ),
    ),
    'path' => array(
      'values' => array(
        '~rentalsweetrental' => '~rentalsweetrental',
        '~rentalsweetrental/*' => '~rentalsweetrental/*',
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'Admins' => 'Admins',
        'Editors' => 'Editors',
        'Members' => 'Members',
        'Site member' => 'Site member',
        'Staff' => 'Staff',
        'Volunteer' => 'Volunteer',
        'Writers' => 'Writers',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-1' => array(
          'module' => 'user',
          'delta' => 1,
          'region' => 'left',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('site menus');
  $export['admin_sitemenus'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitemenus';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~rsr_layout' => '~rsr_layout',
        '~grnbth_pages' => '~grnbth_pages',
      ),
    ),
    'path' => array(
      'values' => array(
        '~rentalsweetrental' => '~rentalsweetrental',
        '~rentalsweetrental/*' => '~rentalsweetrental/*',
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-0' => array(
          'module' => 'search',
          'delta' => 0,
          'region' => 'left',
          'weight' => 0,
        ),
        'menu-menu-block-one' => array(
          'module' => 'menu',
          'delta' => 'menu-block-one',
          'region' => 'left',
          'weight' => 1,
        ),
        'menu-menu-block-two' => array(
          'module' => 'menu',
          'delta' => 'menu-block-two',
          'region' => 'left',
          'weight' => 2,
        ),
        'menu-menu-block-three' => array(
          'module' => 'menu',
          'delta' => 'menu-block-three',
          'region' => 'left',
          'weight' => 3,
        ),
        'boxes-rsr_sidebar' => array(
          'module' => 'boxes',
          'delta' => 'rsr_sidebar',
          'region' => 'left',
          'weight' => 4,
        ),
        'block-17' => array(
          'module' => 'block',
          'delta' => 17,
          'region' => 'left',
          'weight' => 5,
        ),
        'uc_cart-0' => array(
          'module' => 'uc_cart',
          'delta' => 0,
          'region' => 'left',
          'weight' => 6,
        ),
        'ad-918' => array(
          'module' => 'ad',
          'delta' => 918,
          'region' => 'left',
          'weight' => 7,
        ),
        'ad-1025' => array(
          'module' => 'ad',
          'delta' => 1025,
          'region' => 'left',
          'weight' => 8,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['sitemenus'] = $context;

  return $export;
}
