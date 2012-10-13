<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function general_site_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'general';
  $context->description = '';
  $context->tag = 'General Site Wide';
  $context->conditions = array(
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
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'header',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('General Site Wide');
  $export['general'] = $context;

  return $export;
}