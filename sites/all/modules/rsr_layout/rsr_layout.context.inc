<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function rsr_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_cross_stitch';
  $context->description = '';
  $context->tag = 'Rental Sweet Rental';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'rentalsweetrental' => 'rentalsweetrental',
        'rentalsweetrental/*' => 'rentalsweetrental/*',
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
        'views-members_map-block_1' => array(
          'module' => 'views',
          'delta' => 'members_map-block_1',
          'region' => 'left',
          'weight' => 1,
        ),
        'views-members_testimonials-block_1' => array(
          'module' => 'views',
          'delta' => 'members_testimonials-block_1',
          'region' => 'left',
          'weight' => 2,
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
  $export['header_cross_stitch'] = $context;

  return $export;
}
