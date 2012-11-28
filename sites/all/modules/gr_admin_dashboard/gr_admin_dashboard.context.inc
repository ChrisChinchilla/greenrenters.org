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
        'dashboard' => 'dashboard',
      ),
    ),
    'user' => array(
      'values' => array(
        'Admins' => 'Admins',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'civicrm-2' => array(
          'module' => 'civicrm',
          'delta' => 2,
          'region' => 'content',
          'weight' => 0,
        ),
        'civicrm-6' => array(
          'module' => 'civicrm',
          'delta' => 6,
          'region' => 'content',
          'weight' => 1,
        ),
        'disqus-disqus_recent_comments' => array(
          'module' => 'disqus',
          'delta' => 'disqus_recent_comments',
          'region' => 'content',
          'weight' => 2,
        ),
        'user-2' => array(
          'module' => 'user',
          'delta' => 2,
          'region' => 'content',
          'weight' => 3,
        ),
        'user-3' => array(
          'module' => 'user',
          'delta' => 3,
          'region' => 'content',
          'weight' => 4,
        ),
        'views-promoted_acontent-block_1' => array(
          'module' => 'views',
          'delta' => 'promoted_acontent-block_1',
          'region' => 'content',
          'weight' => 5,
        ),
        'views-recent_members-block_1' => array(
          'module' => 'views',
          'delta' => 'recent_members-block_1',
          'region' => 'content',
          'weight' => 6,
        ),
        'views-recent_contributions-block_1' => array(
          'module' => 'views',
          'delta' => 'recent_contributions-block_1',
          'region' => 'content',
          'weight' => 7,
        ),
        'views-for_review-block_1' => array(
          'module' => 'views',
          'delta' => 'for_review-block_1',
          'region' => 'content',
          'weight' => 8,
        ),
        'views-latest_articles-block_1' => array(
          'module' => 'views',
          'delta' => 'latest_articles-block_1',
          'region' => 'content',
          'weight' => 9,
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
