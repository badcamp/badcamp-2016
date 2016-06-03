<?php
/**
 * @file
 * Template for Badcamp homepage layout.
 */
?>

<?php !empty($css_id) ? print '<div id="' . $css_id . '">' : ''; ?>

<div class="region-hero">
  <div class="row">
    <div class="medium-12 columns">
      <?php print $content['hero']; ?>
    </div>
  </div>
</div>

<div class="region-about opaque">
  <div class="row">
    <?php if ($content['about-header']) : ?>
      <div class="large-12 columns region-about-header">
        <?php print $content['about-header']; ?>
      </div>
    <?php endif; ?>

    <?php if ($content['about-fr-left']) : ?>
      <div class="large-4 columns region-about-first">
        <?php print $content['about-fr-left']; ?>
      </div>
    <?php endif; ?>

    <?php if ($content['about-fr-middle']) : ?>
      <div class="large-4 columns region-about-first">
        <?php print $content['about-fr-middle']; ?>
      </div>
    <?php endif; ?>

    <?php if ($content['about-fr-right']) : ?>
      <div class="large-4 columns region-about-first">
        <?php print $content['about-fr-right']; ?>
      </div>
    <?php endif; ?>
  </div>
  <div class="row">
    <?php if ($content['about-sr']) : ?>
      <div class="medium-8 columns region-about-second">
        <?php print $content['about-sr']; ?>
      </div>
    <?php endif; ?>

    <?php if ($content['about-tr-top']) : ?>
      <div class="medium-4 columns region-about-third">
        <?php print $content['about-tr-top']; ?>
      </div>
    <?php endif; ?>

    <?php if ($content['about-tr-bottom']) : ?>
      <div class="medium-4 columns region-about-third">
        <?php print $content['about-tr-bottom']; ?>
      </div>
    <?php endif; ?>
  </div>
  <div class="row">
    <?php if ($content['about-button']) : ?>
      <div class="medium-12 columns region-about-button">
        <?php print $content['about-button']; ?>
      </div>
    <?php endif; ?>

</div>

<?php if ($content['news']) : ?>
  <div class="region-news">
    <div class="row">
      <div class="medium-12 columns">
        <?php print $content['news']; ?>
      </div>
    </div>
  </div>
<?php endif; ?>

<?php if ($content['sponsors']) : ?>
  <div class="region-sponsors opaque">
    <div class="row">
      <div class="medium-12 columns">
        <?php print $content['sponsors']; ?>
      </div>
    </div>
  </div>
<?php endif; ?>


<?php !empty($css_id) ? print '</div>' : ''; ?>
