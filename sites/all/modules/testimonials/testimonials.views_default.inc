<?php

/**
 * Implementation of hook_views_default_views().
 */
function testimonials_views_default_views() {
  $views = array();

  // Exported view: members_testimonials
  $view = new view;
  $view->name = 'members_testimonials';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'civicrm_contact';
  $view->human_name = 'Members Testimonials';
  $view->core = 6;
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
  /* Field: CiviCRM Address: ZIP / Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['postal_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['external'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['postal_code']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['postal_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['postal_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['postal_code']['hide_alter_empty'] = 1;
  /* Field: CiviCRM Contacts: First Name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['label'] = '';
  $handler->display->display_options['fields']['first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['first_name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['first_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['first_name']['link_to_civicrm_contact'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[first_name] from [postal_code] says…';
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
  /* Field: CiviCRM Custom: Testimonials: Testimonial */
  $handler->display->display_options['fields']['testimonial_111']['id'] = 'testimonial_111';
  $handler->display->display_options['fields']['testimonial_111']['table'] = 'civicrm_value_testimonials_28';
  $handler->display->display_options['fields']['testimonial_111']['field'] = 'testimonial_111';
  $handler->display->display_options['fields']['testimonial_111']['label'] = '';
  $handler->display->display_options['fields']['testimonial_111']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['alter']['external'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['testimonial_111']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['testimonial_111']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['alter']['html'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['element_wrapper_class'] = 'testimonial';
  $handler->display->display_options['fields']['testimonial_111']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['testimonial_111']['hide_empty'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['empty_zero'] = 0;
  $handler->display->display_options['fields']['testimonial_111']['hide_alter_empty'] = 1;
  /* Filter: CiviCRM Custom: Testimonials: Testimonial */
  $handler->display->display_options['filters']['testimonial_111']['id'] = 'testimonial_111';
  $handler->display->display_options['filters']['testimonial_111']['table'] = 'civicrm_value_testimonials_28';
  $handler->display->display_options['filters']['testimonial_111']['field'] = 'testimonial_111';
  $handler->display->display_options['filters']['testimonial_111']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['testimonial_111']['value'] = '1';
  $handler->display->display_options['filters']['testimonial_111']['case'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  $views[$view->name] = $view;

  return $views;
}
