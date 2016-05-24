<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="row <?php print $block_grid_class; ?>">
<?php foreach ($rows as $id => $row): ?>
  <?php if (isset($classes_array[$id])) : ?>
    <div<?php print ' class="' . $classes_array[$id] . ' column"'; ?>>
  <?php else : ?>
    <div class="column">
  <?php endif; ?>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
</div>
