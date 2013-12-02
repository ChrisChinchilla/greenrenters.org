<?php

/**
 * Implementation of hook_content_default_fields().
 */
function rental_sweet_rental_stories_content_default_fields() {
  $fields = array();

  // Exported field: field_anonymous_author
  $fields['rsr_story-field_anonymous_author'] = array(
    'field_name' => 'field_anonymous_author',
    'type_name' => 'rsr_story',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'anonymous_author',
    'required' => '1',
    'multiple' => '0',
    'module' => 'anonymous_posting',
    'active' => '1',
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Anonymous contact information',
      'weight' => '8',
      'description' => 'If you\'re not a registered user, we just need to prove you\'re a human.',
      'type' => 'anonymous_author',
      'module' => 'anonymous_posting',
    ),
  );

  // Exported field: field_image
  $fields['rsr_story-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'rsr_story',
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
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'field_image/rsr_story',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '10M',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'imce' => 'imce',
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_autocomplete' => '0',
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_imce_mode' => '1',
      'insert' => 0,
      'insert_absolute' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'icon_link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_Content_Thumb' => 0,
        'imagecache_fp_full' => 0,
        'imagecache_fp_slideshow' => 0,
        'imagecache_LB_Content_thumb' => 0,
        'lightbox2--cart--cart' => 0,
        'lightbox2--cart--Content_Thumb' => 0,
        'lightbox2--cart--fp_full' => 0,
        'lightbox2--cart--fp_slideshow' => 0,
        'lightbox2--cart--LB_Content_thumb' => 0,
        'lightbox2--cart--newsletter' => 0,
        'lightbox2--cart--original' => 0,
        'lightbox2--cart--product' => 0,
        'lightbox2--cart--product_full' => 0,
        'lightbox2--cart--product_list' => 0,
        'lightbox2--cart--uc_category' => 0,
        'lightbox2--cart--uc_thumbnail' => 0,
        'lightbox2--cart--WYSIWYG_full' => 0,
        'lightbox2--cart--WYSIWYG_large' => 0,
        'lightbox2--cart--WYSIWYG_medium' => 0,
        'lightbox2--cart--WYSIWYG_small' => 0,
        'lightbox2--Content_Thumb--cart' => 0,
        'lightbox2--Content_Thumb--Content_Thumb' => 0,
        'lightbox2--Content_Thumb--fp_full' => 0,
        'lightbox2--Content_Thumb--fp_slideshow' => 0,
        'lightbox2--Content_Thumb--LB_Content_thumb' => 0,
        'lightbox2--Content_Thumb--newsletter' => 0,
        'lightbox2--Content_Thumb--original' => 0,
        'lightbox2--Content_Thumb--product' => 0,
        'lightbox2--Content_Thumb--product_full' => 0,
        'lightbox2--Content_Thumb--product_list' => 0,
        'lightbox2--Content_Thumb--uc_category' => 0,
        'lightbox2--Content_Thumb--uc_thumbnail' => 0,
        'lightbox2--Content_Thumb--WYSIWYG_full' => 0,
        'lightbox2--Content_Thumb--WYSIWYG_large' => 0,
        'lightbox2--Content_Thumb--WYSIWYG_medium' => 0,
        'lightbox2--Content_Thumb--WYSIWYG_small' => 0,
        'lightbox2--fp_full--cart' => 0,
        'lightbox2--fp_full--Content_Thumb' => 0,
        'lightbox2--fp_full--fp_full' => 0,
        'lightbox2--fp_full--fp_slideshow' => 0,
        'lightbox2--fp_full--LB_Content_thumb' => 0,
        'lightbox2--fp_full--newsletter' => 0,
        'lightbox2--fp_full--original' => 0,
        'lightbox2--fp_full--product' => 0,
        'lightbox2--fp_full--product_full' => 0,
        'lightbox2--fp_full--product_list' => 0,
        'lightbox2--fp_full--uc_category' => 0,
        'lightbox2--fp_full--uc_thumbnail' => 0,
        'lightbox2--fp_full--WYSIWYG_full' => 0,
        'lightbox2--fp_full--WYSIWYG_large' => 0,
        'lightbox2--fp_full--WYSIWYG_medium' => 0,
        'lightbox2--fp_full--WYSIWYG_small' => 0,
        'lightbox2--fp_slideshow--cart' => 0,
        'lightbox2--fp_slideshow--Content_Thumb' => 0,
        'lightbox2--fp_slideshow--fp_full' => 0,
        'lightbox2--fp_slideshow--fp_slideshow' => 0,
        'lightbox2--fp_slideshow--LB_Content_thumb' => 0,
        'lightbox2--fp_slideshow--newsletter' => 0,
        'lightbox2--fp_slideshow--original' => 0,
        'lightbox2--fp_slideshow--product' => 0,
        'lightbox2--fp_slideshow--product_full' => 0,
        'lightbox2--fp_slideshow--product_list' => 0,
        'lightbox2--fp_slideshow--uc_category' => 0,
        'lightbox2--fp_slideshow--uc_thumbnail' => 0,
        'lightbox2--fp_slideshow--WYSIWYG_full' => 0,
        'lightbox2--fp_slideshow--WYSIWYG_large' => 0,
        'lightbox2--fp_slideshow--WYSIWYG_medium' => 0,
        'lightbox2--fp_slideshow--WYSIWYG_small' => 0,
        'lightbox2--LB_Content_thumb--cart' => 0,
        'lightbox2--LB_Content_thumb--Content_Thumb' => 0,
        'lightbox2--LB_Content_thumb--fp_full' => 0,
        'lightbox2--LB_Content_thumb--fp_slideshow' => 0,
        'lightbox2--LB_Content_thumb--LB_Content_thumb' => 0,
        'lightbox2--LB_Content_thumb--newsletter' => 0,
        'lightbox2--LB_Content_thumb--original' => 0,
        'lightbox2--LB_Content_thumb--product' => 0,
        'lightbox2--LB_Content_thumb--product_full' => 0,
        'lightbox2--LB_Content_thumb--product_list' => 0,
        'lightbox2--LB_Content_thumb--uc_category' => 0,
        'lightbox2--LB_Content_thumb--uc_thumbnail' => 0,
        'lightbox2--LB_Content_thumb--WYSIWYG_full' => 0,
        'lightbox2--LB_Content_thumb--WYSIWYG_large' => 0,
        'lightbox2--LB_Content_thumb--WYSIWYG_medium' => 0,
        'lightbox2--LB_Content_thumb--WYSIWYG_small' => 0,
        'lightbox2--link--cart' => 0,
        'lightbox2--link--Content_Thumb' => 0,
        'lightbox2--link--fp_full' => 0,
        'lightbox2--link--fp_slideshow' => 0,
        'lightbox2--link--LB_Content_thumb' => 0,
        'lightbox2--link--newsletter' => 0,
        'lightbox2--link--product' => 0,
        'lightbox2--link--product_full' => 0,
        'lightbox2--link--product_list' => 0,
        'lightbox2--link--uc_category' => 0,
        'lightbox2--link--uc_thumbnail' => 0,
        'lightbox2--link--WYSIWYG_full' => 0,
        'lightbox2--link--WYSIWYG_large' => 0,
        'lightbox2--link--WYSIWYG_medium' => 0,
        'lightbox2--link--WYSIWYG_small' => 0,
        'lightbox2--newsletter--cart' => 0,
        'lightbox2--newsletter--Content_Thumb' => 0,
        'lightbox2--newsletter--fp_full' => 0,
        'lightbox2--newsletter--fp_slideshow' => 0,
        'lightbox2--newsletter--LB_Content_thumb' => 0,
        'lightbox2--newsletter--newsletter' => 0,
        'lightbox2--newsletter--original' => 0,
        'lightbox2--newsletter--product' => 0,
        'lightbox2--newsletter--product_full' => 0,
        'lightbox2--newsletter--product_list' => 0,
        'lightbox2--newsletter--uc_category' => 0,
        'lightbox2--newsletter--uc_thumbnail' => 0,
        'lightbox2--newsletter--WYSIWYG_full' => 0,
        'lightbox2--newsletter--WYSIWYG_large' => 0,
        'lightbox2--newsletter--WYSIWYG_medium' => 0,
        'lightbox2--newsletter--WYSIWYG_small' => 0,
        'lightbox2--original--cart' => 0,
        'lightbox2--original--Content_Thumb' => 0,
        'lightbox2--original--fp_full' => 0,
        'lightbox2--original--fp_slideshow' => 0,
        'lightbox2--original--LB_Content_thumb' => 0,
        'lightbox2--original--newsletter' => 0,
        'lightbox2--original--product' => 0,
        'lightbox2--original--product_full' => 0,
        'lightbox2--original--product_list' => 0,
        'lightbox2--original--uc_category' => 0,
        'lightbox2--original--uc_thumbnail' => 0,
        'lightbox2--original--WYSIWYG_full' => 0,
        'lightbox2--original--WYSIWYG_large' => 0,
        'lightbox2--original--WYSIWYG_medium' => 0,
        'lightbox2--original--WYSIWYG_small' => 0,
        'lightbox2--product--cart' => 0,
        'lightbox2--product--Content_Thumb' => 0,
        'lightbox2--product--fp_full' => 0,
        'lightbox2--product--fp_slideshow' => 0,
        'lightbox2--product--LB_Content_thumb' => 0,
        'lightbox2--product--newsletter' => 0,
        'lightbox2--product--original' => 0,
        'lightbox2--product--product' => 0,
        'lightbox2--product--product_full' => 0,
        'lightbox2--product--product_list' => 0,
        'lightbox2--product--uc_category' => 0,
        'lightbox2--product--uc_thumbnail' => 0,
        'lightbox2--product--WYSIWYG_full' => 0,
        'lightbox2--product--WYSIWYG_large' => 0,
        'lightbox2--product--WYSIWYG_medium' => 0,
        'lightbox2--product--WYSIWYG_small' => 0,
        'lightbox2--product_full--cart' => 0,
        'lightbox2--product_full--Content_Thumb' => 0,
        'lightbox2--product_full--fp_full' => 0,
        'lightbox2--product_full--fp_slideshow' => 0,
        'lightbox2--product_full--LB_Content_thumb' => 0,
        'lightbox2--product_full--newsletter' => 0,
        'lightbox2--product_full--original' => 0,
        'lightbox2--product_full--product' => 0,
        'lightbox2--product_full--product_full' => 0,
        'lightbox2--product_full--product_list' => 0,
        'lightbox2--product_full--uc_category' => 0,
        'lightbox2--product_full--uc_thumbnail' => 0,
        'lightbox2--product_full--WYSIWYG_full' => 0,
        'lightbox2--product_full--WYSIWYG_large' => 0,
        'lightbox2--product_full--WYSIWYG_medium' => 0,
        'lightbox2--product_full--WYSIWYG_small' => 0,
        'lightbox2--product_list--cart' => 0,
        'lightbox2--product_list--Content_Thumb' => 0,
        'lightbox2--product_list--fp_full' => 0,
        'lightbox2--product_list--fp_slideshow' => 0,
        'lightbox2--product_list--LB_Content_thumb' => 0,
        'lightbox2--product_list--newsletter' => 0,
        'lightbox2--product_list--original' => 0,
        'lightbox2--product_list--product' => 0,
        'lightbox2--product_list--product_full' => 0,
        'lightbox2--product_list--product_list' => 0,
        'lightbox2--product_list--uc_category' => 0,
        'lightbox2--product_list--uc_thumbnail' => 0,
        'lightbox2--product_list--WYSIWYG_full' => 0,
        'lightbox2--product_list--WYSIWYG_large' => 0,
        'lightbox2--product_list--WYSIWYG_medium' => 0,
        'lightbox2--product_list--WYSIWYG_small' => 0,
        'lightbox2--uc_category--cart' => 0,
        'lightbox2--uc_category--Content_Thumb' => 0,
        'lightbox2--uc_category--fp_full' => 0,
        'lightbox2--uc_category--fp_slideshow' => 0,
        'lightbox2--uc_category--LB_Content_thumb' => 0,
        'lightbox2--uc_category--newsletter' => 0,
        'lightbox2--uc_category--original' => 0,
        'lightbox2--uc_category--product' => 0,
        'lightbox2--uc_category--product_full' => 0,
        'lightbox2--uc_category--product_list' => 0,
        'lightbox2--uc_category--uc_category' => 0,
        'lightbox2--uc_category--uc_thumbnail' => 0,
        'lightbox2--uc_category--WYSIWYG_full' => 0,
        'lightbox2--uc_category--WYSIWYG_large' => 0,
        'lightbox2--uc_category--WYSIWYG_medium' => 0,
        'lightbox2--uc_category--WYSIWYG_small' => 0,
        'lightbox2--uc_thumbnail--cart' => 0,
        'lightbox2--uc_thumbnail--Content_Thumb' => 0,
        'lightbox2--uc_thumbnail--fp_full' => 0,
        'lightbox2--uc_thumbnail--fp_slideshow' => 0,
        'lightbox2--uc_thumbnail--LB_Content_thumb' => 0,
        'lightbox2--uc_thumbnail--newsletter' => 0,
        'lightbox2--uc_thumbnail--original' => 0,
        'lightbox2--uc_thumbnail--product' => 0,
        'lightbox2--uc_thumbnail--product_full' => 0,
        'lightbox2--uc_thumbnail--product_list' => 0,
        'lightbox2--uc_thumbnail--uc_category' => 0,
        'lightbox2--uc_thumbnail--uc_thumbnail' => 0,
        'lightbox2--uc_thumbnail--WYSIWYG_full' => 0,
        'lightbox2--uc_thumbnail--WYSIWYG_large' => 0,
        'lightbox2--uc_thumbnail--WYSIWYG_medium' => 0,
        'lightbox2--uc_thumbnail--WYSIWYG_small' => 0,
        'lightbox2--WYSIWYG_full--cart' => 0,
        'lightbox2--WYSIWYG_full--Content_Thumb' => 0,
        'lightbox2--WYSIWYG_full--fp_full' => 0,
        'lightbox2--WYSIWYG_full--fp_slideshow' => 0,
        'lightbox2--WYSIWYG_full--LB_Content_thumb' => 0,
        'lightbox2--WYSIWYG_full--newsletter' => 0,
        'lightbox2--WYSIWYG_full--original' => 0,
        'lightbox2--WYSIWYG_full--product' => 0,
        'lightbox2--WYSIWYG_full--product_full' => 0,
        'lightbox2--WYSIWYG_full--product_list' => 0,
        'lightbox2--WYSIWYG_full--uc_category' => 0,
        'lightbox2--WYSIWYG_full--uc_thumbnail' => 0,
        'lightbox2--WYSIWYG_full--WYSIWYG_full' => 0,
        'lightbox2--WYSIWYG_full--WYSIWYG_large' => 0,
        'lightbox2--WYSIWYG_full--WYSIWYG_medium' => 0,
        'lightbox2--WYSIWYG_full--WYSIWYG_small' => 0,
        'lightbox2--WYSIWYG_large--cart' => 0,
        'lightbox2--WYSIWYG_large--Content_Thumb' => 0,
        'lightbox2--WYSIWYG_large--fp_full' => 0,
        'lightbox2--WYSIWYG_large--fp_slideshow' => 0,
        'lightbox2--WYSIWYG_large--LB_Content_thumb' => 0,
        'lightbox2--WYSIWYG_large--newsletter' => 0,
        'lightbox2--WYSIWYG_large--original' => 0,
        'lightbox2--WYSIWYG_large--product' => 0,
        'lightbox2--WYSIWYG_large--product_full' => 0,
        'lightbox2--WYSIWYG_large--product_list' => 0,
        'lightbox2--WYSIWYG_large--uc_category' => 0,
        'lightbox2--WYSIWYG_large--uc_thumbnail' => 0,
        'lightbox2--WYSIWYG_large--WYSIWYG_full' => 0,
        'lightbox2--WYSIWYG_large--WYSIWYG_large' => 0,
        'lightbox2--WYSIWYG_large--WYSIWYG_medium' => 0,
        'lightbox2--WYSIWYG_large--WYSIWYG_small' => 0,
        'lightbox2--WYSIWYG_medium--cart' => 0,
        'lightbox2--WYSIWYG_medium--Content_Thumb' => 0,
        'lightbox2--WYSIWYG_medium--fp_full' => 0,
        'lightbox2--WYSIWYG_medium--fp_slideshow' => 0,
        'lightbox2--WYSIWYG_medium--LB_Content_thumb' => 0,
        'lightbox2--WYSIWYG_medium--newsletter' => 0,
        'lightbox2--WYSIWYG_medium--original' => 0,
        'lightbox2--WYSIWYG_medium--product' => 0,
        'lightbox2--WYSIWYG_medium--product_full' => 0,
        'lightbox2--WYSIWYG_medium--product_list' => 0,
        'lightbox2--WYSIWYG_medium--uc_category' => 0,
        'lightbox2--WYSIWYG_medium--uc_thumbnail' => 0,
        'lightbox2--WYSIWYG_medium--WYSIWYG_full' => 0,
        'lightbox2--WYSIWYG_medium--WYSIWYG_large' => 0,
        'lightbox2--WYSIWYG_medium--WYSIWYG_medium' => 0,
        'lightbox2--WYSIWYG_medium--WYSIWYG_small' => 0,
        'lightbox2--WYSIWYG_small--cart' => 0,
        'lightbox2--WYSIWYG_small--Content_Thumb' => 0,
        'lightbox2--WYSIWYG_small--fp_full' => 0,
        'lightbox2--WYSIWYG_small--fp_slideshow' => 0,
        'lightbox2--WYSIWYG_small--LB_Content_thumb' => 0,
        'lightbox2--WYSIWYG_small--newsletter' => 0,
        'lightbox2--WYSIWYG_small--original' => 0,
        'lightbox2--WYSIWYG_small--product' => 0,
        'lightbox2--WYSIWYG_small--product_full' => 0,
        'lightbox2--WYSIWYG_small--product_list' => 0,
        'lightbox2--WYSIWYG_small--uc_category' => 0,
        'lightbox2--WYSIWYG_small--uc_thumbnail' => 0,
        'lightbox2--WYSIWYG_small--WYSIWYG_full' => 0,
        'lightbox2--WYSIWYG_small--WYSIWYG_large' => 0,
        'lightbox2--WYSIWYG_small--WYSIWYG_medium' => 0,
        'lightbox2--WYSIWYG_small--WYSIWYG_small' => 0,
        'imagecache_newsletter' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_category' => 0,
        'imagecache_uc_thumbnail' => 0,
        'imagecache_WYSIWYG_full' => 0,
        'imagecache_WYSIWYG_large' => 0,
        'imagecache_WYSIWYG_medium' => 0,
        'imagecache_WYSIWYG_small' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Image',
      'weight' => '10',
      'description' => 'These images will show up in the sidebar of posts.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_wysiwyg_images
  $fields['rsr_story-field_wysiwyg_images'] = array(
    'field_name' => 'field_wysiwyg_images',
    'type_name' => 'rsr_story',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
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
      'sticky' => array(
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
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'wysiwyg_images/rsr_story',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '10M',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'imce' => 'imce',
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_imce_mode' => '1',
      'filefield_source_autocomplete' => '0',
      'insert' => 1,
      'insert_absolute' => 0,
      'insert_styles' => array(
        'imagecache_WYSIWYG_large' => 'imagecache_WYSIWYG_large',
        'imagecache_WYSIWYG_medium' => 'imagecache_WYSIWYG_medium',
        'imagecache_WYSIWYG_small' => 'imagecache_WYSIWYG_small',
        'auto' => 0,
        'link' => 0,
        'icon_link' => 0,
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_Content_Thumb' => 0,
        'imagecache_fp_full' => 0,
        'imagecache_fp_slideshow' => 0,
        'imagecache_LB_Content_thumb' => 0,
        'lightbox2--cart--cart' => 0,
        'lightbox2--cart--Content_Thumb' => 0,
        'lightbox2--cart--fp_full' => 0,
        'lightbox2--cart--fp_slideshow' => 0,
        'lightbox2--cart--LB_Content_thumb' => 0,
        'lightbox2--cart--newsletter' => 0,
        'lightbox2--cart--original' => 0,
        'lightbox2--cart--product' => 0,
        'lightbox2--cart--product_full' => 0,
        'lightbox2--cart--product_list' => 0,
        'lightbox2--cart--uc_category' => 0,
        'lightbox2--cart--uc_thumbnail' => 0,
        'lightbox2--cart--WYSIWYG_full' => 0,
        'lightbox2--cart--WYSIWYG_large' => 0,
        'lightbox2--cart--WYSIWYG_medium' => 0,
        'lightbox2--cart--WYSIWYG_small' => 0,
        'lightbox2--Content_Thumb--cart' => 0,
        'lightbox2--Content_Thumb--Content_Thumb' => 0,
        'lightbox2--Content_Thumb--fp_full' => 0,
        'lightbox2--Content_Thumb--fp_slideshow' => 0,
        'lightbox2--Content_Thumb--LB_Content_thumb' => 0,
        'lightbox2--Content_Thumb--newsletter' => 0,
        'lightbox2--Content_Thumb--original' => 0,
        'lightbox2--Content_Thumb--product' => 0,
        'lightbox2--Content_Thumb--product_full' => 0,
        'lightbox2--Content_Thumb--product_list' => 0,
        'lightbox2--Content_Thumb--uc_category' => 0,
        'lightbox2--Content_Thumb--uc_thumbnail' => 0,
        'lightbox2--Content_Thumb--WYSIWYG_full' => 0,
        'lightbox2--Content_Thumb--WYSIWYG_large' => 0,
        'lightbox2--Content_Thumb--WYSIWYG_medium' => 0,
        'lightbox2--Content_Thumb--WYSIWYG_small' => 0,
        'lightbox2--fp_full--cart' => 0,
        'lightbox2--fp_full--Content_Thumb' => 0,
        'lightbox2--fp_full--fp_full' => 0,
        'lightbox2--fp_full--fp_slideshow' => 0,
        'lightbox2--fp_full--LB_Content_thumb' => 0,
        'lightbox2--fp_full--newsletter' => 0,
        'lightbox2--fp_full--original' => 0,
        'lightbox2--fp_full--product' => 0,
        'lightbox2--fp_full--product_full' => 0,
        'lightbox2--fp_full--product_list' => 0,
        'lightbox2--fp_full--uc_category' => 0,
        'lightbox2--fp_full--uc_thumbnail' => 0,
        'lightbox2--fp_full--WYSIWYG_full' => 0,
        'lightbox2--fp_full--WYSIWYG_large' => 0,
        'lightbox2--fp_full--WYSIWYG_medium' => 0,
        'lightbox2--fp_full--WYSIWYG_small' => 0,
        'lightbox2--fp_slideshow--cart' => 0,
        'lightbox2--fp_slideshow--Content_Thumb' => 0,
        'lightbox2--fp_slideshow--fp_full' => 0,
        'lightbox2--fp_slideshow--fp_slideshow' => 0,
        'lightbox2--fp_slideshow--LB_Content_thumb' => 0,
        'lightbox2--fp_slideshow--newsletter' => 0,
        'lightbox2--fp_slideshow--original' => 0,
        'lightbox2--fp_slideshow--product' => 0,
        'lightbox2--fp_slideshow--product_full' => 0,
        'lightbox2--fp_slideshow--product_list' => 0,
        'lightbox2--fp_slideshow--uc_category' => 0,
        'lightbox2--fp_slideshow--uc_thumbnail' => 0,
        'lightbox2--fp_slideshow--WYSIWYG_full' => 0,
        'lightbox2--fp_slideshow--WYSIWYG_large' => 0,
        'lightbox2--fp_slideshow--WYSIWYG_medium' => 0,
        'lightbox2--fp_slideshow--WYSIWYG_small' => 0,
        'lightbox2--LB_Content_thumb--cart' => 0,
        'lightbox2--LB_Content_thumb--Content_Thumb' => 0,
        'lightbox2--LB_Content_thumb--fp_full' => 0,
        'lightbox2--LB_Content_thumb--fp_slideshow' => 0,
        'lightbox2--LB_Content_thumb--LB_Content_thumb' => 0,
        'lightbox2--LB_Content_thumb--newsletter' => 0,
        'lightbox2--LB_Content_thumb--original' => 0,
        'lightbox2--LB_Content_thumb--product' => 0,
        'lightbox2--LB_Content_thumb--product_full' => 0,
        'lightbox2--LB_Content_thumb--product_list' => 0,
        'lightbox2--LB_Content_thumb--uc_category' => 0,
        'lightbox2--LB_Content_thumb--uc_thumbnail' => 0,
        'lightbox2--LB_Content_thumb--WYSIWYG_full' => 0,
        'lightbox2--LB_Content_thumb--WYSIWYG_large' => 0,
        'lightbox2--LB_Content_thumb--WYSIWYG_medium' => 0,
        'lightbox2--LB_Content_thumb--WYSIWYG_small' => 0,
        'lightbox2--link--cart' => 0,
        'lightbox2--link--Content_Thumb' => 0,
        'lightbox2--link--fp_full' => 0,
        'lightbox2--link--fp_slideshow' => 0,
        'lightbox2--link--LB_Content_thumb' => 0,
        'lightbox2--link--newsletter' => 0,
        'lightbox2--link--product' => 0,
        'lightbox2--link--product_full' => 0,
        'lightbox2--link--product_list' => 0,
        'lightbox2--link--uc_category' => 0,
        'lightbox2--link--uc_thumbnail' => 0,
        'lightbox2--link--WYSIWYG_full' => 0,
        'lightbox2--link--WYSIWYG_large' => 0,
        'lightbox2--link--WYSIWYG_medium' => 0,
        'lightbox2--link--WYSIWYG_small' => 0,
        'lightbox2--newsletter--cart' => 0,
        'lightbox2--newsletter--Content_Thumb' => 0,
        'lightbox2--newsletter--fp_full' => 0,
        'lightbox2--newsletter--fp_slideshow' => 0,
        'lightbox2--newsletter--LB_Content_thumb' => 0,
        'lightbox2--newsletter--newsletter' => 0,
        'lightbox2--newsletter--original' => 0,
        'lightbox2--newsletter--product' => 0,
        'lightbox2--newsletter--product_full' => 0,
        'lightbox2--newsletter--product_list' => 0,
        'lightbox2--newsletter--uc_category' => 0,
        'lightbox2--newsletter--uc_thumbnail' => 0,
        'lightbox2--newsletter--WYSIWYG_full' => 0,
        'lightbox2--newsletter--WYSIWYG_large' => 0,
        'lightbox2--newsletter--WYSIWYG_medium' => 0,
        'lightbox2--newsletter--WYSIWYG_small' => 0,
        'lightbox2--original--cart' => 0,
        'lightbox2--original--Content_Thumb' => 0,
        'lightbox2--original--fp_full' => 0,
        'lightbox2--original--fp_slideshow' => 0,
        'lightbox2--original--LB_Content_thumb' => 0,
        'lightbox2--original--newsletter' => 0,
        'lightbox2--original--product' => 0,
        'lightbox2--original--product_full' => 0,
        'lightbox2--original--product_list' => 0,
        'lightbox2--original--uc_category' => 0,
        'lightbox2--original--uc_thumbnail' => 0,
        'lightbox2--original--WYSIWYG_full' => 0,
        'lightbox2--original--WYSIWYG_large' => 0,
        'lightbox2--original--WYSIWYG_medium' => 0,
        'lightbox2--original--WYSIWYG_small' => 0,
        'lightbox2--product--cart' => 0,
        'lightbox2--product--Content_Thumb' => 0,
        'lightbox2--product--fp_full' => 0,
        'lightbox2--product--fp_slideshow' => 0,
        'lightbox2--product--LB_Content_thumb' => 0,
        'lightbox2--product--newsletter' => 0,
        'lightbox2--product--original' => 0,
        'lightbox2--product--product' => 0,
        'lightbox2--product--product_full' => 0,
        'lightbox2--product--product_list' => 0,
        'lightbox2--product--uc_category' => 0,
        'lightbox2--product--uc_thumbnail' => 0,
        'lightbox2--product--WYSIWYG_full' => 0,
        'lightbox2--product--WYSIWYG_large' => 0,
        'lightbox2--product--WYSIWYG_medium' => 0,
        'lightbox2--product--WYSIWYG_small' => 0,
        'lightbox2--product_full--cart' => 0,
        'lightbox2--product_full--Content_Thumb' => 0,
        'lightbox2--product_full--fp_full' => 0,
        'lightbox2--product_full--fp_slideshow' => 0,
        'lightbox2--product_full--LB_Content_thumb' => 0,
        'lightbox2--product_full--newsletter' => 0,
        'lightbox2--product_full--original' => 0,
        'lightbox2--product_full--product' => 0,
        'lightbox2--product_full--product_full' => 0,
        'lightbox2--product_full--product_list' => 0,
        'lightbox2--product_full--uc_category' => 0,
        'lightbox2--product_full--uc_thumbnail' => 0,
        'lightbox2--product_full--WYSIWYG_full' => 0,
        'lightbox2--product_full--WYSIWYG_large' => 0,
        'lightbox2--product_full--WYSIWYG_medium' => 0,
        'lightbox2--product_full--WYSIWYG_small' => 0,
        'lightbox2--product_list--cart' => 0,
        'lightbox2--product_list--Content_Thumb' => 0,
        'lightbox2--product_list--fp_full' => 0,
        'lightbox2--product_list--fp_slideshow' => 0,
        'lightbox2--product_list--LB_Content_thumb' => 0,
        'lightbox2--product_list--newsletter' => 0,
        'lightbox2--product_list--original' => 0,
        'lightbox2--product_list--product' => 0,
        'lightbox2--product_list--product_full' => 0,
        'lightbox2--product_list--product_list' => 0,
        'lightbox2--product_list--uc_category' => 0,
        'lightbox2--product_list--uc_thumbnail' => 0,
        'lightbox2--product_list--WYSIWYG_full' => 0,
        'lightbox2--product_list--WYSIWYG_large' => 0,
        'lightbox2--product_list--WYSIWYG_medium' => 0,
        'lightbox2--product_list--WYSIWYG_small' => 0,
        'lightbox2--uc_category--cart' => 0,
        'lightbox2--uc_category--Content_Thumb' => 0,
        'lightbox2--uc_category--fp_full' => 0,
        'lightbox2--uc_category--fp_slideshow' => 0,
        'lightbox2--uc_category--LB_Content_thumb' => 0,
        'lightbox2--uc_category--newsletter' => 0,
        'lightbox2--uc_category--original' => 0,
        'lightbox2--uc_category--product' => 0,
        'lightbox2--uc_category--product_full' => 0,
        'lightbox2--uc_category--product_list' => 0,
        'lightbox2--uc_category--uc_category' => 0,
        'lightbox2--uc_category--uc_thumbnail' => 0,
        'lightbox2--uc_category--WYSIWYG_full' => 0,
        'lightbox2--uc_category--WYSIWYG_large' => 0,
        'lightbox2--uc_category--WYSIWYG_medium' => 0,
        'lightbox2--uc_category--WYSIWYG_small' => 0,
        'lightbox2--uc_thumbnail--cart' => 0,
        'lightbox2--uc_thumbnail--Content_Thumb' => 0,
        'lightbox2--uc_thumbnail--fp_full' => 0,
        'lightbox2--uc_thumbnail--fp_slideshow' => 0,
        'lightbox2--uc_thumbnail--LB_Content_thumb' => 0,
        'lightbox2--uc_thumbnail--newsletter' => 0,
        'lightbox2--uc_thumbnail--original' => 0,
        'lightbox2--uc_thumbnail--product' => 0,
        'lightbox2--uc_thumbnail--product_full' => 0,
        'lightbox2--uc_thumbnail--product_list' => 0,
        'lightbox2--uc_thumbnail--uc_category' => 0,
        'lightbox2--uc_thumbnail--uc_thumbnail' => 0,
        'lightbox2--uc_thumbnail--WYSIWYG_full' => 0,
        'lightbox2--uc_thumbnail--WYSIWYG_large' => 0,
        'lightbox2--uc_thumbnail--WYSIWYG_medium' => 0,
        'lightbox2--uc_thumbnail--WYSIWYG_small' => 0,
        'lightbox2--WYSIWYG_full--cart' => 0,
        'lightbox2--WYSIWYG_full--Content_Thumb' => 0,
        'lightbox2--WYSIWYG_full--fp_full' => 0,
        'lightbox2--WYSIWYG_full--fp_slideshow' => 0,
        'lightbox2--WYSIWYG_full--LB_Content_thumb' => 0,
        'lightbox2--WYSIWYG_full--newsletter' => 0,
        'lightbox2--WYSIWYG_full--original' => 0,
        'lightbox2--WYSIWYG_full--product' => 0,
        'lightbox2--WYSIWYG_full--product_full' => 0,
        'lightbox2--WYSIWYG_full--product_list' => 0,
        'lightbox2--WYSIWYG_full--uc_category' => 0,
        'lightbox2--WYSIWYG_full--uc_thumbnail' => 0,
        'lightbox2--WYSIWYG_full--WYSIWYG_full' => 0,
        'lightbox2--WYSIWYG_full--WYSIWYG_large' => 0,
        'lightbox2--WYSIWYG_full--WYSIWYG_medium' => 0,
        'lightbox2--WYSIWYG_full--WYSIWYG_small' => 0,
        'lightbox2--WYSIWYG_large--cart' => 0,
        'lightbox2--WYSIWYG_large--Content_Thumb' => 0,
        'lightbox2--WYSIWYG_large--fp_full' => 0,
        'lightbox2--WYSIWYG_large--fp_slideshow' => 0,
        'lightbox2--WYSIWYG_large--LB_Content_thumb' => 0,
        'lightbox2--WYSIWYG_large--newsletter' => 0,
        'lightbox2--WYSIWYG_large--original' => 0,
        'lightbox2--WYSIWYG_large--product' => 0,
        'lightbox2--WYSIWYG_large--product_full' => 0,
        'lightbox2--WYSIWYG_large--product_list' => 0,
        'lightbox2--WYSIWYG_large--uc_category' => 0,
        'lightbox2--WYSIWYG_large--uc_thumbnail' => 0,
        'lightbox2--WYSIWYG_large--WYSIWYG_full' => 0,
        'lightbox2--WYSIWYG_large--WYSIWYG_large' => 0,
        'lightbox2--WYSIWYG_large--WYSIWYG_medium' => 0,
        'lightbox2--WYSIWYG_large--WYSIWYG_small' => 0,
        'lightbox2--WYSIWYG_medium--cart' => 0,
        'lightbox2--WYSIWYG_medium--Content_Thumb' => 0,
        'lightbox2--WYSIWYG_medium--fp_full' => 0,
        'lightbox2--WYSIWYG_medium--fp_slideshow' => 0,
        'lightbox2--WYSIWYG_medium--LB_Content_thumb' => 0,
        'lightbox2--WYSIWYG_medium--newsletter' => 0,
        'lightbox2--WYSIWYG_medium--original' => 0,
        'lightbox2--WYSIWYG_medium--product' => 0,
        'lightbox2--WYSIWYG_medium--product_full' => 0,
        'lightbox2--WYSIWYG_medium--product_list' => 0,
        'lightbox2--WYSIWYG_medium--uc_category' => 0,
        'lightbox2--WYSIWYG_medium--uc_thumbnail' => 0,
        'lightbox2--WYSIWYG_medium--WYSIWYG_full' => 0,
        'lightbox2--WYSIWYG_medium--WYSIWYG_large' => 0,
        'lightbox2--WYSIWYG_medium--WYSIWYG_medium' => 0,
        'lightbox2--WYSIWYG_medium--WYSIWYG_small' => 0,
        'lightbox2--WYSIWYG_small--cart' => 0,
        'lightbox2--WYSIWYG_small--Content_Thumb' => 0,
        'lightbox2--WYSIWYG_small--fp_full' => 0,
        'lightbox2--WYSIWYG_small--fp_slideshow' => 0,
        'lightbox2--WYSIWYG_small--LB_Content_thumb' => 0,
        'lightbox2--WYSIWYG_small--newsletter' => 0,
        'lightbox2--WYSIWYG_small--original' => 0,
        'lightbox2--WYSIWYG_small--product' => 0,
        'lightbox2--WYSIWYG_small--product_full' => 0,
        'lightbox2--WYSIWYG_small--product_list' => 0,
        'lightbox2--WYSIWYG_small--uc_category' => 0,
        'lightbox2--WYSIWYG_small--uc_thumbnail' => 0,
        'lightbox2--WYSIWYG_small--WYSIWYG_full' => 0,
        'lightbox2--WYSIWYG_small--WYSIWYG_large' => 0,
        'lightbox2--WYSIWYG_small--WYSIWYG_medium' => 0,
        'lightbox2--WYSIWYG_small--WYSIWYG_small' => 0,
        'imagecache_newsletter' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_category' => 0,
        'imagecache_uc_thumbnail' => 0,
        'imagecache_WYSIWYG_full' => 0,
      ),
      'insert_default' => 'imagecache_WYSIWYG_small',
      'insert_class' => 'wysiwyg_img',
      'insert_width' => '',
      'label' => 'WYSIWYG Images',
      'weight' => '12',
      'description' => 'Please note, images can be added into \'fields\', which appear on the left had side of the article or into the content body, when inserting into the content body, use one of the \'WYSIWYG_xxx\' sizes, each image should also automatically be assigned into a lightbox, which means clicking the image will bring it up in a large pop-up box.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Anonymous contact information');
  t('Image');
  t('WYSIWYG Images');

  return $fields;
}