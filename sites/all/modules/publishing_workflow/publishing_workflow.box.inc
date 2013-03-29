<?php

/**
 * Implementation of hook_default_box().
 */
function publishing_workflow_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contribute_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Contribute to article';
  $box->options = array(
    'body' => '<p>Is something missing, need updating or inaccurate? Simply click the&nbsp;<em>edit</em>&nbsp;link above to make a change! Create a new articles&nbsp;<a href="/node/add">here</a>.</p>
',
    'format' => '2',
  );
  $export['contribute_box'] = $box;

  return $export;
}
