<?php

/**
 * Implementation of hook_views_default_views().
 */
function civievent_views_views_default_views() {
  $views = array();

  // Exported view: FrontPageEvents
  $view = new view;
  $view->name = 'FrontPageEvents';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'civicrm_event';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'start_date' => array(
      'label' => '',
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
      'hide_alter_empty' => 1,
      'date_format' => 'custom',
      'custom_date_format' => 'D jS M, g:ia',
      'exclude' => 1,
      'id' => 'start_date',
      'table' => 'civicrm_event',
      'field' => 'start_date',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'city' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
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
      'exclude' => 1,
      'id' => 'city',
      'table' => 'civicrm_address',
      'field' => 'city',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'nothing' => array(
      'label' => '',
      'alter' => array(
        'text' => '[start_date] in [city]',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
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
      'exclude' => 0,
      'id' => 'nothing',
      'table' => 'views',
      'field' => 'nothing',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
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
      'link_to_civicrm_event' => 'page',
      'custom_link' => '',
      'exclude' => 0,
      'id' => 'title',
      'table' => 'civicrm_event',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'start_date' => array(
      'order' => 'ASC',
      'granularity' => 'hour',
      'id' => 'start_date',
      'table' => 'civicrm_event',
      'field' => 'start_date',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'all_details_confirmed__79' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'all_details_confirmed__79',
      'table' => 'civicrm_value_event_management_16',
      'field' => 'all_details_confirmed__79',
      'relationship' => 'none',
    ),
    'is_active' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'is_active',
      'table' => 'civicrm_event',
      'field' => 'is_active',
      'relationship' => 'none',
    ),
    'is_public' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'is_public',
      'table' => 'civicrm_event',
      'field' => 'is_public',
      'relationship' => 'none',
    ),
    'start_date' => array(
      'operator' => '>=',
      'value' => array(
        'type' => 'offset',
        'value' => 'now',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'start_date',
      'table' => 'civicrm_event',
      'field' => 'start_date',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'terms_agreed_76' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'terms_agreed_76',
      'table' => 'civicrm_value_event_management_16',
      'field' => 'terms_agreed_76',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('footer', 'Above are only our next 5 activities, make sure you take a look at our <a href="/workshops">workshops</a> and <a href="/events">events</a> pages for more.');
  $handler->override_option('footer_format', '2');
  $handler->override_option('footer_empty', 1);
  $handler->override_option('items_per_page', 5);
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('row_options', array(
    'inline' => array(),
    'separator' => '',
    'hide_empty' => 0,
  ));
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->override_option('footer', 'Above are only our next 5 activities, make sure you take a look at our <a href="/workshops">workshops and events</a> page for more.');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  // Exported view: civi_workshops
  $view = new view;
  $view->name = 'civi_workshops';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'civicrm_event';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'start_date' => array(
      'label' => '',
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
      'hide_alter_empty' => 1,
      'date_format' => 'custom',
      'custom_date_format' => 'D jS M, g:ia',
      'exclude' => 0,
      'id' => 'start_date',
      'table' => 'civicrm_event',
      'field' => 'start_date',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
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
      'link_to_civicrm_event' => 'page',
      'custom_link' => '',
      'exclude' => 0,
      'id' => 'title',
      'table' => 'civicrm_event',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'city' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
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
      'hide_empty' => 1,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'city',
      'table' => 'civicrm_address',
      'field' => 'city',
      'relationship' => 'none',
    ),
    'state_province' => array(
      'id' => 'state_province',
      'table' => 'civicrm_address',
      'field' => 'state_province',
      'exclude' => 0,
      'relationship' => 'none',
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
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
      'empty_zero' => 0,
      'hide_empty' => 1,
    ),
  ));
  $handler->override_option('sorts', array(
    'start_date' => array(
      'order' => 'ASC',
      'granularity' => 'second',
      'id' => 'start_date',
      'table' => 'civicrm_event',
      'field' => 'start_date',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'start_date' => array(
      'operator' => '>',
      'value' => array(
        'type' => 'offset',
        'value' => '-2 day',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'start_date',
      'table' => 'civicrm_event',
      'field' => 'start_date',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'is_public' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'is_public',
      'table' => 'civicrm_event',
      'field' => 'is_public',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'is_active' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'is_active',
      'table' => 'civicrm_event',
      'field' => 'is_active',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'all_details_confirmed__79' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'all_details_confirmed__79',
      'table' => 'civicrm_value_event_management_16',
      'field' => 'all_details_confirmed__79',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'terms_agreed_76' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'terms_agreed_76',
      'table' => 'civicrm_value_event_management_16',
      'field' => 'terms_agreed_76',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 15);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('pager_element', 2);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'start_date' => 'start_date',
      'end_date' => 'end_date',
      'title' => 'title',
      'city' => 'city',
      'state_province' => 'state_province',
      'registration_link_text' => 'registration_link_text',
    ),
    'info' => array(
      'start_date' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'end_date' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'city' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'state_province' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'registration_link_text' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => 'start_date',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'start_date' => 'start_date',
      'end_date' => 'end_date',
      'city' => 'city',
      'state_province' => 'state_province',
    ),
    'separator' => ',',
    'hide_empty' => 1,
  ));
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}
