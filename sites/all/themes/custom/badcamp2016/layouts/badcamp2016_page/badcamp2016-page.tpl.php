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
<div id="layout-wrapper">
  <canvas id="canvas2d"></canvas>
  <?php !empty($css_id) ? print '<div id="' . $css_id . '">' : ''; ?>
  <header id="site-header">
    <div class="row expanded">
      <div class="small-12  medium-6 medium-push-3 columns">
        <?php print $content['branding']; ?>
      </div>
      <div class="small-12 medium-3 columns">
        <?php print $content['user_nav']; ?>
      </div>
    </div>
    <div class="row">
      <div class="columns">
        <div class="title-bar" data-responsive-toggle="main-nav" data-hide-for="medium">
          <button class="menu-icon" type="button" data-toggle></button>
          <div class="title-bar-title">Menu</div>
        </div>
        <div class="top-bar" id="main-nav">
          <?php print $content['main_nav']; ?>
        </div>
      </div>
    </div>
  </header>

  <?php if ($content['main'] || $content['tilte']) : ?>
    <main id="site-main">
      <?php print $content['title']; ?>
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
      <div class="footer-hud-top"></div>
      <div class="footer-hud-bottom">
        <div class="row">
          <div class="medium-6 columns">
            <?php print $content['footer_left']; ?>
          </div>
          <div class="medium-6 columns">
            <div id="mc_embed_signup" class="form">
              <form action="//badcamp.us2.list-manage.com/subscribe/post?u=86bbbd957bb1386b180469d43&amp;id=6bd2811fef" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
                <div id="mc_embed_signup_scroll">
                  <div class="form__field-group">
                    <div class="mc-field-group form__field">
                      <label for="mce-EMAIL" class="element-invisible">Email Address</label>
                      <input type="email" value="" name="EMAIL" class="required email" id="mce-EMAIL" placeholder="email address *">
                    </div>
                    <div class="mc-field-group form__field">
                      <label for="mce-MMERGE1" class="element-invisible">First Name </label>
                      <input type="text" value="" name="MMERGE1" class="" id="mce-MMERGE1" placeholder="first name *">
                    </div>
                  </div>
                  <div id="mce-responses" class="clear">
                    <div class="response" id="mce-error-response" style="display:none"></div>
                    <div class="response" id="mce-success-response" style="display:none"></div>
                  </div>
                  <!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups-->
                  <div style="position: absolute; left: -5000px;" aria-hidden="true">
                    <input type="text" name="b_86bbbd957bb1386b180469d43_6bd2811fef" tabindex="-1" value="">
                  </div>
                  <div class="submit">
                    <input type="submit" value="Sign Up" name="subscribe" id="mc-embedded-subscribe" class="button">
                  </div>
                </div>
              </form>
            </div>
            <?php print $content['footer_right']; ?>
          </div>
        </div>
      </div>
    </div>
  </footer>

  <?php !empty($css_id) ? print '</div>' : ''; ?>
</div>
