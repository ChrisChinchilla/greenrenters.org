<?php

/**
 * Implementation of hook_strongarm().
 */
function rental_sweet_rental_stories_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_rsr_story';
  $strongarm->value = array(
    'title' => '9',
    'body_field' => '11',
    'revision_information' => '17',
    'author' => '16',
    'options' => '15',
    'comment_settings' => '21',
    'menu' => '13',
    'path' => '20',
    'path_redirect' => '19',
    'xmlsitemap' => '18',
    'nodewords' => '14',
  );
  $export['content_extra_weights_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_use_alt_attribute_rsr_story';
  $strongarm->value = 1;
  $export['nodewords_use_alt_attribute_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_rsr_story';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_rsr_story';
  $strongarm->value = '0';
  $export['upload_rsr_story'] = $strongarm;

  return $export;
}
