<?php

/**
 * Implementation of hook_strongarm().
 */
function grnbth_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_grnbth_holder';
  $strongarm->value = '0';
  $export['comment_anonymous_grnbth_holder'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_grnbth_holder';
  $strongarm->value = '3';
  $export['comment_controls_grnbth_holder'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_grnbth_holder';
  $strongarm->value = '4';
  $export['comment_default_mode_grnbth_holder'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_grnbth_holder';
  $strongarm->value = '1';
  $export['comment_default_order_grnbth_holder'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_grnbth_holder';
  $strongarm->value = '50';
  $export['comment_default_per_page_grnbth_holder'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_grnbth_holder';
  $strongarm->value = '0';
  $export['comment_form_location_grnbth_holder'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_grnbth_holder';
  $strongarm->value = '0';
  $export['comment_grnbth_holder'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_grnbth_holder';
  $strongarm->value = '1';
  $export['comment_preview_grnbth_holder'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_grnbth_holder';
  $strongarm->value = '1';
  $export['comment_subject_field_grnbth_holder'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_grnbth_holder';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '30',
    'menu' => '-2',
    'path' => '30',
    'attachments' => '30',
    'path_redirect' => '30',
    'xmlsitemap' => '30',
    'nodewords' => '10',
  );
  $export['content_extra_weights_grnbth_holder'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_grnbth_holder';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_grnbth_holder'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_grnbth_holder';
  $strongarm->value = '1';
  $export['upload_grnbth_holder'] = $strongarm;

  return $export;
}
