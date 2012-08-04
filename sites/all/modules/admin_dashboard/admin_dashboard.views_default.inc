<?php

/**
 * Implementation of hook_views_default_views().
 */
function admin_dashboard_views_default_views() {
  $views = array();

  // Exported view: uncompleted_orders
  $view = new view;
  $view->name = 'uncompleted_orders';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'uc_orders';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Uncompleted orders';
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => 3,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'actions' => 'actions',
    'order_balance' => 'order_balance',
    'created' => 'created',
    'order_id' => 'order_id',
    'product_count' => 'product_count',
    'order_total' => 'order_total',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'actions' => array(
      'separator' => '',
    ),
    'order_balance' => array(
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'order_id' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'product_count' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'order_total' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Field: Ubercart order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'uc_orders';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['order_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['order_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['order_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['order_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['order_id']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 1;
  /* Field: Ubercart order: Creation date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'uc_orders';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  /* Field: Ubercart order: Product count */
  $handler->display->display_options['fields']['product_count']['id'] = 'product_count';
  $handler->display->display_options['fields']['product_count']['table'] = 'uc_orders';
  $handler->display->display_options['fields']['product_count']['field'] = 'product_count';
  $handler->display->display_options['fields']['product_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['product_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['product_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['product_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['product_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['product_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['product_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['product_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['product_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['product_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['product_count']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['product_count']['format_plural'] = 0;
  /* Field: Ubercart order: Total */
  $handler->display->display_options['fields']['order_total']['id'] = 'order_total';
  $handler->display->display_options['fields']['order_total']['table'] = 'uc_orders';
  $handler->display->display_options['fields']['order_total']['field'] = 'order_total';
  $handler->display->display_options['fields']['order_total']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['order_total']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['order_total']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['order_total']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['order_total']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['order_total']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['order_total']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['order_total']['alter']['html'] = 0;
  $handler->display->display_options['fields']['order_total']['hide_empty'] = 0;
  $handler->display->display_options['fields']['order_total']['empty_zero'] = 0;
  $handler->display->display_options['fields']['order_total']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['order_total']['set_precision'] = 0;
  $handler->display->display_options['fields']['order_total']['precision'] = '0';
  $handler->display->display_options['fields']['order_total']['format_plural'] = 0;
  $handler->display->display_options['fields']['order_total']['revision'] = 'themed-original';
  /* Field: Ubercart order: Actions */
  $handler->display->display_options['fields']['actions']['id'] = 'actions';
  $handler->display->display_options['fields']['actions']['table'] = 'uc_orders';
  $handler->display->display_options['fields']['actions']['field'] = 'actions';
  $handler->display->display_options['fields']['actions']['label'] = '';
  $handler->display->display_options['fields']['actions']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['actions']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['actions']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['actions']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['actions']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['actions']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['actions']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['actions']['alter']['html'] = 0;
  $handler->display->display_options['fields']['actions']['hide_empty'] = 0;
  $handler->display->display_options['fields']['actions']['empty_zero'] = 0;
  $handler->display->display_options['fields']['actions']['hide_alter_empty'] = 1;
  /* Filter: Ubercart order: Status */
  $handler->display->display_options['filters']['order_status']['id'] = 'order_status';
  $handler->display->display_options['filters']['order_status']['table'] = 'uc_orders';
  $handler->display->display_options['filters']['order_status']['field'] = 'order_status';
  $handler->display->display_options['filters']['order_status']['value'] = array(
    'pending' => 'pending',
    'processing' => 'processing',
    'paypal_pending' => 'paypal_pending',
    'payment_received' => 'payment_received',
  );
  $handler->display->display_options['filters']['order_status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  $views[$view->name] = $view;

  return $views;
}
