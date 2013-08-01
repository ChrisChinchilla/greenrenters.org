<?php

/**
 * Implementation of hook_views_default_views().
 */
function press_area_views_default_views() {
  $views = array();

  // Exported view: press_page
  $view = new view;
  $view->name = 'press_page';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Press';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['id'] = 24;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_articlelink_url' => 'field_articlelink_url',
    'upload_fid' => 'upload_fid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'body' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_articlelink_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'upload_fid' => array(
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Content: Article Link (field_articlelink) */
  $handler->display->display_options['fields']['field_articlelink_url']['id'] = 'field_articlelink_url';
  $handler->display->display_options['fields']['field_articlelink_url']['table'] = 'node_data_field_articlelink';
  $handler->display->display_options['fields']['field_articlelink_url']['field'] = 'field_articlelink_url';
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_articlelink_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_articlelink_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_articlelink_url']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_articlelink_url']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_articlelink_url']['format'] = 'url';
  /* Field: Upload: Attached files */
  $handler->display->display_options['fields']['upload_fid']['id'] = 'upload_fid';
  $handler->display->display_options['fields']['upload_fid']['table'] = 'node';
  $handler->display->display_options['fields']['upload_fid']['field'] = 'upload_fid';
  $handler->display->display_options['fields']['upload_fid']['label'] = '';
  $handler->display->display_options['fields']['upload_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['upload_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['upload_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['upload_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['upload_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['upload_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['upload_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['upload_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['upload_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['upload_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['upload_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['upload_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['upload_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['upload_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['upload_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['upload_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['upload_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['upload_fid']['separator'] = '';
  $handler->display->display_options['fields']['upload_fid']['link_to_file'] = 1;
  $handler->display->display_options['fields']['upload_fid']['only_listed'] = 0;
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pressarticle' => 'pressarticle',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'press';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Press';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-block-one';

  $views[$view->name] = $view;

  return $views;
}
