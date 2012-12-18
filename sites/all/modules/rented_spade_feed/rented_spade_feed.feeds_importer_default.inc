<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function rented_spade_feed_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'rented_spade_import';
  $feeds_importer->config = array(
    'name' => 'Rented Spade import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'story',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'parent:taxonomy:3',
            'target' => 'taxonomy:3',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'url',
            'target' => 'field_wysiwyg_images:fig',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'tags',
            'target' => 'taxonomy:2',
            'unique' => FALSE,
          ),
        ),
        'input_format' => '2',
        'author' => '133',
        'authorize' => 0,
      ),
    ),
    'content_type' => 'feed',
    'update' => 0,
    'import_period' => '259200',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['rented_spade_import'] = $feeds_importer;

  return $export;
}
