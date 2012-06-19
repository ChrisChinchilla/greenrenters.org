<?php

/**
 * Implementation of hook_user_default_roles().
 */
function eco_challenge_user_default_roles() {
  $roles = array();

  // Exported role: Eco Challenge participant
  $roles['Eco Challenge participant'] = array(
    'name' => 'Eco Challenge participant',
  );

  return $roles;
}
