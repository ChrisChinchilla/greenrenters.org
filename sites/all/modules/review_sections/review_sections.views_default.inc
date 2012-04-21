<?php

/**
 * Implementation of hook_views_default_views().
 */
function review_sections_views_default_views() {
  $views = array();

  // Exported view: for_review
  $view = new view;
  $view->name = 'for_review';
  $view->description = 'Articles up for review';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'edit_node' => array(
      'label' => 'Edit',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 0,
      'text' => '',
      'exclude' => 0,
      'id' => 'edit_node',
      'table' => 'node',
      'field' => 'edit_node',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'view_node' => array(
      'label' => 'Link',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 0,
      'text' => '',
      'exclude' => 0,
      'id' => 'view_node',
      'table' => 'node',
      'field' => 'view_node',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => 'Title',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
    ),
  ));
  $handler->override_option('sorts', array(
    'title' => array(
      'order' => 'ASC',
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'field_forreview_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        'Yes' => 'Yes',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_forreview_value_many_to_one',
      'table' => 'node_data_field_forreview',
      'field' => 'field_forreview_value_many_to_one',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('items_per_page', 25);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'bulk');
  $handler->override_option('style_options', array(
    'execution_type' => '1',
    'max_performance' => 0,
    'display_type' => '0',
    'hide_selector' => 0,
    'preserve_selection' => 1,
    'display_result' => 1,
    'merge_single_action' => 1,
    'operations' => array(
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
    ),
  ));
  $handler->override_option('path', 'admin/content/forreview');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
