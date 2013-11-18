<?php

/**
 * Implementation of hook_uuid_features_default_terms().
 */
function workshops_and_management_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'uuid' => '9f620918-e1b8-11e1-bb8c-f00f7b3ab0c6',
    'name' => 'Body & Home',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9f54bab0-e1b8-11e1-bb8c-f00f7b3ab0c6',
  );
  $terms[] = array(
    'uuid' => '9f621eee-e1b8-11e1-bb8c-f00f7b3ab0c6',
    'name' => 'Food & Waste',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9f54bab0-e1b8-11e1-bb8c-f00f7b3ab0c6',
  );
  $terms[] = array(
    'uuid' => '9f6234ec-e1b8-11e1-bb8c-f00f7b3ab0c6',
    'name' => 'Gardening',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9f54bab0-e1b8-11e1-bb8c-f00f7b3ab0c6',
  );
  $terms[] = array(
    'uuid' => '9f624cf2-e1b8-11e1-bb8c-f00f7b3ab0c6',
    'name' => 'Home Sustainability',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9f54bab0-e1b8-11e1-bb8c-f00f7b3ab0c6',
  );
  $terms[] = array(
    'uuid' => '9f62648a-e1b8-11e1-bb8c-f00f7b3ab0c6',
    'name' => 'Lifestyle',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9f54bab0-e1b8-11e1-bb8c-f00f7b3ab0c6',
  );
  return $terms;
}
