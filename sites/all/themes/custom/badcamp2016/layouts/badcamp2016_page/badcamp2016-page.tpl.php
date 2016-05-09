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
<header id="site-header">
  <div class="row">
    <div class="medium-6 columns">
      <?php print $content['branding']; ?>
    </div>
    <div class="medium-6 columns">
      <?php print $content['user_nav']; ?>
    </div>
  </div>
  <div class="row">
    <div class="columns">
      <?php print $content['main_nav']; ?>
    </div>
  </div>

</header>

<?php if ($content['main']) : ?>
  <main id="site-main">
    <?php print $content['main']; ?>
  </main>
<?php endif; ?>

<footer id="site-footer">
  <div class="footer-top">
    <div class="row">
      <div class="columns">
        <?php print $content['footer_nav']; ?>
      </div>
    </div>
  </div>


  <div class="footer-bottom">
    <div class="row">
      <div class="medium-6 columns">
        <?php print $content['footer_left']; ?>
      </div>
      <div class="medium-6 columns">
        <?php print $content['footer_right']; ?>
      </div>
    </div>
  </div>
</footer>

<?php !empty($css_id) ? print '</div>' : ''; ?>
