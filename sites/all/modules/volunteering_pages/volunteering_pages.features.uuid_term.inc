<?php

/**
 * Implementation of hook_uuid_features_default_terms().
 */
function volunteering_pages_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'uuid' => '97452ab0-f252-11e1-937c-003048612c9c',
    'name' => 'get involved',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9744c5d2-f252-11e1-937c-003048612c9c',
  );
  $terms[] = array(
    'uuid' => '97454b94-f252-11e1-937c-003048612c9c',
    'name' => 'volunteer',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9744c5d2-f252-11e1-937c-003048612c9c',
  );
  $terms[] = array(
    'uuid' => '97456276-f252-11e1-937c-003048612c9c',
    'name' => 'volunteering',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => '9744c5d2-f252-11e1-937c-003048612c9c',
  );
  return $terms;
}
