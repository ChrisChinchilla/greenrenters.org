<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function publishing_workflow_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'type' => 'page',
    'language' => '',
    'uid' => '1',
    'status' => '1',
    'created' => '1348544407',
    'changed' => '1354858144',
    'comment' => '2',
    'promote' => '0',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => 'Contribute',
    'body' => '<p>We&#39;re keen to make this site a community resource, for a community that is disparate, varied and wide spread.</p>
  <p>We don&#39;t have the resources to do it all ourselves, so if you have something you want to add here, go ahead. You will be asked to add your name and email so we can get in touch with you if need be and you will be asked to prove your human so we don&#39;t get inundated with spam, but apart from that, go crazy, write whatever you feel.</p>
  <p>Initially anything you write will be approved before being published, this is so we can do a few things bend the scenes but also to ensure that content is relevant and legal etc. After a few posts, you should be approved straight away, but this is a new feature, so we don&#39;t want to open the flood gates straight away.</p>
  <p>This is very much in early stages, it will need testing and clarifying, but be bold and give it a go. We won&#39;t know where the problems and confusions lie until you do.</p>
  <h3>Ready to get stuck in?</h3>
  <h2>Got something new to add?</h2>
  <p><a href="/node/add">Click here to enter our content creation pages</a> and <em>start contribution to the Green Renting community</em>.</p>
  <h2>Want to help us improve existing content?</h2>
  <p>The table below contains articles we&#39;re looking to update, improve or consolidate, anything that takes your fancy, simply click the &#39;edit&#39; link and get started! Any changes you make will create new versions of the article, so you wont be destroying what we have already, simply adding to it.</p>
  ',
    'teaser' => '<p>We&#39;re keen to make this site a community resource, for a community that is disparate, varied and wide spread.</p>
  <p>We don&#39;t have the resources to do it all ourselves, so if you have something you want to add here, go ahead. You will be asked to add your name and email so we can get in touch with you if need be and you will be asked to prove your human so we don&#39;t get inundated with spam, but apart from that, go crazy, write whatever you feel.</p>',
    'log' => '',
    'revision_timestamp' => '1354858144',
    'format' => '2',
    'name' => 'ChrisChinchilla',
    'picture' => 'sites/default/files/pictures/picture-1.jpg',
    'data' => 'a:10:{s:18:"admin_compact_mode";b:0;s:8:"new_role";i:0;s:12:"new_role_add";s:1:"3";s:16:"new_role_add_qty";s:0:"";s:24:"new_role_add_granularity";s:3:"day";s:7:"contact";i:1;s:13:"form_build_id";s:37:"form-adcba416485286c296675d5d385f4de7";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:5:"block";a:1:{s:10:"masquerade";a:1:{i:0;i:1;}}}',
    'path' => 'contribute',
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
    'last_comment_timestamp' => '1348546554',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'files' => array(),
    '0' => FALSE,
    'probability' => 100,
    'page_title' => '',
    'uuid' => 'b332a202-06c2-11e2-825f-121c575fd617',
    'revision_uuid' => '03fe5d16-402f-11e2-88de-003048612c9c',
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
      'dcterms.contributor' => array(
        'value' => '',
      ),
      'dcterms.creator' => array(
        'value' => '',
      ),
      'dcterms.date' => array(
        'value' => array(
          'day' => '25',
          'month' => '9',
          'year' => '2012',
        ),
      ),
      'dcterms.title' => array(
        'value' => '',
      ),
      'description' => array(
        'value' => 'We welcome contributions in many ways and it\'s easy to get started.',
      ),
      'keywords' => array(
        'value' => 'green renters,contribute,write,code',
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
    'date' => '2012-09-25 14:40:07 +1100',
  );
  return $nodes;
}
