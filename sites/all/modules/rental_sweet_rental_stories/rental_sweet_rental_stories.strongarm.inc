<?php

/**
 * Implementation of hook_strongarm().
 */
function rental_sweet_rental_stories_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_rsr_story';
  $strongarm->value = '0';
  $export['comment_anonymous_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_rsr_story';
  $strongarm->value = '3';
  $export['comment_controls_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_rsr_story';
  $strongarm->value = '4';
  $export['comment_default_mode_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_rsr_story';
  $strongarm->value = '1';
  $export['comment_default_order_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_rsr_story';
  $strongarm->value = '50';
  $export['comment_default_per_page_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_rsr_story';
  $strongarm->value = '0';
  $export['comment_form_location_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_rsr_story';
  $strongarm->value = '1';
  $export['comment_preview_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_rsr_story';
  $strongarm->value = '2';
  $export['comment_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_rsr_story';
  $strongarm->value = '1';
  $export['comment_subject_field_rsr_story'] = $strongarm;

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
  $strongarm->name = 'nodewords_edit_metatags_rsr_story';
  $strongarm->value = 1;
  $export['nodewords_edit_metatags_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_filter_modules_output_rsr_story';
  $strongarm->value = array();
  $export['nodewords_filter_modules_output_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_filter_regexp_rsr_story';
  $strongarm->value = '';
  $export['nodewords_filter_regexp_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_metatags_generation_method_rsr_story';
  $strongarm->value = '1';
  $export['nodewords_metatags_generation_method_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_metatags_generation_source_rsr_story';
  $strongarm->value = '1';
  $export['nodewords_metatags_generation_source_rsr_story'] = $strongarm;

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
  $strongarm->value = array();
  $export['node_options_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_rsr_story';
  $strongarm->value = '';
  $export['page_title_type_rsr_story'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_rsr_story_showfield';
  $strongarm->value = 0;
  $export['page_title_type_rsr_story_showfield'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_rsr_story_pattern';
  $strongarm->value = 'rentalsweetrental/stories/[title-raw]';
  $export['pathauto_node_rsr_story_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_rsr_story';
  $strongarm->value = '0';
  $export['upload_rsr_story'] = $strongarm;

  return $export;
}
