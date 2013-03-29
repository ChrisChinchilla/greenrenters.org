<?php

/**
 * Implementation of hook_views_default_views().
 */
function front_page_ticker_views_default_views() {
  $views = array();

  // Exported view: latest_articles
  $view = new view;
  $view->name = 'latest_articles';
  $view->description = 'Latest articles from across the site';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'fp-slideshow';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['fixed_height'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['random'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pause'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pause_on_click'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['controls'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager_type'] = 'Numbered';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager_hover'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager_click_to_page'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['image_count'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['nowrap'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['sync'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['speed'] = '300';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['teasers_last'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['main_fields'] = array(
    'field_image_fid' => 0,
    'type' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['breakout_fields'] = array(
    'field_image_fid' => 0,
    'type' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['fixed_height'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['random'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['pause'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['pause_on_click'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['pager_event'] = 'mouseover';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['controls'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['image_count'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['nowrap'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_thumbnailhover']['sync'] = '1';
  $handler->display->display_options['style_options']['mode'] = 'views_slideshow_singleframe';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'fp_slideshow_linked';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_from'] = '0';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Content: WYSIWYG Images (field_wysiwyg_images) */
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['id'] = 'field_wysiwyg_images_fid';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['table'] = 'node_data_field_wysiwyg_images';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['field'] = 'field_wysiwyg_images_fid';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['format'] = 'fp_slideshow_linked';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['multiple_from'] = '0';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Node: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['type']['alter']['text'] = '<a href="/[type]"><img src="http://greenrenters.org/sites/greenrenters.org/themes/greenrenters/css/images/[type].png"></a>';
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['hide_empty'] = 1;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 1;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Node: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'campaign' => 'campaign',
    'competition' => 'competition',
    'event' => 'event',
    'news' => 'news',
    'opinion' => 'opinion',
    'page' => 'page',
    'product' => 'product',
    'project' => 'project',
    'resource' => 'resource',
    'service' => 'service',
    'story' => 'story',
    'tutorial' => 'tutorial',
    'webform' => 'webform',
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Node: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'fp_slideshow_linked';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_from'] = '0';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Content: WYSIWYG Images (field_wysiwyg_images) */
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['id'] = 'field_wysiwyg_images_fid';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['table'] = 'node_data_field_wysiwyg_images';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['field'] = 'field_wysiwyg_images_fid';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['format'] = 'fp_slideshow_linked';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['multiple_from'] = '0';
  $handler->display->display_options['fields']['field_wysiwyg_images_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Node: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['type']['alter']['text'] = '<a href="/[type]"><img src="http://greenrenters.org/sites/all/themes/greenrenters/css/images/[type].png"></a>';
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['hide_empty'] = 1;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 1;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Sustainable living in rental accommodation';
  $handler->display->display_options['style_options']['mission_description'] = 1;
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'teaser';
  $handler->display->display_options['path'] = 'feed';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'block_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 1;

  $views[$view->name] = $view;

  return $views;
}
