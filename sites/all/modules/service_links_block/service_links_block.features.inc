<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function service_links_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
