<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function workshops_and_management_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_budgeting
  $groups['workshop-group_budgeting'] = array(
    'group_type' => 'standard',
    'type_name' => 'workshop',
    'group_name' => 'group_budgeting',
    'label' => 'Budgeting',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '11',
    'fields' => array(
      '0' => 'field_budget_complete',
      '1' => 'field_budget_link',
    ),
  );

  // Exported group: group_civi_template
  $groups['workshop-group_civi_template'] = array(
    'group_type' => 'standard',
    'type_name' => 'workshop',
    'group_name' => 'group_civi_template',
    'label' => 'CiviCRM Workshop Template',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '9',
    'fields' => array(
      '0' => 'field_template_completed',
      '1' => 'field_template_link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Budgeting');
  t('CiviCRM Workshop Template');

  return $groups;
}
