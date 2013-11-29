<?php

/**
 * Implementation of hook_views_default_views().
 */
function project_admin_views_default_views() {
  $views = array();

  // Exported view: civi_tasks
  $view = new view;
  $view->name = 'civi_tasks';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'civicrm_activity';
  $view->human_name = 'Tasks';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => 3,
    10 => 10,
    9 => 9,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'title';
  $handler->display->display_options['style_options']['columns'] = array(
    'subject' => 'subject',
    'title' => 'title',
    'status' => 'status',
    'text_link' => 'text_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'subject' => array(
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
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'text_link' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: CiviCRM Activities: Campaign */
  $handler->display->display_options['relationships']['campaign_id']['id'] = 'campaign_id';
  $handler->display->display_options['relationships']['campaign_id']['table'] = 'civicrm_activity';
  $handler->display->display_options['relationships']['campaign_id']['field'] = 'campaign_id';
  $handler->display->display_options['relationships']['campaign_id']['required'] = 0;
  /* Field: CiviCRM Activities: Subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'civicrm_activity';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  /* Field: CiviCRM Campaigns: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_campaign';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: CiviCRM Activities: Activity Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'civicrm_activity';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Field: CiviCRM Activities: Text Link */
  $handler->display->display_options['fields']['text_link']['id'] = 'text_link';
  $handler->display->display_options['fields']['text_link']['table'] = 'civicrm_activity';
  $handler->display->display_options['fields']['text_link']['field'] = 'text_link';
  $handler->display->display_options['fields']['text_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['text_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['text_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['text_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['text_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['text_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['text_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['text_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['text_link']['link_text'] = 'View';
  /* Filter: CiviCRM Activities: Activity Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'civicrm_activity';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['operator'] = 'not in';
  $handler->display->display_options['filters']['status']['value'] = array(
    2 => '2',
    3 => '3',
  );
  /* Filter: CiviCRM Activities: Activity Type */
  $handler->display->display_options['filters']['activity_type']['id'] = 'activity_type';
  $handler->display->display_options['filters']['activity_type']['table'] = 'civicrm_activity';
  $handler->display->display_options['filters']['activity_type']['field'] = 'activity_type';
  $handler->display->display_options['filters']['activity_type']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    34 => '34',
    56 => '56',
    57 => '57',
    64 => '64',
  );
  /* Filter: CiviCRM Activities: Subject */
  $handler->display->display_options['filters']['subject']['id'] = 'subject';
  $handler->display->display_options['filters']['subject']['table'] = 'civicrm_activity';
  $handler->display->display_options['filters']['subject']['field'] = 'subject';
  $handler->display->display_options['filters']['subject']['operator'] = 'not empty';
  $handler->display->display_options['filters']['subject']['case'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CiviCRM Activities: Activity Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'civicrm_activity';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Field: CiviCRM Activities: Activity Type */
  $handler->display->display_options['fields']['activity_type']['id'] = 'activity_type';
  $handler->display->display_options['fields']['activity_type']['table'] = 'civicrm_activity';
  $handler->display->display_options['fields']['activity_type']['field'] = 'activity_type';
  $handler->display->display_options['fields']['activity_type']['label'] = '';
  $handler->display->display_options['fields']['activity_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['activity_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['activity_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['activity_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['activity_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['activity_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['activity_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['activity_type']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['activity_type']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['activity_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['activity_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['activity_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['activity_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['activity_type']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['activity_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['activity_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['activity_type']['hide_alter_empty'] = 0;
  /* Field: CiviCRM Activities: Subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'civicrm_activity';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['external'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['subject']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['html'] = 0;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['subject']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['subject']['hide_empty'] = 0;
  $handler->display->display_options['fields']['subject']['empty_zero'] = 0;
  $handler->display->display_options['fields']['subject']['hide_alter_empty'] = 1;
  /* Field: CiviCRM Activities: Text Link */
  $handler->display->display_options['fields']['text_link']['id'] = 'text_link';
  $handler->display->display_options['fields']['text_link']['table'] = 'civicrm_activity';
  $handler->display->display_options['fields']['text_link']['field'] = 'text_link';
  $handler->display->display_options['fields']['text_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['text_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['text_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['text_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['text_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['text_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['text_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['text_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['text_link']['link_text'] = 'View';
  /* Field: CiviCRM Campaigns: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_campaign';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'campaign_id';
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
  $handler->display->display_options['path'] = 'admin/tasks';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tasks';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: project_funding
  $view = new view;
  $view->name = 'project_funding';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'civicrm_contribution';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Project Budgets';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => 3,
    10 => 10,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 0;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_calc';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'expense_sub_category_214' => 'expense_sub_category_214',
    'contribution_type' => 'contribution_type',
    'contribution_status' => 'contribution_status',
    'receive_date' => 'receive_date',
    'source' => 'source',
    'text_link' => 'text_link',
    'total_amount' => 'total_amount',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'expense_sub_category_214' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'contribution_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'contribution_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'receive_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'source' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'text_link' => array(
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'total_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 1,
      'calc' => array(
        'SUM' => 'SUM',
      ),
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['style_options']['detailed_values'] = '0';
  /* Relationship: CiviCRM Contributions: Campaign */
  $handler->display->display_options['relationships']['campaign_id']['id'] = 'campaign_id';
  $handler->display->display_options['relationships']['campaign_id']['table'] = 'civicrm_contribution';
  $handler->display->display_options['relationships']['campaign_id']['field'] = 'campaign_id';
  $handler->display->display_options['relationships']['campaign_id']['required'] = 0;
  /* Field: CiviCRM Campaigns: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_campaign';
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
  /* Field: CiviCRM Custom: Project Campaign fields: Expense Sub Category */
  $handler->display->display_options['fields']['expense_sub_category_214']['id'] = 'expense_sub_category_214';
  $handler->display->display_options['fields']['expense_sub_category_214']['table'] = 'civicrm_value_project_campaign_fields_31';
  $handler->display->display_options['fields']['expense_sub_category_214']['field'] = 'expense_sub_category_214';
  $handler->display->display_options['fields']['expense_sub_category_214']['label'] = 'Type';
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['external'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['alter']['html'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['hide_empty'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['empty_zero'] = 0;
  $handler->display->display_options['fields']['expense_sub_category_214']['hide_alter_empty'] = 0;
  /* Field: CiviCRM Contributions: Contribution Type */
  $handler->display->display_options['fields']['contribution_type']['id'] = 'contribution_type';
  $handler->display->display_options['fields']['contribution_type']['table'] = 'civicrm_contribution';
  $handler->display->display_options['fields']['contribution_type']['field'] = 'contribution_type';
  $handler->display->display_options['fields']['contribution_type']['label'] = '';
  $handler->display->display_options['fields']['contribution_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['contribution_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['contribution_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['contribution_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['contribution_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['contribution_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['contribution_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['contribution_type']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['contribution_type']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['contribution_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['contribution_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['contribution_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['contribution_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['contribution_type']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['contribution_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['contribution_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['contribution_type']['hide_alter_empty'] = 0;
  /* Field: CiviCRM Contributions: Contribution Status */
  $handler->display->display_options['fields']['contribution_status']['id'] = 'contribution_status';
  $handler->display->display_options['fields']['contribution_status']['table'] = 'civicrm_contribution';
  $handler->display->display_options['fields']['contribution_status']['field'] = 'contribution_status';
  $handler->display->display_options['fields']['contribution_status']['label'] = '';
  $handler->display->display_options['fields']['contribution_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['contribution_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['contribution_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['contribution_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['contribution_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['contribution_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['contribution_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['contribution_status']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['contribution_status']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['contribution_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['contribution_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['contribution_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['contribution_status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['contribution_status']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['contribution_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['contribution_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['contribution_status']['hide_alter_empty'] = 0;
  /* Field: CiviCRM Contributions: Receive Date */
  $handler->display->display_options['fields']['receive_date']['id'] = 'receive_date';
  $handler->display->display_options['fields']['receive_date']['table'] = 'civicrm_contribution';
  $handler->display->display_options['fields']['receive_date']['field'] = 'receive_date';
  $handler->display->display_options['fields']['receive_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['receive_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['receive_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['receive_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['receive_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['receive_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['receive_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['receive_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['receive_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['receive_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['receive_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['receive_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['receive_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['receive_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['receive_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['receive_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['receive_date']['hide_alter_empty'] = 1;
  /* Field: CiviCRM Contributions: Source */
  $handler->display->display_options['fields']['source']['id'] = 'source';
  $handler->display->display_options['fields']['source']['table'] = 'civicrm_contribution';
  $handler->display->display_options['fields']['source']['field'] = 'source';
  $handler->display->display_options['fields']['source']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['source']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['source']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['source']['alter']['external'] = 0;
  $handler->display->display_options['fields']['source']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['source']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['source']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['source']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['source']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['source']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['source']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['source']['alter']['html'] = 0;
  $handler->display->display_options['fields']['source']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['source']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['source']['hide_empty'] = 0;
  $handler->display->display_options['fields']['source']['empty_zero'] = 0;
  $handler->display->display_options['fields']['source']['hide_alter_empty'] = 1;
  /* Field: CiviCRM Contributions: Text Link */
  $handler->display->display_options['fields']['text_link']['id'] = 'text_link';
  $handler->display->display_options['fields']['text_link']['table'] = 'civicrm_contribution';
  $handler->display->display_options['fields']['text_link']['field'] = 'text_link';
  $handler->display->display_options['fields']['text_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['text_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['text_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['text_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['text_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['text_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['text_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['text_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['text_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['text_link']['link_text'] = 'View';
  /* Field: CiviCRM Contributions: Total Amount */
  $handler->display->display_options['fields']['total_amount']['id'] = 'total_amount';
  $handler->display->display_options['fields']['total_amount']['table'] = 'civicrm_contribution';
  $handler->display->display_options['fields']['total_amount']['field'] = 'total_amount';
  $handler->display->display_options['fields']['total_amount']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['external'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['total_amount']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['total_amount']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['html'] = 0;
  $handler->display->display_options['fields']['total_amount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['total_amount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['total_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['total_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['total_amount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['total_amount']['format_plural'] = 0;
  /* Sort criterion: CiviCRM Contributions: Receive Date */
  $handler->display->display_options['sorts']['receive_date']['id'] = 'receive_date';
  $handler->display->display_options['sorts']['receive_date']['table'] = 'civicrm_contribution';
  $handler->display->display_options['sorts']['receive_date']['field'] = 'receive_date';
  /* Filter: CiviCRM Contributions: Contribution Type */
  $handler->display->display_options['filters']['contribution_type']['id'] = 'contribution_type';
  $handler->display->display_options['filters']['contribution_type']['table'] = 'civicrm_contribution';
  $handler->display->display_options['filters']['contribution_type']['field'] = 'contribution_type';
  $handler->display->display_options['filters']['contribution_type']['value'] = array(
    6 => '6',
  );
  /* Filter: CiviCRM Campaigns: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'civicrm_campaign';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Project Title (Type for now)';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['title']['case'] = 0;
  /* Filter: CiviCRM Contributions: Contribution Status */
  $handler->display->display_options['filters']['contribution_status']['id'] = 'contribution_status';
  $handler->display->display_options['filters']['contribution_status']['table'] = 'civicrm_contribution';
  $handler->display->display_options['filters']['contribution_status']['field'] = 'contribution_status';
  $handler->display->display_options['filters']['contribution_status']['value'] = array(
    1 => '1',
    2 => '2',
    5 => '5',
    6 => '6',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_calc';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'expense_sub_category_214' => 'expense_sub_category_214',
    'contribution_type' => 'contribution_type',
    'contribution_status' => 'contribution_status',
    'receive_date' => 'receive_date',
    'source' => 'source',
    'text_link' => 'text_link',
    'total_amount' => 'total_amount',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'expense_sub_category_214' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'contribution_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'contribution_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'receive_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'source' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'text_link' => array(
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'total_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_right',
      'has_calc' => 1,
      'calc' => array(
        'SUM' => 'SUM',
      ),
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['style_options']['detailed_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: CiviCRM Contributions: Contribution Type */
  $handler->display->display_options['filters']['contribution_type']['id'] = 'contribution_type';
  $handler->display->display_options['filters']['contribution_type']['table'] = 'civicrm_contribution';
  $handler->display->display_options['filters']['contribution_type']['field'] = 'contribution_type';
  $handler->display->display_options['filters']['contribution_type']['value'] = array(
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['filters']['contribution_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contribution_type']['expose']['operator'] = 'contribution_type_op';
  $handler->display->display_options['filters']['contribution_type']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['contribution_type']['expose']['label'] = 'Income Type';
  $handler->display->display_options['filters']['contribution_type']['expose']['identifier'] = 'contribution_type';
  $handler->display->display_options['filters']['contribution_type']['expose']['single'] = 0;
  $handler->display->display_options['filters']['contribution_type']['expose']['reduce'] = 1;
  /* Filter: CiviCRM Campaigns: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'civicrm_campaign';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Project Title (Type for now)';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['title']['case'] = 0;
  /* Filter: CiviCRM Custom: Project Campaign fields: Expense Sub Category */
  $handler->display->display_options['filters']['expense_sub_category_214']['id'] = 'expense_sub_category_214';
  $handler->display->display_options['filters']['expense_sub_category_214']['table'] = 'civicrm_value_project_campaign_fields_31';
  $handler->display->display_options['filters']['expense_sub_category_214']['field'] = 'expense_sub_category_214';
  $handler->display->display_options['filters']['expense_sub_category_214']['exposed'] = TRUE;
  $handler->display->display_options['filters']['expense_sub_category_214']['expose']['operator'] = 'expense_sub_category_214_op';
  $handler->display->display_options['filters']['expense_sub_category_214']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['expense_sub_category_214']['expose']['label'] = 'Expense Type';
  $handler->display->display_options['filters']['expense_sub_category_214']['expose']['identifier'] = 'expense_sub_category_214';
  $handler->display->display_options['filters']['expense_sub_category_214']['expose']['reduce'] = 0;
  /* Filter: CiviCRM Contributions: Contribution Status */
  $handler->display->display_options['filters']['contribution_status']['id'] = 'contribution_status';
  $handler->display->display_options['filters']['contribution_status']['table'] = 'civicrm_contribution';
  $handler->display->display_options['filters']['contribution_status']['field'] = 'contribution_status';
  $handler->display->display_options['filters']['contribution_status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contribution_status']['expose']['operator'] = 'contribution_status_op';
  $handler->display->display_options['filters']['contribution_status']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['contribution_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['contribution_status']['expose']['identifier'] = 'contribution_status';
  $handler->display->display_options['filters']['contribution_status']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'admin/projects/budgets';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Project Budgets';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_calc';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'expense_sub_category_214' => 'expense_sub_category_214',
    'contribution_type' => 'contribution_type',
    'contribution_status' => 'contribution_status',
    'receive_date' => 'receive_date',
    'source' => 'source',
    'text_link' => 'text_link',
    'total_amount' => 'total_amount',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'expense_sub_category_214' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'contribution_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'contribution_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'receive_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'source' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'text_link' => array(
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'total_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(
        'SUM' => 'SUM',
      ),
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['style_options']['detailed_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: CiviCRM Contributions: Receive Date */
  $handler->display->display_options['sorts']['receive_date']['id'] = 'receive_date';
  $handler->display->display_options['sorts']['receive_date']['table'] = 'civicrm_contribution';
  $handler->display->display_options['sorts']['receive_date']['field'] = 'receive_date';
  $handler->display->display_options['sorts']['receive_date']['granularity'] = 'hour';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: CiviCRM Contributions: Contribution Type */
  $handler->display->display_options['filters']['contribution_type']['id'] = 'contribution_type';
  $handler->display->display_options['filters']['contribution_type']['table'] = 'civicrm_contribution';
  $handler->display->display_options['filters']['contribution_type']['field'] = 'contribution_type';
  $handler->display->display_options['filters']['contribution_type']['value'] = array(
    6 => '6',
  );

  $views[$view->name] = $view;

  return $views;
}
