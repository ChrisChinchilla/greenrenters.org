<?php

/**
 * Implementation of hook_views_default_views().
 */
function gr_admin_dashboard_views_default_views() {
  $views = array();

  // Exported view: promoted_acontent
  $view = new view;
  $view->name = 'promoted_acontent';
  $view->description = 'Promoted posts';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 1;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  /* Field: Content: Image (field_image) */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'node_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'Content_Thumb_linked';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_from'] = '0';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Node: Teaser */
  $handler->display->display_options['fields']['teaser']['id'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['teaser']['field'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['label'] = '';
  $handler->display->display_options['fields']['teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['teaser']['empty_zero'] = 0;
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Sort criterion: Node: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Node: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter: Node: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['expose']['operator'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  $views[$view->name] = $view;

  // Exported view: recent_contributions
  $view = new view;
  $view->name = 'recent_contributions';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'civicrm_contribution';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'first_name' => 'first_name',
    'postal_code' => 'postal_code',
    'total_amount' => 'total_amount',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Field: CiviCRM Contacts: First Name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['label'] = '';
  $handler->display->display_options['fields']['first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['first_name']['link_to_civicrm_contact'] = 0;
  /* Field: CiviCRM Address: ZIP / Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['postal_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['postal_code']['empty_zero'] = 0;
  /* Field: CiviCRM Contributions: Total Amount */
  $handler->display->display_options['fields']['total_amount']['id'] = 'total_amount';
  $handler->display->display_options['fields']['total_amount']['table'] = 'civicrm_contribution';
  $handler->display->display_options['fields']['total_amount']['field'] = 'total_amount';
  $handler->display->display_options['fields']['total_amount']['label'] = '';
  $handler->display->display_options['fields']['total_amount']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['total_amount']['alter']['html'] = 0;
  $handler->display->display_options['fields']['total_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['total_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['total_amount']['prefix'] = '$';
  /* Sort criterion: CiviCRM Contributions: Receive Date */
  $handler->display->display_options['sorts']['receive_date']['id'] = 'receive_date';
  $handler->display->display_options['sorts']['receive_date']['table'] = 'civicrm_contribution';
  $handler->display->display_options['sorts']['receive_date']['field'] = 'receive_date';
  $handler->display->display_options['sorts']['receive_date']['order'] = 'DESC';
  $handler->display->display_options['sorts']['receive_date']['granularity'] = 'minute';
  /* Filter: CiviCRM Contributions: Contribution Type */
  $handler->display->display_options['filters']['contribution_type']['id'] = 'contribution_type';
  $handler->display->display_options['filters']['contribution_type']['table'] = 'civicrm_contribution';
  $handler->display->display_options['filters']['contribution_type']['field'] = 'contribution_type';
  $handler->display->display_options['filters']['contribution_type']['value'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['contribution_type']['expose']['operator'] = FALSE;
  /* Filter: CiviCRM Contributions: Contribution Status */
  $handler->display->display_options['filters']['contribution_status']['id'] = 'contribution_status';
  $handler->display->display_options['filters']['contribution_status']['table'] = 'civicrm_contribution';
  $handler->display->display_options['filters']['contribution_status']['field'] = 'contribution_status';
  $handler->display->display_options['filters']['contribution_status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['contribution_status']['expose']['operator'] = FALSE;
  /* Filter: CiviCRM Contributions: Is Test */
  $handler->display->display_options['filters']['is_test']['id'] = 'is_test';
  $handler->display->display_options['filters']['is_test']['table'] = 'civicrm_contribution';
  $handler->display->display_options['filters']['is_test']['field'] = 'is_test';
  $handler->display->display_options['filters']['is_test']['value'] = '0';
  $handler->display->display_options['filters']['is_test']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  $views[$view->name] = $view;

  // Exported view: recent_members
  $view = new view;
  $view->name = 'recent_members';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'civicrm_membership';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: CiviCRM Contacts: First Name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['label'] = '';
  $handler->display->display_options['fields']['first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['first_name']['link_to_civicrm_contact'] = 0;
  /* Field: CiviCRM Address: ZIP / Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['postal_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['postal_code']['empty_zero'] = 0;
  /* Field: CiviCRM Member: Membership Type */
  $handler->display->display_options['fields']['membership_type']['id'] = 'membership_type';
  $handler->display->display_options['fields']['membership_type']['table'] = 'civicrm_membership';
  $handler->display->display_options['fields']['membership_type']['field'] = 'membership_type';
  $handler->display->display_options['fields']['membership_type']['label'] = '';
  $handler->display->display_options['fields']['membership_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['membership_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['membership_type']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['membership_type']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['membership_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['membership_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['membership_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['membership_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['membership_type']['empty_zero'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  $views[$view->name] = $view;

  return $views;
}
