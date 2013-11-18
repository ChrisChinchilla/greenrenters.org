<?php

/**
 * Implementation of hook_strongarm().
 */
function volunteering_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_webform';
  $strongarm->value = array(
    'webform' => '10',
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
  $export['content_extra_weights_webform'] = $strongarm;

  return $export;
}
