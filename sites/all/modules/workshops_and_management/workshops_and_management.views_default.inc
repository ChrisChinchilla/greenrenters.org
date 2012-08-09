<?php

/**
 * Implementation of hook_views_default_views().
 */
function workshops_and_management_views_default_views() {
  $views = array();

  // Exported view: workshops_admin_listing
  $view = new view;
  $view->name = 'workshops_admin_listing';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Workshops admin listing';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Workshops admin listing';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => 3,
    10 => 10,
    9 => 9,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_enquiry_form_value' => 'field_enquiry_form_value',
    'field_workshops_flyer_value' => 'field_workshops_flyer_value',
    'field_budget_complete_value' => 'field_budget_complete_value',
    'field_budget_link_url' => 'field_budget_link_url',
    'field_template_completed_value' => 'field_template_completed_value',
    'field_template_link_url' => 'field_template_link_url',
    'field_views_filter_value' => 'field_views_filter_value',
    'status' => 'status',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_enquiry_form_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_workshops_flyer_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_budget_complete_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_budget_link_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_template_completed_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_template_link_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_views_filter_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Added to Workshops Enquiry form? (field_enquiry_form) */
  $handler->display->display_options['fields']['field_enquiry_form_value']['id'] = 'field_enquiry_form_value';
  $handler->display->display_options['fields']['field_enquiry_form_value']['table'] = 'node_data_field_enquiry_form';
  $handler->display->display_options['fields']['field_enquiry_form_value']['field'] = 'field_enquiry_form_value';
  $handler->display->display_options['fields']['field_enquiry_form_value']['label'] = 'Added to Workshops Enquiry form?';
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_enquiry_form_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_enquiry_form_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_enquiry_form_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_enquiry_form_value']['link_to_node'] = 0;
  /* Field: Content: Added to Workshops flyer? (field_workshops_flyer) */
  $handler->display->display_options['fields']['field_workshops_flyer_value']['id'] = 'field_workshops_flyer_value';
  $handler->display->display_options['fields']['field_workshops_flyer_value']['table'] = 'node_data_field_workshops_flyer';
  $handler->display->display_options['fields']['field_workshops_flyer_value']['field'] = 'field_workshops_flyer_value';
  $handler->display->display_options['fields']['field_workshops_flyer_value']['label'] = 'Added to Workshops flyer?';
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_workshops_flyer_value']['link_to_node'] = 0;
  /* Field: Content: Budget Completed? (field_budget_complete) */
  $handler->display->display_options['fields']['field_budget_complete_value']['id'] = 'field_budget_complete_value';
  $handler->display->display_options['fields']['field_budget_complete_value']['table'] = 'node_data_field_budget_complete';
  $handler->display->display_options['fields']['field_budget_complete_value']['field'] = 'field_budget_complete_value';
  $handler->display->display_options['fields']['field_budget_complete_value']['label'] = 'Budget Completed?';
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_budget_complete_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_budget_complete_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_budget_complete_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_budget_complete_value']['link_to_node'] = 0;
  /* Field: Content: Budget Link (field_budget_link) */
  $handler->display->display_options['fields']['field_budget_link_url']['id'] = 'field_budget_link_url';
  $handler->display->display_options['fields']['field_budget_link_url']['table'] = 'node_data_field_budget_link';
  $handler->display->display_options['fields']['field_budget_link_url']['field'] = 'field_budget_link_url';
  $handler->display->display_options['fields']['field_budget_link_url']['label'] = 'Budget Link';
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_budget_link_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_budget_link_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_budget_link_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_budget_link_url']['link_to_node'] = 0;
  /* Field: Content: Template Completed? (field_template_completed) */
  $handler->display->display_options['fields']['field_template_completed_value']['id'] = 'field_template_completed_value';
  $handler->display->display_options['fields']['field_template_completed_value']['table'] = 'node_data_field_template_completed';
  $handler->display->display_options['fields']['field_template_completed_value']['field'] = 'field_template_completed_value';
  $handler->display->display_options['fields']['field_template_completed_value']['label'] = 'Template Completed?';
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_template_completed_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_template_completed_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_template_completed_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_template_completed_value']['link_to_node'] = 0;
  /* Field: Content: Template Link? (field_template_link) */
  $handler->display->display_options['fields']['field_template_link_url']['id'] = 'field_template_link_url';
  $handler->display->display_options['fields']['field_template_link_url']['table'] = 'node_data_field_template_link';
  $handler->display->display_options['fields']['field_template_link_url']['field'] = 'field_template_link_url';
  $handler->display->display_options['fields']['field_template_link_url']['label'] = 'Template Link?';
  $handler->display->display_options['fields']['field_template_link_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_template_link_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_template_link_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_template_link_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_template_link_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_template_link_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_template_link_url']['link_to_node'] = 0;
  /* Field: Content: Views Filter Created? (field_views_filter) */
  $handler->display->display_options['fields']['field_views_filter_value']['id'] = 'field_views_filter_value';
  $handler->display->display_options['fields']['field_views_filter_value']['table'] = 'node_data_field_views_filter';
  $handler->display->display_options['fields']['field_views_filter_value']['field'] = 'field_views_filter_value';
  $handler->display->display_options['fields']['field_views_filter_value']['label'] = 'Views Filter Created?';
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_views_filter_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_views_filter_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_views_filter_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_views_filter_value']['link_to_node'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'workshop' => 'workshop',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/workshopmanagement';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Workshop Admin';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  return $views;
}
