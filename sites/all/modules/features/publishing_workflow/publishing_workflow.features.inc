<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function publishing_workflow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function publishing_workflow_views_api() {
  return array(
    'api' => '3.0',
  );
}
