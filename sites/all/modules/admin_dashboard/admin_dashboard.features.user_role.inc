<?php

/**
 * Implementation of hook_user_default_roles().
 */
function admin_dashboard_user_default_roles() {
  $roles = array();

  // Exported role: Admins
  $roles['Admins'] = array(
    'name' => 'Admins',
  );

  // Exported role: Staff
  $roles['Staff'] = array(
    'name' => 'Staff',
  );

  // Exported role: Volunteer
  $roles['Volunteer'] = array(
    'name' => 'Volunteer',
  );

  return $roles;
}
