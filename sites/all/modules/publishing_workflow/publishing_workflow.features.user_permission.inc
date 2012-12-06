<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function publishing_workflow_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
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

  // Exported permission: access mollom statistics
  $permissions['access mollom statistics'] = array(
    'name' => 'access mollom statistics',
    'roles' => array(),
  );

  // Exported permission: administer anonymous posting settings
  $permissions['administer anonymous posting settings'] = array(
    'name' => 'administer anonymous posting settings',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: administer mollom
  $permissions['administer mollom'] = array(
    'name' => 'administer mollom',
    'roles' => array(),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: bypass mollom protection
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(),
  );

  // Exported permission: create campaign content
  $permissions['create campaign content'] = array(
    'name' => 'create campaign content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: create competition content
  $permissions['create competition content'] = array(
    'name' => 'create competition content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: create event content
  $permissions['create event content'] = array(
    'name' => 'create event content',
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

  // Exported permission: create feed content
  $permissions['create feed content'] = array(
    'name' => 'create feed content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: create feed_item content
  $permissions['create feed_item content'] = array(
    'name' => 'create feed_item content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: create modalpage content
  $permissions['create modalpage content'] = array(
    'name' => 'create modalpage content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: create news content
  $permissions['create news content'] = array(
    'name' => 'create news content',
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

  // Exported permission: create opinion content
  $permissions['create opinion content'] = array(
    'name' => 'create opinion content',
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

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: create project content
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: create resource content
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Eco Challenge participant',
      '2' => 'Editors',
      '3' => 'Members',
      '4' => 'Site member',
      '5' => 'Staff',
      '6' => 'Writers',
      '7' => 'anonymous user',
      '8' => 'authenticated user',
    ),
  );

  // Exported permission: create service content
  $permissions['create service content'] = array(
    'name' => 'create service content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: create story content
  $permissions['create story content'] = array(
    'name' => 'create story content',
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

  // Exported permission: create tutorial content
  $permissions['create tutorial content'] = array(
    'name' => 'create tutorial content',
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

  // Exported permission: create webform content
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: create workshop content
  $permissions['create workshop content'] = array(
    'name' => 'create workshop content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete any campaign content
  $permissions['delete any campaign content'] = array(
    'name' => 'delete any campaign content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: delete any competition content
  $permissions['delete any competition content'] = array(
    'name' => 'delete any competition content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: delete any feed content
  $permissions['delete any feed content'] = array(
    'name' => 'delete any feed content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete any feed_item content
  $permissions['delete any feed_item content'] = array(
    'name' => 'delete any feed_item content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete any modalpage content
  $permissions['delete any modalpage content'] = array(
    'name' => 'delete any modalpage content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete any news content
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: delete any opinion content
  $permissions['delete any opinion content'] = array(
    'name' => 'delete any opinion content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete any project content
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: delete any resource content
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: delete any service content
  $permissions['delete any service content'] = array(
    'name' => 'delete any service content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: delete any story content
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: delete any tutorial content
  $permissions['delete any tutorial content'] = array(
    'name' => 'delete any tutorial content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: delete any webform content
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete any workshop content
  $permissions['delete any workshop content'] = array(
    'name' => 'delete any workshop content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete own campaign content
  $permissions['delete own campaign content'] = array(
    'name' => 'delete own campaign content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: delete own competition content
  $permissions['delete own competition content'] = array(
    'name' => 'delete own competition content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: delete own event content
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: delete own feed content
  $permissions['delete own feed content'] = array(
    'name' => 'delete own feed content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete own feed_item content
  $permissions['delete own feed_item content'] = array(
    'name' => 'delete own feed_item content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete own modalpage content
  $permissions['delete own modalpage content'] = array(
    'name' => 'delete own modalpage content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete own news content
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: delete own opinion content
  $permissions['delete own opinion content'] = array(
    'name' => 'delete own opinion content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: delete own project content
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: delete own resource content
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: delete own service content
  $permissions['delete own service content'] = array(
    'name' => 'delete own service content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: delete own story content
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: delete own tutorial content
  $permissions['delete own tutorial content'] = array(
    'name' => 'delete own tutorial content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: delete own webform content
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete own workshop content
  $permissions['delete own workshop content'] = array(
    'name' => 'delete own workshop content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit any campaign content
  $permissions['edit any campaign content'] = array(
    'name' => 'edit any campaign content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit any competition content
  $permissions['edit any competition content'] = array(
    'name' => 'edit any competition content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit any event content
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit any feed content
  $permissions['edit any feed content'] = array(
    'name' => 'edit any feed content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit any feed_item content
  $permissions['edit any feed_item content'] = array(
    'name' => 'edit any feed_item content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit any modalpage content
  $permissions['edit any modalpage content'] = array(
    'name' => 'edit any modalpage content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit any news content
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit any opinion content
  $permissions['edit any opinion content'] = array(
    'name' => 'edit any opinion content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit any project content
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit any resource content
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit any service content
  $permissions['edit any service content'] = array(
    'name' => 'edit any service content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit any story content
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit any tutorial content
  $permissions['edit any tutorial content'] = array(
    'name' => 'edit any tutorial content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit any webform content
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit any workshop content
  $permissions['edit any workshop content'] = array(
    'name' => 'edit any workshop content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit field_anonymous_author
  $permissions['edit field_anonymous_author'] = array(
    'name' => 'edit field_anonymous_author',
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

  // Exported permission: edit field_budget_complete
  $permissions['edit field_budget_complete'] = array(
    'name' => 'edit field_budget_complete',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit field_budget_link
  $permissions['edit field_budget_link'] = array(
    'name' => 'edit field_budget_link',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit field_enquiry_form
  $permissions['edit field_enquiry_form'] = array(
    'name' => 'edit field_enquiry_form',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit field_forreview
  $permissions['edit field_forreview'] = array(
    'name' => 'edit field_forreview',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit field_image
  $permissions['edit field_image'] = array(
    'name' => 'edit field_image',
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

  // Exported permission: edit field_relatedworkshops
  $permissions['edit field_relatedworkshops'] = array(
    'name' => 'edit field_relatedworkshops',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit field_review
  $permissions['edit field_review'] = array(
    'name' => 'edit field_review',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit field_template_completed
  $permissions['edit field_template_completed'] = array(
    'name' => 'edit field_template_completed',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit field_template_link
  $permissions['edit field_template_link'] = array(
    'name' => 'edit field_template_link',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit field_views_filter
  $permissions['edit field_views_filter'] = array(
    'name' => 'edit field_views_filter',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit field_wholesale
  $permissions['edit field_wholesale'] = array(
    'name' => 'edit field_wholesale',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit field_workshops_flyer
  $permissions['edit field_workshops_flyer'] = array(
    'name' => 'edit field_workshops_flyer',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit field_wysiwyg_images
  $permissions['edit field_wysiwyg_images'] = array(
    'name' => 'edit field_wysiwyg_images',
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

  // Exported permission: edit own campaign content
  $permissions['edit own campaign content'] = array(
    'name' => 'edit own campaign content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit own competition content
  $permissions['edit own competition content'] = array(
    'name' => 'edit own competition content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit own event content
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
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

  // Exported permission: edit own feed content
  $permissions['edit own feed content'] = array(
    'name' => 'edit own feed content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit own feed_item content
  $permissions['edit own feed_item content'] = array(
    'name' => 'edit own feed_item content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit own modalpage content
  $permissions['edit own modalpage content'] = array(
    'name' => 'edit own modalpage content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit own news content
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
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

  // Exported permission: edit own opinion content
  $permissions['edit own opinion content'] = array(
    'name' => 'edit own opinion content',
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

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit own project content
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit own resource content
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
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

  // Exported permission: edit own service content
  $permissions['edit own service content'] = array(
    'name' => 'edit own service content',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  // Exported permission: edit own story content
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
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

  // Exported permission: edit own tutorial content
  $permissions['edit own tutorial content'] = array(
    'name' => 'edit own tutorial content',
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

  // Exported permission: edit own webform content
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: edit own workshop content
  $permissions['edit own workshop content'] = array(
    'name' => 'edit own workshop content',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
    ),
  );

  // Exported permission: view field_anonymous_author
  $permissions['view field_anonymous_author'] = array(
    'name' => 'view field_anonymous_author',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: view field_budget_complete
  $permissions['view field_budget_complete'] = array(
    'name' => 'view field_budget_complete',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: view field_budget_link
  $permissions['view field_budget_link'] = array(
    'name' => 'view field_budget_link',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: view field_enquiry_form
  $permissions['view field_enquiry_form'] = array(
    'name' => 'view field_enquiry_form',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: view field_forreview
  $permissions['view field_forreview'] = array(
    'name' => 'view field_forreview',
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

  // Exported permission: view field_image
  $permissions['view field_image'] = array(
    'name' => 'view field_image',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Eco Challenge participant',
      '2' => 'Editors',
      '3' => 'Members',
      '4' => 'Writers',
      '5' => 'anonymous user',
      '6' => 'authenticated user',
    ),
  );

  // Exported permission: view field_relatedworkshops
  $permissions['view field_relatedworkshops'] = array(
    'name' => 'view field_relatedworkshops',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Eco Challenge participant',
      '2' => 'Editors',
      '3' => 'Members',
      '4' => 'Site member',
      '5' => 'Writers',
      '6' => 'anonymous user',
      '7' => 'authenticated user',
    ),
  );

  // Exported permission: view field_review
  $permissions['view field_review'] = array(
    'name' => 'view field_review',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Eco Challenge participant',
      '2' => 'Editors',
      '3' => 'Members',
      '4' => 'Writers',
      '5' => 'anonymous user',
      '6' => 'authenticated user',
    ),
  );

  // Exported permission: view field_template_completed
  $permissions['view field_template_completed'] = array(
    'name' => 'view field_template_completed',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: view field_template_link
  $permissions['view field_template_link'] = array(
    'name' => 'view field_template_link',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: view field_views_filter
  $permissions['view field_views_filter'] = array(
    'name' => 'view field_views_filter',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: view field_wholesale
  $permissions['view field_wholesale'] = array(
    'name' => 'view field_wholesale',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: view field_workshops_flyer
  $permissions['view field_workshops_flyer'] = array(
    'name' => 'view field_workshops_flyer',
    'roles' => array(
      '0' => 'Admins',
    ),
  );

  // Exported permission: view field_wysiwyg_images
  $permissions['view field_wysiwyg_images'] = array(
    'name' => 'view field_wysiwyg_images',
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

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'Admins',
      '1' => 'Editors',
      '2' => 'Writers',
    ),
  );

  return $permissions;
}
