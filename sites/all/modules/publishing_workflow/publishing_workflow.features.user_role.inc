<?php

/**
 * Implementation of hook_user_default_roles().
 */
function publishing_workflow_user_default_roles() {
  $roles = array();

  // Exported role: Admins
  $roles['Admins'] = array(
    'name' => 'Admins',
  );

  // Exported role: Members
  $roles['Members'] = array(
    'name' => 'Members',
  );

  // Exported role: Site member
  $roles['Site member'] = array(
    'name' => 'Site member',
  );

  // Exported role: Staff
  $roles['Staff'] = array(
    'name' => 'Staff',
  );

  // Exported role: Volunteer
  $roles['Volunteer'] = array(
    'name' => 'Volunteer',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  return $roles;
}
