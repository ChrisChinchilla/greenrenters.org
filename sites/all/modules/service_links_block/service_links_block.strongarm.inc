<?php

/**
 * Implementation of hook_strongarm().
 */
function service_links_block_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_append_to_url';
  $strongarm->value = '';
  $export['service_links_append_to_url'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_block_not_node_front';
  $strongarm->value = 0;
  $export['service_links_block_not_node_front'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_block_not_node_style';
  $strongarm->value = '3';
  $export['service_links_block_not_node_style'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_block_style';
  $strongarm->value = '2';
  $export['service_links_block_style'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_category_by_voc_5';
  $strongarm->value = array(
    882 => '882',
    879 => '879',
    806 => '806',
    807 => '807',
    947 => '947',
  );
  $export['service_links_category_by_voc_5'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_category_types';
  $strongarm->value = array(
    882 => '882',
    879 => '879',
    806 => '806',
    807 => '807',
    947 => '947',
  );
  $export['service_links_category_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_category_vocs';
  $strongarm->value = array(
    5 => 5,
  );
  $export['service_links_category_vocs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_check_icons';
  $strongarm->value = 0;
  $export['service_links_check_icons'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_dsb_related';
  $strongarm->value = 'yes';
  $export['service_links_dsb_related'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_dsb_style';
  $strongarm->value = 'yes';
  $export['service_links_dsb_style'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_dsb_type';
  $strongarm->value = 'DiggCompact';
  $export['service_links_dsb_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_fl_action';
  $strongarm->value = 'like';
  $export['service_links_fl_action'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_fl_colorscheme';
  $strongarm->value = 'light';
  $export['service_links_fl_colorscheme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_fl_font';
  $strongarm->value = '';
  $export['service_links_fl_font'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_fl_layout';
  $strongarm->value = 'button_count';
  $export['service_links_fl_layout'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_fl_locale';
  $strongarm->value = '';
  $export['service_links_fl_locale'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_fl_show_faces';
  $strongarm->value = 'false';
  $export['service_links_fl_show_faces'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_fl_width';
  $strongarm->value = '100';
  $export['service_links_fl_width'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_fs_fix_count';
  $strongarm->value = 0;
  $export['service_links_fs_fix_count'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_fs_text';
  $strongarm->value = 'Share on Facebook';
  $export['service_links_fs_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_fs_type';
  $strongarm->value = 'button_count';
  $export['service_links_fs_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_gpo_counter';
  $strongarm->value = 1;
  $export['service_links_gpo_counter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_gpo_type';
  $strongarm->value = '';
  $export['service_links_gpo_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_hide_for_author';
  $strongarm->value = 0;
  $export['service_links_hide_for_author'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_hide_if_unpublished';
  $strongarm->value = 0;
  $export['service_links_hide_if_unpublished'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_in_links';
  $strongarm->value = '3';
  $export['service_links_in_links'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_in_node';
  $strongarm->value = '3';
  $export['service_links_in_node'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_label_in_node';
  $strongarm->value = 'Bookmark/Search this post with';
  $export['service_links_label_in_node'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_lsb_countmode';
  $strongarm->value = 'right';
  $export['service_links_lsb_countmode'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_new_window';
  $strongarm->value = '0';
  $export['service_links_new_window'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_node_types';
  $strongarm->value = array(
    'ad' => 'ad',
    'campaign' => 'campaign',
    'competition' => 'competition',
    'ecochallenge' => 'ecochallenge',
    'ec_blog' => 'ec_blog',
    'ec_event' => 'ec_event',
    'ec_group' => 'ec_group',
    'event' => 'event',
    'feed' => 'feed',
    'feed_item' => 'feed_item',
    'modalpage' => 'modalpage',
    'news' => 'news',
    'opinion' => 'opinion',
    'page' => 'page',
    'panel' => 'panel',
    'product' => 'product',
    'project' => 'project',
    'resource' => 'resource',
    'service' => 'service',
    'story' => 'story',
    'tutorial' => 'tutorial',
    'webform' => 'webform',
    'workshop' => 'workshop',
  );
  $export['service_links_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_override_title';
  $strongarm->value = '0';
  $export['service_links_override_title'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_override_title_text';
  $strongarm->value = '<title>';
  $export['service_links_override_title_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_page_match_for_node';
  $strongarm->value = '';
  $export['service_links_page_match_for_node'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_path_icons';
  $strongarm->value = 'sites/all/modules/service_links/images';
  $export['service_links_path_icons'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_pb_countlayout';
  $strongarm->value = 'horizontal';
  $export['service_links_pb_countlayout'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_pb_descriptiontoken';
  $strongarm->value = '[title] - [node-url]';
  $export['service_links_pb_descriptiontoken'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_pb_mediatoken';
  $strongarm->value = '[field_image-filefield-fileurl]';
  $export['service_links_pb_mediatoken'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_short_links_use';
  $strongarm->value = '2';
  $export['service_links_short_links_use'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_show';
  $strongarm->value = array(
    'delicious' => 0,
    'digg' => 0,
    'stumbleupon' => 0,
    'twitter' => 0,
    'pingthis' => 0,
    'reddit' => 0,
    'slashdot' => 0,
    'newsvine' => 0,
    'furl' => 0,
    'facebook' => 0,
    'myspace' => 0,
    'google' => 0,
    'yahoo' => 0,
    'linkedin' => 0,
    'technorati' => 0,
    'technorati_favorite' => 0,
    'icerocket' => 0,
    'misterwong' => 0,
    'mixx' => 0,
    'box' => 0,
    'blinklist' => 0,
    'identica' => 0,
    'newskicks' => 0,
    'diigo' => 0,
    'facebook_share' => 0,
    'twitter_widget' => 1,
    'facebook_like' => 1,
    'digg_smart_button' => 0,
    'google_plus_one' => 1,
    'linkedin_share_button' => 1,
    'pinterest_button' => 1,
  );
  $export['service_links_show'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_style';
  $strongarm->value = '3';
  $export['service_links_style'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_tw_data_count';
  $strongarm->value = 'horizontal';
  $export['service_links_tw_data_count'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_tw_data_via';
  $strongarm->value = 'greenrenters';
  $export['service_links_tw_data_via'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_visibility_for_node';
  $strongarm->value = '0';
  $export['service_links_visibility_for_node'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_weight';
  $strongarm->value = array(
    'delicious' => '-93',
    'digg' => '-91',
    'stumbleupon' => '-74',
    'twitter' => '-71',
    'pingthis' => '-77',
    'reddit' => '-76',
    'slashdot' => '-75',
    'newsvine' => '-78',
    'furl' => '-87',
    'facebook' => '-89',
    'myspace' => '-80',
    'google' => '-86',
    'yahoo' => '-70',
    'linkedin' => '-83',
    'technorati' => '-72',
    'technorati_favorite' => '-73',
    'icerocket' => '-85',
    'misterwong' => '-82',
    'mixx' => '-81',
    'box' => '-94',
    'blinklist' => '-95',
    'identica' => '-84',
    'newskicks' => '-79',
    'diigo' => '-90',
    'facebook_share' => '-88',
    'twitter_widget' => '-99',
    'facebook_like' => '-100',
    'digg_smart_button' => '-92',
    'google_plus_one' => '-98',
    'linkedin_share_button' => '-96',
    'pinterest_button' => '-97',
  );
  $export['service_links_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_weight_in_node';
  $strongarm->value = '10';
  $export['service_links_weight_in_node'] = $strongarm;

  return $export;
}
