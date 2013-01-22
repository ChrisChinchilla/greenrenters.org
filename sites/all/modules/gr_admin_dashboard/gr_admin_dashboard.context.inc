<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function gr_admin_dashboard_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'admin_dashboard';
  $context->description = 'Admin Dashboard';
  $context->tag = 'Dashboards';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/dashboard' => 'user/dashboard',
      ),
    ),
    'user' => array(
      'values' => array(
        'Admins' => 'Admins',
        'Staff' => 'Staff',
        'Volunteer' => 'Volunteer',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-civi_activities-block_1' => array(
          'module' => 'views',
          'delta' => 'civi_activities-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
        'views-project_funding-block_1' => array(
          'module' => 'views',
          'delta' => 'project_funding-block_1',
          'region' => 'content',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Dashboard');
  t('Dashboards');
  $export['admin_dashboard'] = $context;

  return $export;
}
