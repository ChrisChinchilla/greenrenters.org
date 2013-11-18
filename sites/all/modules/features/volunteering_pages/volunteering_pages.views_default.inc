<?php

/**
 * Implementation of hook_views_default_views().
 */
function volunteering_pages_views_default_views() {
  $views = array();

  // Exported view: vol_socials
  $view = new view;
  $view->name = 'vol_socials';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'civicrm_event';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['pager']['options']['id'] = 2;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'start_date' => 'start_date',
    'end_date' => 'end_date',
    'title' => 'title',
    'city' => 'city',
    'state_province' => 'state_province',
    'registration_link_text' => 'registration_link_text',
  );
  $handler->display->display_options['style_options']['default'] = 'start_date';
  $handler->display->display_options['style_options']['info'] = array(
    'start_date' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'end_date' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'city' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'state_province' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'registration_link_text' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: CiviCRM Events: Start Date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['label'] = '';
  $handler->display->display_options['fields']['start_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['start_date']['custom_date_format'] = 'D jS M, g:ia';
  /* Field: CiviCRM Events: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_civicrm_event'] = 'page';
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['city']['hide_empty'] = 1;
  $handler->display->display_options['fields']['city']['empty_zero'] = 0;
  /* Field: CiviCRM Address: State / Province */
  $handler->display->display_options['fields']['state_province']['id'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['state_province']['field'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['label'] = '';
  $handler->display->display_options['fields']['state_province']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['state_province']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['state_province']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['state_province']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['state_province']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['state_province']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['state_province']['alter']['html'] = 0;
  $handler->display->display_options['fields']['state_province']['hide_empty'] = 1;
  $handler->display->display_options['fields']['state_province']['empty_zero'] = 0;
  /* Sort criterion: CiviCRM Events: Start Date */
  $handler->display->display_options['sorts']['start_date']['id'] = 'start_date';
  $handler->display->display_options['sorts']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['sorts']['start_date']['field'] = 'start_date';
  /* Argument: CiviCRM Events: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'Volunteer Social';
  $handler->display->display_options['arguments']['title']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['title']['validate_fail'] = 'ignore';
  /* Filter: CiviCRM Events: Start Date */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['operator'] = '>';
  $handler->display->display_options['filters']['start_date']['value']['value'] = '-2 day';
  $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_date']['expose']['operator'] = FALSE;
  /* Filter: CiviCRM Events: Is Public */
  $handler->display->display_options['filters']['is_public']['id'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_public']['field'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['value'] = '1';
  $handler->display->display_options['filters']['is_public']['expose']['operator'] = FALSE;
  /* Filter: CiviCRM Events: Is Active */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['value'] = '1';
  $handler->display->display_options['filters']['is_active']['expose']['operator'] = FALSE;
  /* Filter: CiviCRM Custom: Event management: All details confirmed? */
  $handler->display->display_options['filters']['all_details_confirmed__79']['id'] = 'all_details_confirmed__79';
  $handler->display->display_options['filters']['all_details_confirmed__79']['table'] = 'civicrm_value_event_management_16';
  $handler->display->display_options['filters']['all_details_confirmed__79']['field'] = 'all_details_confirmed__79';
  $handler->display->display_options['filters']['all_details_confirmed__79']['value'] = '1';
  $handler->display->display_options['filters']['all_details_confirmed__79']['expose']['operator'] = FALSE;
  /* Filter: CiviCRM Custom: Event management: Terms & quote agreed? */
  $handler->display->display_options['filters']['terms_agreed_76']['id'] = 'terms_agreed_76';
  $handler->display->display_options['filters']['terms_agreed_76']['table'] = 'civicrm_value_event_management_16';
  $handler->display->display_options['filters']['terms_agreed_76']['field'] = 'terms_agreed_76';
  $handler->display->display_options['filters']['terms_agreed_76']['value'] = '1';
  $handler->display->display_options['filters']['terms_agreed_76']['expose']['operator'] = FALSE;
  /* Filter: CiviCRM Events: Include Template */
  $handler->display->display_options['filters']['is_template']['id'] = 'is_template';
  $handler->display->display_options['filters']['is_template']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_template']['field'] = 'is_template';
  $handler->display->display_options['filters']['is_template']['value'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  $views[$view->name] = $view;

  return $views;
}
