<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function members_map_openlayers_presets() {
  $export = array();

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'members_map';
  $openlayers_presets->title = 'Members Map';
  $openlayers_presets->description = 'Members Map';
  $openlayers_presets->data = array(
    'width' => '350px',
    'height' => '350px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '133.68164061964, -27.371767299514',
        'zoom' => '4',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_tooltip' => array(
        'layers' => array(
          'members_map_openlayers_2' => 'members_map_openlayers_2',
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'members_map_openlayers_2' => 'members_map_openlayers_2',
    ),
    'layer_styles' => array(
      'members_map_openlayers_2' => array(
        'default' => 'Members Map',
        'select' => 'Members Map',
        'temporary' => 'Members Map',
      ),
    ),
    'layer_activated' => array(
      'members_map_openlayers_2' => 'members_map_openlayers_2',
    ),
    'layer_switcher' => array(
      'members_map_openlayers_2' => 'members_map_openlayers_2',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'Members Map',
      'select' => 'Members Map',
      'temporary' => 'Members Map',
    ),
  );
  $export['members_map'] = $openlayers_presets;

  return $export;
}
