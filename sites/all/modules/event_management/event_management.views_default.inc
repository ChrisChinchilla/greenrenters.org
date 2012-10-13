<?php

/**
 * Implementation of hook_views_default_views().
 */
function event_management_views_default_views() {
  $views = array();

  // Exported view: civievent_management
  $view = new view;
  $view->name = 'civievent_management';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'civicrm_event';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Event Management';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => 3,
    10 => 10,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 20;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'start_date' => 'start_date',
    'title' => 'title',
    'city' => 'city',
    'is_active' => 'is_active',
    'is_online_registration' => 'is_online_registration',
    'is_public' => 'is_public',
    'all_details_confirmed__79' => 'all_details_confirmed__79',
    'terms_agreed_76' => 'terms_agreed_76',
    'included_in_newsletter__72' => 'included_in_newsletter__72',
    'promoted_on_facebook_73' => 'promoted_on_facebook_73',
    'promoted_on_twitter__74' => 'promoted_on_twitter__74',
    'sent_to_press_list__75' => 'sent_to_press_list__75',
    'payment_status_83' => 'payment_status_83',
  );
  $handler->display->display_options['style_options']['default'] = 'start_date';
  $handler->display->display_options['style_options']['info'] = array(
    'start_date' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'city' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'is_active' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'is_online_registration' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'is_public' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'all_details_confirmed__79' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'terms_agreed_76' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'included_in_newsletter__72' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'promoted_on_facebook_73' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'promoted_on_twitter__74' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'sent_to_press_list__75' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'payment_status_83' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['id']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['id']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['id']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['id']['format_plural'] = 0;
  /* Field: CiviCRM Events: Start Date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['label'] = '';
  $handler->display->display_options['fields']['start_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['start_date']['custom_date_format'] = 'd/m/y';
  /* Field: CiviCRM Events: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'civicrm/event/manage/settings?reset=1&action=update&id=[id]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['city']['empty_zero'] = 0;
  /* Field: CiviCRM Events: Is Active */
  $handler->display->display_options['fields']['is_active']['id'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['is_active']['field'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['label'] = 'Active?';
  $handler->display->display_options['fields']['is_active']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['is_active']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['is_active']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['is_active']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['is_active']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['is_active']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['is_active']['alter']['html'] = 0;
  $handler->display->display_options['fields']['is_active']['hide_empty'] = 0;
  $handler->display->display_options['fields']['is_active']['empty_zero'] = 0;
  $handler->display->display_options['fields']['is_active']['not'] = 0;
  /* Field: CiviCRM Events: Is Online Registration On */
  $handler->display->display_options['fields']['is_online_registration']['id'] = 'is_online_registration';
  $handler->display->display_options['fields']['is_online_registration']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['is_online_registration']['field'] = 'is_online_registration';
  $handler->display->display_options['fields']['is_online_registration']['label'] = 'Open?';
  $handler->display->display_options['fields']['is_online_registration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['is_online_registration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['is_online_registration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['is_online_registration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['is_online_registration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['is_online_registration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['is_online_registration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['is_online_registration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['is_online_registration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['is_online_registration']['not'] = 0;
  /* Field: CiviCRM Events: Is Public */
  $handler->display->display_options['fields']['is_public']['id'] = 'is_public';
  $handler->display->display_options['fields']['is_public']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['is_public']['field'] = 'is_public';
  $handler->display->display_options['fields']['is_public']['label'] = 'Public?';
  $handler->display->display_options['fields']['is_public']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['is_public']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['is_public']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['is_public']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['is_public']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['is_public']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['is_public']['alter']['html'] = 0;
  $handler->display->display_options['fields']['is_public']['hide_empty'] = 0;
  $handler->display->display_options['fields']['is_public']['empty_zero'] = 0;
  $handler->display->display_options['fields']['is_public']['not'] = 0;
  /* Field: CiviCRM Custom: Event management: All details confirmed? */
  $handler->display->display_options['fields']['all_details_confirmed__79']['id'] = 'all_details_confirmed__79';
  $handler->display->display_options['fields']['all_details_confirmed__79']['table'] = 'civicrm_value_event_management_16';
  $handler->display->display_options['fields']['all_details_confirmed__79']['field'] = 'all_details_confirmed__79';
  $handler->display->display_options['fields']['all_details_confirmed__79']['label'] = 'Details?';
  $handler->display->display_options['fields']['all_details_confirmed__79']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['all_details_confirmed__79']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['all_details_confirmed__79']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['all_details_confirmed__79']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['all_details_confirmed__79']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['all_details_confirmed__79']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['all_details_confirmed__79']['alter']['html'] = 0;
  $handler->display->display_options['fields']['all_details_confirmed__79']['hide_empty'] = 0;
  $handler->display->display_options['fields']['all_details_confirmed__79']['empty_zero'] = 0;
  /* Field: CiviCRM Custom: Event management: Terms & quote agreed? */
  $handler->display->display_options['fields']['terms_agreed_76']['id'] = 'terms_agreed_76';
  $handler->display->display_options['fields']['terms_agreed_76']['table'] = 'civicrm_value_event_management_16';
  $handler->display->display_options['fields']['terms_agreed_76']['field'] = 'terms_agreed_76';
  $handler->display->display_options['fields']['terms_agreed_76']['label'] = 'Terms?';
  $handler->display->display_options['fields']['terms_agreed_76']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['terms_agreed_76']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['terms_agreed_76']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['terms_agreed_76']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['terms_agreed_76']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['terms_agreed_76']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['terms_agreed_76']['alter']['html'] = 0;
  $handler->display->display_options['fields']['terms_agreed_76']['hide_empty'] = 0;
  $handler->display->display_options['fields']['terms_agreed_76']['empty_zero'] = 0;
  /* Field: CiviCRM Custom: Event promotion: Included in newsletter? */
  $handler->display->display_options['fields']['included_in_newsletter__72']['id'] = 'included_in_newsletter__72';
  $handler->display->display_options['fields']['included_in_newsletter__72']['table'] = 'civicrm_value_event_marketing_15';
  $handler->display->display_options['fields']['included_in_newsletter__72']['field'] = 'included_in_newsletter__72';
  $handler->display->display_options['fields']['included_in_newsletter__72']['label'] = 'Newsletter?';
  $handler->display->display_options['fields']['included_in_newsletter__72']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['included_in_newsletter__72']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['included_in_newsletter__72']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['included_in_newsletter__72']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['included_in_newsletter__72']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['included_in_newsletter__72']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['included_in_newsletter__72']['alter']['html'] = 0;
  $handler->display->display_options['fields']['included_in_newsletter__72']['hide_empty'] = 0;
  $handler->display->display_options['fields']['included_in_newsletter__72']['empty_zero'] = 0;
  /* Field: CiviCRM Custom: Event promotion: Promoted on Social media? */
  $handler->display->display_options['fields']['promoted_on_facebook_73']['id'] = 'promoted_on_facebook_73';
  $handler->display->display_options['fields']['promoted_on_facebook_73']['table'] = 'civicrm_value_event_marketing_15';
  $handler->display->display_options['fields']['promoted_on_facebook_73']['field'] = 'promoted_on_facebook_73';
  $handler->display->display_options['fields']['promoted_on_facebook_73']['label'] = 'SocMed?';
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['external'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['alter']['html'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['hide_empty'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['empty_zero'] = 0;
  $handler->display->display_options['fields']['promoted_on_facebook_73']['hide_alter_empty'] = 0;
  /* Field: CiviCRM Custom: Event promotion: Sent to press list? */
  $handler->display->display_options['fields']['sent_to_press_list__75']['id'] = 'sent_to_press_list__75';
  $handler->display->display_options['fields']['sent_to_press_list__75']['table'] = 'civicrm_value_event_marketing_15';
  $handler->display->display_options['fields']['sent_to_press_list__75']['field'] = 'sent_to_press_list__75';
  $handler->display->display_options['fields']['sent_to_press_list__75']['label'] = 'Press?';
  $handler->display->display_options['fields']['sent_to_press_list__75']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['sent_to_press_list__75']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['sent_to_press_list__75']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['sent_to_press_list__75']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['sent_to_press_list__75']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['sent_to_press_list__75']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['sent_to_press_list__75']['alter']['html'] = 0;
  $handler->display->display_options['fields']['sent_to_press_list__75']['hide_empty'] = 0;
  $handler->display->display_options['fields']['sent_to_press_list__75']['empty_zero'] = 0;
  /* Field: CiviCRM Custom: Event management: Payment status */
  $handler->display->display_options['fields']['payment_status_83']['id'] = 'payment_status_83';
  $handler->display->display_options['fields']['payment_status_83']['table'] = 'civicrm_value_event_management_16';
  $handler->display->display_options['fields']['payment_status_83']['field'] = 'payment_status_83';
  $handler->display->display_options['fields']['payment_status_83']['label'] = 'Pay status?';
  $handler->display->display_options['fields']['payment_status_83']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['payment_status_83']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['payment_status_83']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['payment_status_83']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['payment_status_83']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['payment_status_83']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['payment_status_83']['alter']['html'] = 0;
  $handler->display->display_options['fields']['payment_status_83']['hide_empty'] = 0;
  $handler->display->display_options['fields']['payment_status_83']['empty_zero'] = 0;
  /* Sort criterion: CiviCRM Events: Start Date */
  $handler->display->display_options['sorts']['start_date']['id'] = 'start_date';
  $handler->display->display_options['sorts']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['sorts']['start_date']['field'] = 'start_date';
  $handler->display->display_options['sorts']['start_date']['granularity'] = 'hour';
  /* Filter: CiviCRM Events: Start Date */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['operator'] = 'between';
  $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  $handler->display->display_options['filters']['start_date']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['start_date']['allow_null'] = 1;
  /* Filter: CiviCRM Custom: Event management: Payment status */
  $handler->display->display_options['filters']['payment_status_83']['id'] = 'payment_status_83';
  $handler->display->display_options['filters']['payment_status_83']['table'] = 'civicrm_value_event_management_16';
  $handler->display->display_options['filters']['payment_status_83']['field'] = 'payment_status_83';
  $handler->display->display_options['filters']['payment_status_83']['value'] = array(
    'To quote' => 'To quote',
    'Quoted' => 'Quoted',
    'To invoice' => 'To invoice',
    'Invoiced' => 'Invoiced',
    'Paid' => 'Paid',
    'Presenter paid' => 'Presenter paid',
    'Attached to grant' => 'Attached to grant',
    'Attached to grant - Complete' => 'Attached to grant - Complete',
    'Cancelled' => 'Cancelled',
    'Internal' => 'Internal',
    'Unpaid' => 'Unpaid',
  );
  $handler->display->display_options['filters']['payment_status_83']['exposed'] = TRUE;
  $handler->display->display_options['filters']['payment_status_83']['expose']['operator'] = 'payment_status_83_op';
  $handler->display->display_options['filters']['payment_status_83']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['payment_status_83']['expose']['label'] = 'Payment status';
  $handler->display->display_options['filters']['payment_status_83']['expose']['identifier'] = 'payment_status_83';
  $handler->display->display_options['filters']['payment_status_83']['expose']['reduce'] = 1;
  /* Filter: CiviCRM Events: Include Template */
  $handler->display->display_options['filters']['is_template']['id'] = 'is_template';
  $handler->display->display_options['filters']['is_template']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_template']['field'] = 'is_template';
  $handler->display->display_options['filters']['is_template']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: CiviCRM Events: Event Type */
  $handler->display->display_options['filters']['event_type']['id'] = 'event_type';
  $handler->display->display_options['filters']['event_type']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['event_type']['field'] = 'event_type';
  $handler->display->display_options['filters']['event_type']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['event_type']['expose']['operator'] = FALSE;
  /* Filter: CiviCRM Custom: Event management: Payment status */
  $handler->display->display_options['filters']['payment_status_83']['id'] = 'payment_status_83';
  $handler->display->display_options['filters']['payment_status_83']['table'] = 'civicrm_value_event_management_16';
  $handler->display->display_options['filters']['payment_status_83']['field'] = 'payment_status_83';
  $handler->display->display_options['filters']['payment_status_83']['value'] = array(
    'To quote' => 'To quote',
    'Quoted' => 'Quoted',
    'To invoice' => 'To invoice',
    'Invoiced' => 'Invoiced',
    'Paid' => 'Paid',
    'Presenter paid' => 'Presenter paid',
    'Attached to grant' => 'Attached to grant',
    'Attached to grant - Complete' => 'Attached to grant - Complete',
    'Cancelled' => 'Cancelled',
    'Internal' => 'Internal',
    'Unpaid' => 'Unpaid',
  );
  $handler->display->display_options['filters']['payment_status_83']['exposed'] = TRUE;
  $handler->display->display_options['filters']['payment_status_83']['expose']['operator'] = 'payment_status_83_op';
  $handler->display->display_options['filters']['payment_status_83']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['payment_status_83']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['payment_status_83']['expose']['identifier'] = 'payment_status_83';
  $handler->display->display_options['filters']['payment_status_83']['expose']['single'] = 0;
  $handler->display->display_options['filters']['payment_status_83']['expose']['reduce'] = 1;
  /* Filter: CiviCRM Events: Start Date */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['operator'] = 'between';
  $handler->display->display_options['filters']['start_date']['value']['value'] = '2010-12-31 00:00:00';
  $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  $handler->display->display_options['filters']['start_date']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['start_date']['allow_null'] = 1;
  /* Filter: CiviCRM Events: Include Template */
  $handler->display->display_options['filters']['is_template']['id'] = 'is_template';
  $handler->display->display_options['filters']['is_template']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_template']['field'] = 'is_template';
  $handler->display->display_options['filters']['is_template']['value'] = '0';
  /* Filter: CiviCRM Custom: Event promotion: Assigned to PR Team? */
  $handler->display->display_options['filters']['assigned_to_pr_team__108']['id'] = 'assigned_to_pr_team__108';
  $handler->display->display_options['filters']['assigned_to_pr_team__108']['table'] = 'civicrm_value_event_marketing_15';
  $handler->display->display_options['filters']['assigned_to_pr_team__108']['field'] = 'assigned_to_pr_team__108';
  $handler->display->display_options['filters']['assigned_to_pr_team__108']['value'] = 'All';
  $handler->display->display_options['filters']['assigned_to_pr_team__108']['exposed'] = TRUE;
  $handler->display->display_options['filters']['assigned_to_pr_team__108']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['assigned_to_pr_team__108']['expose']['label'] = 'Assigned to PR Team?';
  $handler->display->display_options['filters']['assigned_to_pr_team__108']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['assigned_to_pr_team__108']['expose']['identifier'] = 'assigned_to_pr_team__108';
  $handler->display->display_options['filters']['assigned_to_pr_team__108']['expose']['single'] = TRUE;
  $handler->display->display_options['path'] = 'admin/eventmanagement';

  $views[$view->name] = $view;

  return $views;
}
