<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function gr_admin_dashboard_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'type' => 'page',
    'language' => '',
    'uid' => '1',
    'status' => '1',
    'created' => '1354012505',
    'changed' => '1358988783',
    'comment' => '0',
    'promote' => '0',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => 'User Dashboard',
    'body' => '<p>User dashboard, work in progress!</p>
  ',
    'teaser' => '<p>User dashboard, work in progress!</p>
  ',
    'log' => '',
    'revision_timestamp' => '1358988783',
    'format' => '2',
    'name' => 'ChrisChinchilla',
    'picture' => 'sites/default/files/pictures/picture-1.jpg',
    'data' => 'a:11:{s:18:"admin_compact_mode";b:0;s:8:"new_role";i:0;s:12:"new_role_add";s:1:"3";s:16:"new_role_add_qty";s:0:"";s:24:"new_role_add_granularity";s:3:"day";s:9:"nodewords";a:9:{s:8:"abstract";a:1:{s:5:"value";s:42:"Sustainable living in rental accommodation";}s:9:"canonical";a:1:{s:5:"value";s:0:"";}s:9:"copyright";a:1:{s:5:"value";s:18:"Green Renters 2011";}s:11:"description";a:1:{s:5:"value";s:167:"Chris Ward aka Chris Chinchilla is one of Green Renters founders and handles a multitude of tasks including website development, editing, marketing and communications.";}s:8:"keywords";a:1:{s:5:"value";s:68:"Chris Chinchilla, Green Renters, website, development,editor, writer";}s:13:"revisit-after";a:1:{s:5:"value";s:1:"1";}s:6:"robots";a:2:{s:5:"value";a:6:{s:9:"noarchive";i:0;s:8:"nofollow";i:0;s:7:"noindex";i:0;s:5:"noodp";i:0;s:9:"nosnippet";i:0;s:6:"noydir";i:0;}s:11:"use_default";i:0;}s:8:"dc.title";a:1:{s:5:"value";s:0:"";}s:8:"location";a:2:{s:8:"latitude";s:0:"";s:9:"longitude";s:0:"";}}s:7:"contact";i:1;s:13:"form_build_id";s:37:"form-adcba416485286c296675d5d385f4de7";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:5:"block";a:1:{s:10:"masquerade";a:1:{i:0;i:1;}}}',
    'path' => 'user/dashboard',
    'field_image' => array(),
    'field_wysiwyg_images' => array(),
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => '2',
      'redirect_url' => '<confirmation>',
      'teaser' => '0',
      'block' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => '',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'status' => '1',
      'record_exists' => FALSE,
      'roles' => array(
        '0' => '1',
        '1' => '2',
      ),
      'emails' => array(),
      'components' => array(),
    ),
    'last_comment_timestamp' => '1354012505',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'files' => array(),
    '0' => FALSE,
    'probability' => 100,
    'locations' => array(),
    'location' => array(),
    'page_title' => '',
    'uuid' => '1c2d7e2f-387e-11e2-b0cb-003048612c9c',
    'revision_uuid' => '68d26ac8-65c0-11e2-9644-78c67702a32e',
    'nodewords' => array(
      'abstract' => array(
        'value' => 'Sustainable living in rental accommodation',
      ),
      'canonical' => array(
        'value' => '',
      ),
      'copyright' => array(
        'value' => 'Green Renters 2011',
      ),
      'dc.contributor' => array(
        'value' => '',
      ),
      'dc.creator' => array(
        'value' => '',
      ),
      'dc.date' => array(
        'value' => array(
          'day' => '27',
          'month' => '11',
          'year' => '2012',
        ),
      ),
      'dc.title' => array(
        'value' => '',
      ),
      'description' => array(
        'value' => 'Green Renters are a not-for-profit organisation providing sustainability advice specifically for those living in rental accommodation. Renters are a growing part of the community and we believe their involvement is vital and possible.',
      ),
      'keywords' => array(
        'value' => 'Green Renters,Green renting,renting,sustainable living,sustainability,Save money, save energy, save money on energy bills,save water, save gas, save electricity,utility prices,utility bills,Cate Lawrence,Chris Ward,Chris Chinchilla,workshops,events,sustainable rental properties',
      ),
      'location' => array(
        'latitude' => '',
        'longitude' => '',
      ),
      'revisit-after' => array(
        'value' => '1',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'noindex' => 0,
          'follow' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'noodp' => 0,
          'nosnippet' => 0,
          'noydir' => 0,
        ),
        'use_default' => 0,
      ),
      'shorturl' => array(
        'value' => '',
      ),
    ),
    'pathauto_perform_alias' => FALSE,
    'date' => '2012-11-27 21:35:05 +1100',
  );
  return $nodes;
}