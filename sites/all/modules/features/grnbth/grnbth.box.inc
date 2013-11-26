<?php

/**
 * Implementation of hook_default_box().
 */
function grnbth_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'grnbth_logo_blocks';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'grnbth logos';
  $box->options = array(
    'body' => '<p>LOGO</p>
<p>LOGO</p>
',
    'format' => '2',
  );
  $export['grnbth_logo_blocks'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'grnbth_more';
  $box->plugin_key = 'simple';
  $box->title = 'Want more?';
  $box->description = 'grnbth next';
  $box->options = array(
    'body' => '<p>Do this</p>
<p>And this</p>
',
    'format' => '2',
  );
  $export['grnbth_more'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'grnbth_text';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'grnbth text';
  $box->options = array(
    'body' => '<p><img src="/sites/default/files/wysiwyg_images/grnbth/grnbth_text.jpg" /></p>
',
    'format' => '2',
  );
  $export['grnbth_text'] = $box;

  return $export;
}
