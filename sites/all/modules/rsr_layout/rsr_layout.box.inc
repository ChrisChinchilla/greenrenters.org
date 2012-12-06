<?php

/**
 * Implementation of hook_default_box().
 */
function rsr_layout_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'rsr_cross_stitch';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'RSR Cross Stitch';
  $box->options = array(
    'body' => '<p style="text-align: center; "><a href="/rentalsweetrental"><img alt="Rental Sweet Rental cross stitch" src="/sites/default/files/RSR-cross-stitch.jpg" style="width: 350px; height: 180px; " /></a></p>
',
    'format' => '2',
  );
  $export['rsr_cross_stitch'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'service_links_manual';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Service Links manual';
  $box->options = array(
    'body' => '<?php
$linksArray = service_links_render(NULL, FALSE) ;
foreach($linksArray as $link)
{
print $link;
}
?>',
    'format' => '5',
  );
  $export['service_links_manual'] = $box;

  return $export;
}
