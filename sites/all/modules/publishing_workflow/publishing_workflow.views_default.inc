<?php

/**
 * Implementation of hook_views_default_views().
 */
function publishing_workflow_views_default_views() {
  $views = array();

  // Exported view: for_review
  $view = new view;
  $view->name = 'for_review';
  $view->description = 'Articles up for review';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Articles for revision';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_node' => 'edit_node',
    'view_node' => 'view_node',
    'title' => 'title',
    'type' => 'type',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'type' => array(
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
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
  $handler->display->display_options['fields']['status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter: Content: For review (field_forreview) - Allowed values */
  $handler->display->display_options['filters']['field_forreview_value_many_to_one']['id'] = 'field_forreview_value_many_to_one';
  $handler->display->display_options['filters']['field_forreview_value_many_to_one']['table'] = 'node_data_field_forreview';
  $handler->display->display_options['filters']['field_forreview_value_many_to_one']['field'] = 'field_forreview_value_many_to_one';
  $handler->display->display_options['filters']['field_forreview_value_many_to_one']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['filters']['field_forreview_value_many_to_one']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['field_forreview_value_many_to_one']['reduce_duplicates'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_action-adf7ba304a3ee7af1849a0892fe7edc4' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_action-ca0c9493c1eb9ed06b33a0c8873b34d7' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_action-6c4aa00703801947879d836652038b08' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_action-94ec185ccd371c3877b4588115b06d68' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_action-a4e374dd4676be7ad0efd7d45c11b4e9' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_action-3d1be6cdbc39fb6f30377528120d1578' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_action-654eff47f50a56f33370a03d4adc9dab' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_nodes_using_template-099b16b94d8670ab53a3e075f2e61215' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_nodes_using_template-4f783ba768fd01c283357037af26a514' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_nodes_using_template-83ac98a1a9cf09c48c7a72c52d4c760e' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_nodes_using_template-944a9f4dea178d87e8cc3bd19b9fecc6' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_nodes_using_template-57dcb1287b6bd721b6bf9e4a6d7e6731' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_nodes_using_template-19fedb92700dfeda1cd6ec74e47bbe8d' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_nodes_using_template-cdfc25129697d652e606e4aa068867d5' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_nodes_using_template-3c26dcf9f00210b8893c084cce06ad42' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_convert_convert_action-b436c682e6f4a790328948a105a260c4' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'nodewords_mass_update-48d00920397f9d8f23f7088c88056286' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_node_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-a27b9efabcd054685a549378b174ad11' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'imagecache_flush_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'imagecache_generate_all_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'imagecache_generate_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-c4d3b28efb86fd703619a50b74d43794' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_fields_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
      'settings' => array(
        'php_code' => 0,
        'show_tokens' => 0,
        'display_fields' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'views_bulk_operations_taxonomy_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-14de7d028b4bffdf2b4a266562ca18ac' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-9c585624b9b3af0b4687d5f97f35e047' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-8ce21b08bb8e773d10018b484fe4815e' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-0ccad85c1ebe4c9ceada1aa64293b080' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'pathauto_node_update_alias_multiple-620e193b20ba9caa374fea9ca0ad38f0' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['style_options']['execution_type'] = '1';
  $handler->display->display_options['style_options']['display_type'] = '0';
  $handler->display->display_options['style_options']['display_result'] = 1;
  $handler->display->display_options['style_options']['merge_single_action'] = 1;
  $handler->display->display_options['style_options']['hide_selector'] = 0;
  $handler->display->display_options['style_options']['preserve_selection'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/forreview';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  $views[$view->name] = $view;

  return $views;
}
