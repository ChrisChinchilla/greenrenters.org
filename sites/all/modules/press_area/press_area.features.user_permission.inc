<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function press_area_user_default_permissions() {
  $permissions = array();

  // Exported permission: convert from pressarticle
  $permissions['convert from pressarticle'] = array(
    'name' => 'convert from pressarticle',
    'roles' => array(),
  );

  // Exported permission: convert to pressarticle
  $permissions['convert to pressarticle'] = array(
    'name' => 'convert to pressarticle',
    'roles' => array(),
  );

  // Exported permission: create pressarticle content
  $permissions['create pressarticle content'] = array(
    'name' => 'create pressarticle content',
    'roles' => array(
      '0' => 'Staff',
      '1' => 'Volunteer',
    ),
  );

  // Exported permission: delete any pressarticle content
  $permissions['delete any pressarticle content'] = array(
    'name' => 'delete any pressarticle content',
    'roles' => array(),
  );

  // Exported permission: delete own pressarticle content
  $permissions['delete own pressarticle content'] = array(
    'name' => 'delete own pressarticle content',
    'roles' => array(
      '0' => 'Volunteer',
    ),
  );

  // Exported permission: edit any pressarticle content
  $permissions['edit any pressarticle content'] = array(
    'name' => 'edit any pressarticle content',
    'roles' => array(
      '0' => 'Staff',
      '1' => 'Volunteer',
    ),
  );

  // Exported permission: edit field_articlelink
  $permissions['edit field_articlelink'] = array(
    'name' => 'edit field_articlelink',
    'roles' => array(
      '0' => 'Staff',
      '1' => 'Volunteer',
    ),
  );

  // Exported permission: edit own pressarticle content
  $permissions['edit own pressarticle content'] = array(
    'name' => 'edit own pressarticle content',
    'roles' => array(
      '0' => 'Staff',
      '1' => 'Volunteer',
    ),
  );

  // Exported permission: publish any pressarticle content
  $permissions['publish any pressarticle content'] = array(
    'name' => 'publish any pressarticle content',
    'roles' => array(
      '0' => 'Staff',
      '1' => 'Volunteer',
    ),
  );

  // Exported permission: publish own pressarticle content
  $permissions['publish own pressarticle content'] = array(
    'name' => 'publish own pressarticle content',
    'roles' => array(
      '0' => 'Staff',
      '1' => 'Volunteer',
    ),
  );

  // Exported permission: unpublish any pressarticle content
  $permissions['unpublish any pressarticle content'] = array(
    'name' => 'unpublish any pressarticle content',
    'roles' => array(),
  );

  // Exported permission: unpublish own pressarticle content
  $permissions['unpublish own pressarticle content'] = array(
    'name' => 'unpublish own pressarticle content',
    'roles' => array(),
  );

  // Exported permission: view field_articlelink
  $permissions['view field_articlelink'] = array(
    'name' => 'view field_articlelink',
    'roles' => array(
      '0' => 'Staff',
      '1' => 'Volunteer',
      '2' => 'anonymous user',
    ),
  );

  return $permissions;
}
