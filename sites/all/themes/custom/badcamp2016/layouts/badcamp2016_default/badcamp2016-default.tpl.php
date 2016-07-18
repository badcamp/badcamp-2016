<?php
/**
 * @file
 * Template for Badcamp single column layout.
 */
?>

<?php !empty($css_id) ? print '<div id="' . $css_id . '">' : ''; ?>

<div class="badcamp-default">
  <?php if ($content['title']) : ?>
    <div class="row columns region-title">
      <?php print $content['title']; ?>
    </div>
  <?php endif; ?>

  <div class="row columns">
    <div class="region-default-content">
      <?php print $content['content']; ?>
    </div>
  </div>

  <?php if($content['sponsors']) : ?>
    <div class="row columns region-sponsors">
      <?php print $content['sponsors']; ?>
    </div>
  <?php endif; ?>
</div>
<?php !empty($css_id) ? print '</div>' : ''; ?>
