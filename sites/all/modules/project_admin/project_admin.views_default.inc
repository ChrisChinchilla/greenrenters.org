<?php

/**
 * Implementation of hook_views_default_views().
 */
function project_admin_views_default_views() {
  $views = array();

  // Exported view: civi_activities
  $view = new view;
  $view->name = 'civi_activities';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'civicrm_activity';
  $view->human_name = 'Civi Activities';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Tasks';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 0;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'title_1';
  $handler->display->display_options['style_options']['columns'] = array(
    'subject' => 'subject',
    'title_1' => 'title_1',
    'status' => 'status',
    'priority' => 'priority',
    'due_date_117' => 'due_date_117',
    'text_link' => 'text_link',
    'display_name' => 'display_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'priority' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'due_date_117' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'text_link' => array(
      'align' => '',
      'separator' => '',
    ),
    'display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
  /* Relationship: CiviCRM Activity Targets: Target Contact ID */
  $handler->display->display_options['relationships']['target_contact_id']['id'] = 'target_contact_id';
  $handler->display->display_options['relationships']['target_contact_id']['table'] = 'civicrm_activity_target';
  $handler->display->display_options['relationships']['target_contact_id']['field'] = 'target_contact_id';
  $handler->display->display_options['relationships']['target_contact_id']['required'] = 0;
  /* Relationship: CiviCRM Activity Assignments: Assignee Contact ID */
  $handler->display->display_options['relationships']['assignee_contact_id']['id'] = 'assignee_contact_id';
  $handler->display->display_options['relationships']['assignee_contact_id']['table'] = 'civicrm_activity_assignment';
  $handler->display->display_options['relationships']['assignee_contact_id']['field'] = 'assignee_contact_id';
  $handler->display->display_options['relationships']['assignee_contact_id']['required'] = 0;
  /* Field: CiviCRM Activities: Subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'civicrm_activity';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
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
  $handler->display->display_options['fields']['subject']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['subject']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['subject']['hide_empty'] = 0;
  $handler->display->display_options['fields']['subject']['empty_zero'] = 0;
  $handler->display->display_options['fields']['subject']['hide_alter_empty'] = 1;
  /* Field: CiviCRM Campaigns: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'civicrm_campaign';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  /* Field: CiviCRM Activities: Activity Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'civicrm_activity';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 0;
  /* Field: CiviCRM Activities: Priority */
  $handler->display->display_options['fields']['priority']['id'] = 'priority';
  $handler->display->display_options['fields']['priority']['table'] = 'civicrm_activity';
  $handler->display->display_options['fields']['priority']['field'] = 'priority';
  $handler->display->display_options['fields']['priority']['label'] = '';
  $handler->display->display_options['fields']['priority']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['priority']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['priority']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['priority']['alter']['external'] = 0;
  $handler->display->display_options['fields']['priority']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['priority']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['priority']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['priority']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['priority']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['priority']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['priority']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['priority']['alter']['html'] = 0;
  $handler->display->display_options['fields']['priority']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['priority']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['priority']['hide_empty'] = 0;
  $handler->display->display_options['fields']['priority']['empty_zero'] = 0;
  $handler->display->display_options['fields']['priority']['hide_alter_empty'] = 0;
  /* Field: CiviCRM Custom: Task fields: Due Date */
  $handler->display->display_options['fields']['due_date_117']['id'] = 'due_date_117';
  $handler->display->display_options['fields']['due_date_117']['table'] = 'civicrm_value_task_fields_29';
  $handler->display->display_options['fields']['due_date_117']['field'] = 'due_date_117';
  $handler->display->display_options['fields']['due_date_117']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['due_date_117']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['due_date_117']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['due_date_117']['alter']['external'] = 0;
  $handler->display->display_options['fields']['due_date_117']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['due_date_117']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['due_date_117']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['due_date_117']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['due_date_117']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['due_date_117']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['due_date_117']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['due_date_117']['alter']['html'] = 0;
  $handler->display->display_options['fields']['due_date_117']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['due_date_117']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['due_date_117']['hide_empty'] = 0;
  $handler->display->display_options['fields']['due_date_117']['empty_zero'] = 0;
  $handler->display->display_options['fields']['due_date_117']['hide_alter_empty'] = 1;
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
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name_1']['id'] = 'display_name_1';
  $handler->display->display_options['fields']['display_name_1']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name_1']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name_1']['relationship'] = 'assignee_contact_id';
  $handler->display->display_options['fields']['display_name_1']['label'] = 'Assignee';
  $handler->display->display_options['fields']['display_name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['display_name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['display_name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['display_name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['display_name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['display_name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['display_name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['display_name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['display_name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['display_name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['display_name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['display_name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['display_name_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['display_name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['display_name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['display_name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['display_name_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['display_name_1']['link_to_civicrm_contact'] = 1;
  /* Filter: CiviCRM Activities: Activity Type */
  $handler->display->display_options['filters']['activity_type']['id'] = 'activity_type';
  $handler->display->display_options['filters']['activity_type']['table'] = 'civicrm_activity';
  $handler->display->display_options['filters']['activity_type']['field'] = 'activity_type';
  $handler->display->display_options['filters']['activity_type']['value'] = array(
    64 => '64',
  );
  /* Filter: CiviCRM Contacts: Display Name */
  $handler->display->display_options['filters']['display_name']['id'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['display_name']['field'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['display_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['operator'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['display_name']['expose']['label'] = 'Assignee';
  $handler->display->display_options['filters']['display_name']['expose']['identifier'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['display_name']['case'] = 1;
  /* Filter: CiviCRM Activities: Parent Activity ID */
  $handler->display->display_options['filters']['parent_id']['id'] = 'parent_id';
  $handler->display->display_options['filters']['parent_id']['table'] = 'civicrm_activity';
  $handler->display->display_options['filters']['parent_id']['field'] = 'parent_id';
  $handler->display->display_options['filters']['parent_id']['operator'] = 'empty';
  $handler->display->display_options['filters']['parent_id']['allow_null'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'title_1';
  $handler->display->display_options['style_options']['columns'] = array(
    'subject' => 'subject',
    'title_1' => 'title_1',
    'status' => 'status',
    'priority' => 'priority',
    'due_date_117' => 'due_date_117',
    'text_link' => 'text_link',
    'display_name' => 'display_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'priority' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'due_date_117' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'text_link' => array(
      'align' => '',
      'separator' => '',
    ),
    'display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: CiviCRM Activities: Activity Type */
  $handler->display->display_options['filters']['activity_type']['id'] = 'activity_type';
  $handler->display->display_options['filters']['activity_type']['table'] = 'civicrm_activity';
  $handler->display->display_options['filters']['activity_type']['field'] = 'activity_type';
  $handler->display->display_options['filters']['activity_type']['value'] = array(
    64 => '64',
  );
  /* Filter: CiviCRM Contacts: Display Name */
  $handler->display->display_options['filters']['display_name']['id'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['display_name']['field'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['relationship'] = 'assignee_contact_id';
  $handler->display->display_options['filters']['display_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['display_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['operator'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['display_name']['expose']['label'] = 'Assignee';
  $handler->display->display_options['filters']['display_name']['expose']['identifier'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['display_name']['case'] = 1;
  /* Filter: CiviCRM Activities: Parent Activity ID */
  $handler->display->display_options['filters']['parent_id']['id'] = 'parent_id';
  $handler->display->display_options['filters']['parent_id']['table'] = 'civicrm_activity';
  $handler->display->display_options['filters']['parent_id']['field'] = 'parent_id';
  $handler->display->display_options['filters']['parent_id']['operator'] = 'empty';
  $handler->display->display_options['filters']['parent_id']['allow_null'] = 1;
  /* Filter: CiviCRM Activities: Activity Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'civicrm_activity';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
    4 => '4',
    5 => '5',
    7 => '7',
  );
  $handler->display->display_options['path'] = 'admin/tasks';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tasks';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'subject' => 'subject',
    'title_1' => 'title_1',
    'status' => 'status',
    'priority' => 'priority',
    'due_date_117' => 'due_date_117',
    'text_link' => 'text_link',
    'display_name' => 'display_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'priority' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'due_date_117' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'text_link' => array(
      'align' => '',
      'separator' => '',
    ),
    'display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: CiviCRM Activities: Activity Type */
  $handler->display->display_options['filters']['activity_type']['id'] = 'activity_type';
  $handler->display->display_options['filters']['activity_type']['table'] = 'civicrm_activity';
  $handler->display->display_options['filters']['activity_type']['field'] = 'activity_type';
  $handler->display->display_options['filters']['activity_type']['value'] = array(
    64 => '64',
  );
  /* Filter: CiviCRM Activities: Parent Activity ID */
  $handler->display->display_options['filters']['parent_id']['id'] = 'parent_id';
  $handler->display->display_options['filters']['parent_id']['table'] = 'civicrm_activity';
  $handler->display->display_options['filters']['parent_id']['field'] = 'parent_id';
  $handler->display->display_options['filters']['parent_id']['operator'] = 'empty';
  $handler->display->display_options['filters']['parent_id']['allow_null'] = 1;

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
