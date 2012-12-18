<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function rented_spade_feed_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  elseif ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => 2);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
