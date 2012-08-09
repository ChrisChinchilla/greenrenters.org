<?php

/**
 * Implementation of hook_uuid_features_default_vocabularies().
 */
function workshops_and_management_uuid_features_default_vocabularies() {
  $vocabularies = array();

  $vocabularies[] = array(
    'uuid' => '9f54bab0-e1b8-11e1-bb8c-f00f7b3ab0c6',
    'name' => 'Workshop Category',
    'description' => '',
    'help' => '',
    'relations' => '1',
    'multiple' => '1',
    'required' => '1',
    'tags' => '0',
    'module' => 'features_workshop_category',
    'weight' => '0',
    'nodes' => array(
      'workshop' => 'workshop',
    ),
  );
  return $vocabularies;
}
