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

<?php if ($content['hero']): ?>
  <div class="row region-hud">
    <div class="medium-12 columns">
      <?php print $content['hero']; ?>
    </div>
  </div>
<?php endif; ?>
<div class="row region-about">
  <?php if ($content['about-header']): ?>
    <div class="medium-12 columns region-about-header">
      <?php print $content['about-header']; ?>
    </div>
  <?php endif; ?>
  <?php if ($content['about-copy']): ?>
    <div class="medium-12 columns region-about-copy">
      <?php print $content['about-copy']; ?>
    </div>
  <?php endif; ?>

  <?php if ($content['about-fr-left']): ?>
  <div class="medium-4 columns region-about-first">
    <?php print $content['about-fr-left']; ?>
  </div>
  <?php endif; ?>
  
  <?php if ($content['about-fr-middle']): ?>
  <div class="medium-4 columns region-about-first">
    <?php print $content['about-fr-middle']; ?>
  </div>
  <?php endif; ?>
  
  <?php if ($content['about-fr-right']): ?>
    <div class="medium-4 columns region-about-first">
      <?php print $content['about-fr-right']; ?>
    </div>
  <?php endif; ?>
  
  <?php if ($content['about-sr']): ?>
    <div class="medium-8 columns region-about-second">
      <?php print $content['about-sr']; ?>
    </div>
  <?php endif; ?>

  <?php if ($content['about-tr-top']): ?>
    <div class="columns region-about-third">
      <?php print $content['about-tr-top']; ?>
    </div>
  <?php endif; ?>
  
  <?php if ($content['about-tr-bottom']): ?>
    <div class="columns region-about-third">
      <?php print $content['about-tr-bottom']; ?>
    </div>
  <?php endif; ?>

  <?php if ($content['about-button']): ?>
    <div class="medium-12 columns region-about-button">
      <?php print $content['about-button']; ?>
    </div>
  <?php endif; ?>
</div>

<?php if ($content['news']): ?>
  <div class="row region-news">
    <div class="medium-8 columns">
      <?php print $content['news']; ?>
    </div>
  </div>
<?php endif; ?>

<?php if ($content['sponsors']): ?>
  <div class="row region-sponsors">
    <div class="medium-12 columns">
      <?php print $content['sponsors']; ?>
    </div>
  </div>
<?php endif; ?>


<?php !empty($css_id) ? print '</div>' : ''; ?>
