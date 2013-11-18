<?php

/**
 * Implementation of hook_uuid_features_default_vocabularies().
 */
function base_taxonomy_uuid_features_default_vocabularies() {
  $vocabularies = array();

  $vocabularies[] = array(
    'uuid' => '3790d1df-f252-11e1-937c-003048612c9c',
    'name' => 'Ad groups',
    'help' => '',
    'relations' => '0',
    'multiple' => '1',
    'required' => '0',
    'tags' => '0',
    'module' => 'ad',
    'weight' => '0',
    'nodes' => array(
      'ad' => 'ad',
    ),
  );
  $vocabularies[] = array(
    'uuid' => '3790def9-f252-11e1-937c-003048612c9c',
    'name' => 'Category',
    'description' => '',
    'help' => 'This is an important field and handles into which \'room\' articles go into, DO NOT enter new terms, just pick from the auto complete list, i.e. Bathroom, Bedroom etc…',
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
      'product' => 'product',
      'resource' => 'resource',
      'service' => 'service',
      'story' => 'story',
      'tutorial' => 'tutorial',
    ),
  );
  $vocabularies[] = array(
    'uuid' => '3790e75c-f252-11e1-937c-003048612c9c',
    'name' => 'FAQ',
    'description' => '',
    'help' => 'These are predefined lists, DO NOT add new terms here, if it doesn\'t fit a term, leave it for now.',
    'relations' => '1',
    'multiple' => '1',
    'required' => '0',
    'tags' => '1',
    'module' => 'taxonomy',
    'weight' => '0',
    'nodes' => array(
      'campaign' => 'campaign',
      'opinion' => 'opinion',
      'product' => 'product',
      'resource' => 'resource',
      'service' => 'service',
      'tutorial' => 'tutorial',
    ),
  );
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
