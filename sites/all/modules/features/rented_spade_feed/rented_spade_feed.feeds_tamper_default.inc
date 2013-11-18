<?php

/**
 * Implementation of hook_feeds_tamper_default().
 */
function rented_spade_feed_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'rented_spade_import-tags-set_default_value';
  $feeds_tamper->importer = 'rented_spade_import';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Garden',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['rented_spade_import-tags-set_default_value'] = $feeds_tamper;

  return $export;
}
