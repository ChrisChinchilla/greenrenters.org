<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function rental_sweet_rental_stories_user_default_permissions() {
  $permissions = array();

  // Exported permission: create rsr_story content
  $permissions['create rsr_story content'] = array(
    'name' => 'create rsr_story content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Eco Challenge participant',
      '2' => 'Editors',
      '3' => 'Members',
      '4' => 'Site member',
      '5' => 'Staff',
      '6' => 'Volunteer',
      '7' => 'Writers',
      '8' => 'anonymous user',
      '9' => 'authenticated user',
    ),
  );

  // Exported permission: delete any rsr_story content
  $permissions['delete any rsr_story content'] = array(
    'name' => 'delete any rsr_story content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete own rsr_story content
  $permissions['delete own rsr_story content'] = array(
    'name' => 'delete own rsr_story content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit any rsr_story content
  $permissions['edit any rsr_story content'] = array(
    'name' => 'edit any rsr_story content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit own rsr_story content
  $permissions['edit own rsr_story content'] = array(
    'name' => 'edit own rsr_story content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  return $permissions;
}
