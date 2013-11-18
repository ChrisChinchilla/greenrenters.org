<?php

/**
 * Implementation of hook_content_default_fields().
 */
function eco_challenge_content_default_fields() {
  $fields = array();

  // Exported field: field_assoc_challenge
  $fields['ec_blog-field_assoc_challenge'] = array(
    'field_name' => 'field_assoc_challenge',
    'type_name' => 'ec_blog',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'ecochallenge' => 'ecochallenge',
      'ec_event' => 'ec_event',
      'campaign' => 0,
      'competition' => 0,
      'ec_blog' => 0,
      'ec_group' => 0,
      'event' => 0,
      'feed' => 0,
      'feed_item' => 0,
      'modalpage' => 0,
      'news' => 0,
      'opinion' => 0,
      'page' => 0,
      'panel' => 0,
      'poll' => 0,
      'product' => 0,
      'project' => 0,
      'resource' => 0,
      'service' => 0,
      'story' => 0,
      'tutorial' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Associated Challenge',
      'weight' => '-3',
      'description' => 'Please select the challenge this blog post relates to.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_image
  $fields['ec_blog-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'ec_blog',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'Content_Thumb_linked',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__Content_Thumb__LB_Content_thumb',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '5',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_assoc_challenge
  $fields['ec_event-field_assoc_challenge'] = array(
    'field_name' => 'field_assoc_challenge',
    'type_name' => 'ec_event',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'ecochallenge' => 'ecochallenge',
      'ec_event' => 'ec_event',
      'campaign' => 0,
      'competition' => 0,
      'ec_blog' => 0,
      'ec_group' => 0,
      'event' => 0,
      'feed' => 0,
      'feed_item' => 0,
      'modalpage' => 0,
      'news' => 0,
      'opinion' => 0,
      'page' => 0,
      'panel' => 0,
      'poll' => 0,
      'product' => 0,
      'project' => 0,
      'resource' => 0,
      'service' => 0,
      'story' => 0,
      'tutorial' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_assoc_challenge][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Associated Challenge',
      'weight' => '-2',
      'description' => 'Please select the challenge this blog post relates to.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_image
  $fields['ec_event-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'ec_event',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'Content_Thumb_linked',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__Content_Thumb__LB_Content_thumb',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '5',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-4',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Associated Challenge');
  t('Image');

  return $fields;
}
