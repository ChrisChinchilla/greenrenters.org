<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function general_site_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = '';
  $context->tag = 'General site wide';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'front_page',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('General site wide');
  $export['front_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'general';
  $context->description = '';
  $context->tag = 'General site wide';
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
        '~node/edit/*' => '~node/edit/*',
        '~node/*/edit' => '~node/*/edit',
        '~node/add/*' => '~node/add/*',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('General site wide');
  $export['general'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nodes';
  $context->description = '';
  $context->tag = 'General site wide';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'campaign' => 'campaign',
        'competition' => 'competition',
        'news' => 'news',
        'opinion' => 'opinion',
        'pressarticle' => 'pressarticle',
        'product' => 'product',
        'project' => 'project',
        'resource' => 'resource',
        'service' => 'service',
        'story' => 'story',
        'tutorial' => 'tutorial',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'normal_nodes',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('General site wide');
  $export['nodes'] = $context;

  return $export;
}
