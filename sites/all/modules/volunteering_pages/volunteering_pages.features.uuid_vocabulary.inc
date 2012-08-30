<?php

/**
 * Implementation of hook_uuid_features_default_vocabularies().
 */
function volunteering_pages_uuid_features_default_vocabularies() {
  $vocabularies = array();

  $vocabularies[] = array(
    'uuid' => '9744c5d2-f252-11e1-937c-003048612c9c',
    'name' => 'Tag',
    'description' => '',
    'help' => '',
    'relations' => '1',
    'multiple' => '1',
    'required' => '0',
    'tags' => '1',
    'module' => 'wordpress_import',
    'weight' => '0',
    'nodes' => array(
      'campaign' => 'campaign',
      'competition' => 'competition',
      'event' => 'event',
      'feed' => 'feed',
      'feed_item' => 'feed_item',
      'news' => 'news',
      'opinion' => 'opinion',
      'page' => 'page',
      'product' => 'product',
      'resource' => 'resource',
      'service' => 'service',
      'story' => 'story',
      'tutorial' => 'tutorial',
      'webform' => 'webform',
      'workshop' => 'workshop',
    ),
  );
  return $vocabularies;
}
