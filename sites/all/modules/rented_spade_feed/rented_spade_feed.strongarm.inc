<?php

/**
 * Implementation of hook_strongarm().
 */
function rented_spade_feed_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_importer';
  $strongarm->value = array(
    'rented_spade_import' => FALSE,
    'node' => TRUE,
    'user' => TRUE,
    'feed' => TRUE,
    'opml' => TRUE,
  );
  $export['default_feeds_importer'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'rented_spade_import-tags-set_default_value' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_reschedule';
  $strongarm->value = array(
    'rented_spade_import' => 'rented_spade_import',
  );
  $export['feeds_reschedule'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_default_items';
  $strongarm->value = '10';
  $export['feed_default_items'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_item_length';
  $strongarm->value = 'teaser';
  $export['feed_item_length'] = $strongarm;

  return $export;
}
