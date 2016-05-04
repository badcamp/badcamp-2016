<?php
/**
 * @file
 * Template for a custom 1 column panel layout.
 *
 * This template provides a very simple "one column" panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   $content['middle']: The only panel in the layout.
 */
?>

<?php !empty($css_id) ? print '<div id="' . $css_id . '">' : ''; ?>
<?php if ($content['hud']): ?>
  <div class="row">
    <div class="medium-12 columns">
      <?php print $content['hud']; ?>
    </div>
  </div>
<?php endif; ?>

<?php if ($content['about']): ?>
<div class="row">
  <div class="medium-12 columns">
    <?php print $content['about']; ?>
  </div>
</div>
<?php endif; ?>

<?php if ($content['news']): ?>
  <div class="row">
    <div class="medium-12 columns">
      <?php print $content['news']; ?>
    </div>
  </div>
<?php endif; ?>

<?php if ($content['sponsors']): ?>
  <div class="row">
    <div class="medium-12 columns">
      <?php print $content['sponsors']; ?>
    </div>
  </div>
<?php endif; ?>


<?php !empty($css_id) ? print '</div>' : ''; ?>
