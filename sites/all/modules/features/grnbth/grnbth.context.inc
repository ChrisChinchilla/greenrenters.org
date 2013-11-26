<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function grnbth_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'grnbth_pages';
  $context->description = '';
  $context->tag = 'Green renting needn\'t be this hard';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'grnbth_holder' => 'grnbth_holder',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-grnbth_text' => array(
          'module' => 'boxes',
          'delta' => 'grnbth_text',
          'region' => 'header',
          'weight' => 0,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'grnbth',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Green renting needn\'t be this hard');
  $export['grnbth_pages'] = $context;

  return $export;
}
