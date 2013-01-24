<?php

/**
 * Implementation of hook_default_box().
 */
function menus_block_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'rsr_sidebar';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'RSR box for sidebars';
  $box->options = array(
    'body' => '<p style="text-align: center;"><a href="/rentalsweetrental"><img alt="Rental Sweet Rental cross stitch" src="/sites/default/files/resize/RSR-cross-stitch-350x180.jpg" style="width: 220px; height: 123px;" /></a><br />
	<small>Our new membership program</small></p>
',
    'format' => '2',
  );
  $export['rsr_sidebar'] = $box;

  return $export;
}
