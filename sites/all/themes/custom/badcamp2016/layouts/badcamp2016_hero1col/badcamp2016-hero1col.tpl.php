<?php
/**
 * @file
 * Template for Badcamp hero single column layout.
 */
?>
<?php if($content['hero']) : ?>
  <div <?php print $hero_attributes; ?>>
    <div class="row column">
      <?php print $content['hero']; ?>
    </div>
  </div>
<?php endif; ?>
<div class="region-content <?php print $opaque; ?>">
  <div class="row columns">
    <?php print $content['content']; ?>
  </div>
</div>
