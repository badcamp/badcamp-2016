<?php
/**
 * @file
 * Template for Badcamp two column layout with a 3-9 grid layout.
 */
?>

<div class="region-content">
  <div class="row">
    <?php if ($content['column_left']) : ?>
      <div class="large-6  columns">
        <?php print $content['column_left']; ?>
      </div>
    <?php endif; ?>

    <?php if ($content['column_right']) : ?>
      <div class="large-6 columns">
        <?php print $content['column_right']; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
