<?php

/**
 * Implementation of hook_views_default_views().
 */
function members_map_views_default_views() {
  $views = array();

  // Exported view: members_map
  $view = new view;
  $view->name = 'members_map';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'civicrm_contact';
  $view->human_name = 'Members Map';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['preset'] = 'members_map';
  /* Field: CiviCRM Address: ZIP / Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['postal_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['external'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['postal_code']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['postal_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['postal_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['postal_code']['hide_alter_empty'] = 1;
  /* Field: CiviCRM Contacts: First Name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['first_name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['first_name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['first_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['first_name']['link_to_civicrm_contact'] = 0;
  /* Field: CiviCRM Contacts: Last Name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['last_name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['last_name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['last_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['last_name']['link_to_civicrm_contact'] = 0;
  /* Field: CiviCRM Address: Latitude */
  $handler->display->display_options['fields']['geo_code_1']['id'] = 'geo_code_1';
  $handler->display->display_options['fields']['geo_code_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['geo_code_1']['field'] = 'geo_code_1';
  $handler->display->display_options['fields']['geo_code_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['geo_code_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['geo_code_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['geo_code_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['geo_code_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['hide_alter_empty'] = 1;
  /* Field: CiviCRM Address: Longitude */
  $handler->display->display_options['fields']['geo_code_2']['id'] = 'geo_code_2';
  $handler->display->display_options['fields']['geo_code_2']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['geo_code_2']['field'] = 'geo_code_2';
  $handler->display->display_options['fields']['geo_code_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['geo_code_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['geo_code_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['geo_code_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['geo_code_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['hide_alter_empty'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[first_name], [postal_code]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Filter: CiviCRM Member: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'civicrm_membership';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    5 => '5',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['preset'] = 'members_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'members';

  /* Display: OpenLayers Data */
  $handler = $view->new_display('openlayers', 'OpenLayers Data', 'openlayers_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'other_latlon',
    'other_lat' => 'geo_code_1',
    'other_lon' => 'geo_code_2',
    'openlayers_wkt' => 'postal_code',
    'other_top' => 'postal_code',
    'other_right' => 'postal_code',
    'other_bottom' => 'postal_code',
    'other_left' => 'postal_code',
    'name_field' => 'nothing',
    'keep_orig_name_field' => 1,
    'description_field' => '',
    'keep_orig_desc_field' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  $views[$view->name] = $view;

  return $views;
}
