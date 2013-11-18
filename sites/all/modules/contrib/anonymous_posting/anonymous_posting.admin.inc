<?php

/**
 * @file
 * Administration page callbacks for the Anonymous Posting module.
 */

/**
 * Admin Anonymous Posting module form.
 */
function anonymous_posting_admin_form($form_state) {

  // Prologue:
  $options_ntype = array();
  $node_types = node_get_types();
  uasort($node_types, create_function('$a,$b', 'return strcmp($a->name, $b->name);'));
  foreach ($node_types as $node_type) {
    $options_ntype[$node_type->type] = $node_type->name;
    if (_anonymous_posting_is_enabled($node_type->type)) {
      $options_ntype[$node_type->type] .= '&nbsp;&nbsp;' . l(t('configure'),
        'admin/content/node-type/' . $node_type->type,
          array('query' => drupal_get_destination()));
    }
  }

// Inputs:
  $form['nodes_type'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Allow anonymous users to submit their <em>contact informations</em>'),
    '#description' => t('<p>Choose to which content type the <em>anonymous contact informations feature</em> must be enabled.</p>' .
      '<p>Dont forget to allow anonymous users to create new content for the content type you want. To do so go to the !p page.</p>',
      array('!p' => l(t('Home › Administer › User management > Permissions'), 'admin/user/permissions'))),
    '#options' => $options_ntype,
    '#default_value' => variable_get('anonymous_posting_enabled_node_types', array()),
  );

// Epilogue:
  $form['actions']['submit'] = array('#type' => 'submit', '#value' => t('Save configuration'));

  return $form;
}

/**
 * Process admin anonymous posting module form submission.
 */
function anonymous_posting_admin_form_submit($form, $form_state) {

  $choosen_ntype = array();
  foreach ($form_state['values']['nodes_type'] as $key => $value) {
    module_load_include('inc', 'content', 'includes/content.crud');
    $instance = content_field_instance_read(array('type_name' => $key, 'field_name' => ANONYMOUS_POSTING_FIELD_NAME));
    if ($value) {
      $choosen_ntype[] = $key;
      if (empty($instance)) {
        $instance = array(
          'field_name' => ANONYMOUS_POSTING_FIELD_NAME,
          'type_name' => $key,
          'type' => 'anonymous_author',
          'widget_type' => 'anonymous_author',
          'label' => t('Anonymous contact information'),
          'description' => t('Contact informations intend to be filled by anonymous users.'),
          'locked' => TRUE,
        );
        $instance = content_field_instance_create($instance, FALSE);
        watchdog('create field', 'Added %fname field to content type %ntype',
          array('%fname' => ANONYMOUS_POSTING_FIELD_NAME, '%ntype' => $key));
      }
    }
  }
  $recorded_ntype = variable_get('anonymous_posting_enabled_node_types', array());
  if (array_diff($choosen_ntype, $recorded_ntype) || array_diff($recorded_ntype, $choosen_ntype)) {
    // Clear cache and rebuild menu as requested by the API of the previous
    // content_field_instance_create($instance, FALSE) call.
    content_clear_type_cache(TRUE);
    menu_rebuild();
  }

  variable_set('anonymous_posting_enabled_node_types', $choosen_ntype);

  drupal_set_message(t('The configuration options have been saved.'));
}

