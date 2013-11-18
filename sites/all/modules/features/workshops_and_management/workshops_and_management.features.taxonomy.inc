<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function workshops_and_management_taxonomy_default_vocabularies() {
  return array(
    'workshop_category' => array(
      'name' => 'Workshop Category',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_workshop_category',
      'weight' => '0',
      'nodes' => array(
        'workshop' => 'workshop',
      ),
    ),
  );
}
