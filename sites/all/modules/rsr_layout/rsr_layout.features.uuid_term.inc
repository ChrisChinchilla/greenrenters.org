<?php

/**
 * Implementation of hook_uuid_features_default_terms().
 */
function rsr_layout_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'uuid' => 'a18e3704-150f-11e2-aee1-c289686be22d',
    'name' => 'community',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9744c5d2-f252-11e1-937c-003048612c9c',
  );
  $terms[] = array(
    'uuid' => 'a18e644a-150f-11e2-aee1-c289686be22d',
    'name' => 'donate',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9744c5d2-f252-11e1-937c-003048612c9c',
  );
  $terms[] = array(
    'uuid' => 'a18e7ea8-150f-11e2-aee1-c289686be22d',
    'name' => 'membership',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9744c5d2-f252-11e1-937c-003048612c9c',
  );
  $terms[] = array(
    'uuid' => 'a18e94b0-150f-11e2-aee1-c289686be22d',
    'name' => 'rental sweet rental',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9744c5d2-f252-11e1-937c-003048612c9c',
  );
  $terms[] = array(
    'uuid' => 'a18eac0c-150f-11e2-aee1-c289686be22d',
    'name' => 'support',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9744c5d2-f252-11e1-937c-003048612c9c',
  );
  return $terms;
}
