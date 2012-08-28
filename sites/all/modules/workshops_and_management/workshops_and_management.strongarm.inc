<?php

/**
 * Implementation of hook_strongarm().
 */
function workshops_and_management_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_workshop';
  $strongarm->value = '0';
  $export['comment_anonymous_workshop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_workshop';
  $strongarm->value = '3';
  $export['comment_controls_workshop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_workshop';
  $strongarm->value = '4';
  $export['comment_default_mode_workshop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_workshop';
  $strongarm->value = '1';
  $export['comment_default_order_workshop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_workshop';
  $strongarm->value = '50';
  $export['comment_default_per_page_workshop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_workshop';
  $strongarm->value = '0';
  $export['comment_form_location_workshop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_workshop';
  $strongarm->value = '1';
  $export['comment_preview_workshop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_workshop';
  $strongarm->value = '1';
  $export['comment_subject_field_workshop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_workshop';
  $strongarm->value = '0';
  $export['comment_workshop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_workshop';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '4',
    'revision_information' => '7',
    'author' => '1',
    'options' => '8',
    'comment_settings' => '6',
    'menu' => '-4',
    'taxonomy' => '-2',
    'path' => '-3',
    'attachments' => '3',
    'path_redirect' => '-1',
    'xmlsitemap' => '0',
    'nodewords' => '5',
  );
  $export['content_extra_weights_workshop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_workshop';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_workshop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_workshop';
  $strongarm->value = '1';
  $export['upload_workshop'] = $strongarm;

  return $export;
}