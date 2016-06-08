<?php
/**
 * @file
 * Template for Badcamp two column layout with a narrow
 * left column for an image or the like.
 */
?>

<div class="region-content">
  <div class="row">
    <?php if ($content['image']) : ?>
      <div class="medium-3 columns profile-image">
        <?php print $content['image']; ?>
      </div>
    <?php endif; ?>

    <?php if ($content['main']) : ?>
      <div class="medium-9 columns user-profile">
        <?php print $content['main']; ?>
      </div>
    <?php endif; ?>

  </div>
</div>


