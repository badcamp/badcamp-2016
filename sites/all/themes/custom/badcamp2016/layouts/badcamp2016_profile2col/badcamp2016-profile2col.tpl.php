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
    <?php if ($content['image']) : ?>
      <div class="medium-3 columns profile-image">
        <?php print $content['image']; ?>
      </div>
    <?php endif; ?>

    <div class="medium-9 columns">
      <div class="row">
        <div class="medium-6 columns"><?php print $content['name1']; ?></div>
        <div class="medium-6 columns"><?php print render($content['name2']); ?></div>
      </div>

      <div class="row">
        <div class="columns"><?php print $content['bio']; ?></div>
      </div>

      <div class="row">
        <div class="medium-6 columns"><?php print $content['social_medial_1']; ?></div>
        <div class="medium-6 columns"><?php print $content['social_medial_2']; ?></div>
      </div>

      <div class="row">
        <div class="columns"><?php print $content['interests']; ?></div>
      </div>
      <div class="row column"><?php print $content['main']; ?></div>
    </div>
  </div>
</div>
