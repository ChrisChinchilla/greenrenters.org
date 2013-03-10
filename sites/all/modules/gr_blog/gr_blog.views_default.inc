<?php

/**
 * Implementation of hook_views_default_views().
 */
function gr_blog_views_default_views() {
  $views = array();

  // Exported view: blog
  $view = new view;
  $view->name = 'blog';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Blog';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Offshoots';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['id'] = 2;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: WYSIWYG Images (field_wysiwyg_images) */
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['id'] = 'field_wysiwyg_images_fid';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['table'] = 'node_data_field_wysiwyg_images';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['field'] = 'field_wysiwyg_images_fid';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['format'] = 'Content_Thumb_linked';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['multiple_from'] = '1';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['multiple_reversed'] = 0;
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
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'dS M';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 1;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[picture][created] by [name]';
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
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['view_node']['text'] = 'Tell me more';
  /* Field: Node: Disqus: Comments */
  $handler->display->display_options['fields']['disqus_comments']['id'] = 'disqus_comments';
  $handler->display->display_options['fields']['disqus_comments']['table'] = 'node';
  $handler->display->display_options['fields']['disqus_comments']['field'] = 'disqus_comments';
  $handler->display->display_options['fields']['disqus_comments']['label'] = '';
  $handler->display->display_options['fields']['disqus_comments']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['disqus_comments']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['disqus_comments']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['disqus_comments']['alter']['external'] = 0;
  $handler->display->display_options['fields']['disqus_comments']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['disqus_comments']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['disqus_comments']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['disqus_comments']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['disqus_comments']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['disqus_comments']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['disqus_comments']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['disqus_comments']['alter']['html'] = 0;
  $handler->display->display_options['fields']['disqus_comments']['element_label_type'] = '0';
  $handler->display->display_options['fields']['disqus_comments']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['disqus_comments']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['disqus_comments']['hide_empty'] = 1;
  $handler->display->display_options['fields']['disqus_comments']['empty_zero'] = 1;
  $handler->display->display_options['fields']['disqus_comments']['hide_alter_empty'] = 1;
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
    'news' => 'news',
    'opinion' => 'opinion',
    'story' => 'story',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Blog */
  $handler = $view->new_display('page', 'Blog', 'blog_page');
  $handler->display->display_options['path'] = 'blog';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Blog';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-block-one';

  $views[$view->name] = $view;

  return $views;
}
