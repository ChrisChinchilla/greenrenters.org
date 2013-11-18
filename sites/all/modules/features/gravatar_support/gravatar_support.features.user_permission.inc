<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function gravatar_support_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer gravatar
  $permissions['administer gravatar'] = array(
    'name' => 'administer gravatar',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: disable own gravatar
  $permissions['disable own gravatar'] = array(
    'name' => 'disable own gravatar',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Eco Challenge participant',
      '2' => 'Editors',
      '3' => 'Members',
      '4' => 'Site member',
      '5' => 'Staff',
      '6' => 'Volunteer',
      '7' => 'Writers',
      '8' => 'authenticated user',
    ),
  );

  // Exported permission: use gravatar
  $permissions['use gravatar'] = array(
    'name' => 'use gravatar',
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

  return $permissions;
}
