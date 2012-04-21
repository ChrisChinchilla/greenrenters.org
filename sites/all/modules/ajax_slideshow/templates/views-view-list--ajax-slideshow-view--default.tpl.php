<?php
// $Id: views-view-list--ajax-slideshow-view--default.tpl.php,v 1.1 2010/08/11 20:43:52 udig Exp $
/**
 * @file views-view-list.tpl.php
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<div class="item-list">
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <<?php print $options['type']; ?>>
    <?php foreach ($rows as $id => $row): ?>
      <?php $row = variable_get('ajax_slideshow_enum_tabs', false)? $id+1 : $row;?> 
      <li class="<?php print $classes[$id]; ?>"><a class="as-tab" href="<?php print $view->result[$id]->nid; ?>"><?php print $row; ?></a></li>
    <?php endforeach; ?>
  </<?php print $options['type']; ?>>
</div>