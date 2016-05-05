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
<header class="row" id="site-header">
  <div class="row">
    <div class="medium-6 columns">
      <?php print $content['branding']; ?>
    </div>
    <div class="medium-6 columns">
      <?php print $content['user_nav']; ?>
    </div>
  </div>
  <div class="row">
    <div class="medium-12 columns">
      <?php print $content['main_nav']; ?>
    </div>
  </div>
</header>

<?php if ($content['main']): ?>
<div class="region-main">
    <?php print $content['main']; ?>
  </div>
<?php endif; ?>

<footer id="site-footer">
  <?php print $content['footer_nav']; ?>
  <div class="footer-bottom">
    <div class="row">
      <div class="medium-6">
        <?php print $content['footer_left']; ?>
      </div>
      <div class="medium-6">
        <?php print $content['footer_right']; ?>
      </div>
    </div>
  </div>
</footer>

<?php !empty($css_id) ? print '</div>' : ''; ?>
