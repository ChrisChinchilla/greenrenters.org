<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function rsr_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'rsr_layout';
  $context->description = '';
  $context->tag = 'Rental Sweet Rental';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'rentalsweetrental' => 'rentalsweetrental',
        'rentalsweetrental/*' => 'rentalsweetrental/*',
      ),
    ),
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'if(($_SERVER[\'REQUEST_URI\'] == \'/civicrm/contribute/transact?reset=1&id=10\') || (($_SERVER[\'REDIRECT_URL\'] == \'/civicrm/contribute/transact\') && ($_SESSION[CiviCRM][pastContributionID] == \'10\')))
{
return TRUE;
}',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-27' => array(
          'module' => 'block',
          'delta' => 27,
          'region' => 'left',
          'weight' => 0,
        ),
        'block-28' => array(
          'module' => 'block',
          'delta' => 28,
          'region' => 'left',
          'weight' => 1,
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'left',
          'weight' => 2,
        ),
        'views-members_map-block_1' => array(
          'module' => 'views',
          'delta' => 'members_map-block_1',
          'region' => 'left',
          'weight' => 3,
        ),
        'views-members_testimonials-block_1' => array(
          'module' => 'views',
          'delta' => 'members_testimonials-block_1',
          'region' => 'left',
          'weight' => 4,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'rsr',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Rental Sweet Rental');
  $export['rsr_layout'] = $context;

  return $export;
}
