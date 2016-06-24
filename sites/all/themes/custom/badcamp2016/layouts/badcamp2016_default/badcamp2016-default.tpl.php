<?php
/**
 * @file
 * Template for Badcamp single column layout.
 */
?>

<?php !empty($css_id) ? print '<div id="' . $css_id . '">' : ''; ?>


<div class="row">
  <div class="row columns">
    <?php if ($content['title']) : ?>
      <div class="columns region-title">
        <?php print $content['title']; ?>
      </div>
    <?php endif; ?>
  </div>
</div>


<div class="region-default-content row">
  <div class="row columns">
    <?php print $content['content']; ?>
  </div>
</div>

<?php !empty($css_id) ? print '</div>' : ''; ?>
