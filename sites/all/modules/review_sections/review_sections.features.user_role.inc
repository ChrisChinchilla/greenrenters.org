<?php

/**
 * Implementation of hook_user_default_roles().
 */
function review_sections_user_default_roles() {
  $roles = array();

  // Exported role: Editors
  $roles['Editors'] = array(
    'name' => 'Editors',
  );

  // Exported role: Writers
  $roles['Writers'] = array(
    'name' => 'Writers',
  );

  return $roles;
}
