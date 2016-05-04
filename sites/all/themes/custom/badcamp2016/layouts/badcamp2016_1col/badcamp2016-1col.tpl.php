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
<?php if ($content['top']): ?>
  <div class="row region-header">
    <div class="medium-12 columns">
      <?php print $content['header']; ?>
    </div>
  </div>
<?php endif; ?>

<?php if ($content['middle']): ?>
<div class="region-main">
    <?php print $content['main']; ?>
  </div>
<?php endif; ?>

<?php if ($content['bottom']): ?>
  <div class="row region-footer">
    <div class="medium-12 columns">
      <?php print $content['footer']; ?>
    </div>
  </div>
<?php endif; ?>

<?php !empty($css_id) ? print '</div>' : ''; ?>
