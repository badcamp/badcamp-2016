<?php
/**
 * @file
 * Template for Badcamp two column layout with a 3-9 grid layout.
 */
?>

<div class="region-content">
  <div class="row">
    <?php if ($content['header']) : ?>
      <div class="medium-6 medium-push-3 columns progress-bar">
        <?php print $content['header']; ?>
      </div>
    <?php endif; ?>
  </div>
  <div class="row">
    <?php if ($content['main']) : ?>
      <div class="columns sponsorship-levels">
        <?php print $content['main']; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
