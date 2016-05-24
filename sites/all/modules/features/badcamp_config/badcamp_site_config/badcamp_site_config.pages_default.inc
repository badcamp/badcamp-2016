<?php
/**
 * @file
 * badcamp_site_config.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badcamp_site_config_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_bc72b232-eb61-4e5e-97c7-c557c416dacf';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'BADCamp Layout',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_page';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 3,
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Main Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer_' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
          1 => 'navigation',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'navigation' => array(
        'type' => 'region',
        'title' => 'Navigation',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'footer' => NULL,
      'footer_' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'main' => NULL,
      'branding' => NULL,
      'user_nav' => NULL,
      'main_nav' => NULL,
      'footer_nav' => NULL,
      'footer_left' => NULL,
      'footer_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4cf303f7-f9a6-4c5a-b587-cb8fac79eaed';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b038817b-9b31-4545-8a2b-0f35e336fce3';
    $pane->panel = 'branding';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'linked' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b038817b-9b31-4545-8a2b-0f35e336fce3';
    $display->content['new-b038817b-9b31-4545-8a2b-0f35e336fce3'] = $pane;
    $display->panels['branding'][0] = 'new-b038817b-9b31-4545-8a2b-0f35e336fce3';
    $pane = new stdClass();
    $pane->pid = 'new-7a46309d-d3ad-4d06-9265-69fa8fe1698a';
    $pane->panel = 'footer_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Copyrights',
      'title' => '',
      'body' => '<p class="p1">© Images &amp; Layout <a class="dk-orange" href="https://creativecommons.org/licenses/by-sa/4.0/">CC-BY-SA</a> 2016 BADCAMP Some rights reserved.&nbsp; <a class="dk-orange" href="/credits">Credits</a><br />
© Code <a class="dk-orange" href="http://www.gnu.org/licenses/gpl-2.0.en.html">GNU General Public License</a> 2016 BADCAMP Some rights reserved.</p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-pane-copyright',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7a46309d-d3ad-4d06-9265-69fa8fe1698a';
    $display->content['new-7a46309d-d3ad-4d06-9265-69fa8fe1698a'] = $pane;
    $display->panels['footer_left'][0] = 'new-7a46309d-d3ad-4d06-9265-69fa8fe1698a';
    $pane = new stdClass();
    $pane->pid = 'new-50b7222d-85f5-4057-8427-4cec6010e707';
    $pane->panel = 'footer_nav';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '50b7222d-85f5-4057-8427-4cec6010e707';
    $display->content['new-50b7222d-85f5-4057-8427-4cec6010e707'] = $pane;
    $display->panels['footer_nav'][0] = 'new-50b7222d-85f5-4057-8427-4cec6010e707';
    $pane = new stdClass();
    $pane->pid = 'new-b19b80d5-7e71-4e0b-bfd5-119f5eec8bf0';
    $pane->panel = 'footer_right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Social Links',
      'title' => '',
      'body' => '<p><a class="footer-social dk-orange" href="/contact">Contact Us</a><a class="footer-social fb-icon" href="https://www.facebook.com/BayAreaDrupalCamp/"><i class="fa fa-facebook-square" aria-hidden="true"></i></a><a class="footer-social twitter-icon" href="https://twitter.com/badcamp"><i class="fa fa-twitter-square" aria-hidden="true"></i></a> </p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-pane-social',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b19b80d5-7e71-4e0b-bfd5-119f5eec8bf0';
    $display->content['new-b19b80d5-7e71-4e0b-bfd5-119f5eec8bf0'] = $pane;
    $display->panels['footer_right'][0] = 'new-b19b80d5-7e71-4e0b-bfd5-119f5eec8bf0';
    $pane = new stdClass();
    $pane->pid = 'new-fb0097c1-7ac7-4777-aec5-3bc51e64b6f8';
    $pane->panel = 'main';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'small' => '12',
        'medium' => '',
        'large' => '',
        'small-push' => '',
        'medium-push' => '',
        'large-push' => '',
        'row' => 1,
      ),
      'style' => 'grid',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fb0097c1-7ac7-4777-aec5-3bc51e64b6f8';
    $display->content['new-fb0097c1-7ac7-4777-aec5-3bc51e64b6f8'] = $pane;
    $display->panels['main'][0] = 'new-fb0097c1-7ac7-4777-aec5-3bc51e64b6f8';
    $pane = new stdClass();
    $pane->pid = 'new-e770b52e-e2c7-469c-a58e-b23535482bdb';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e770b52e-e2c7-469c-a58e-b23535482bdb';
    $display->content['new-e770b52e-e2c7-469c-a58e-b23535482bdb'] = $pane;
    $display->panels['main'][1] = 'new-e770b52e-e2c7-469c-a58e-b23535482bdb';
    $pane = new stdClass();
    $pane->pid = 'new-c4c17bcd-eb8d-4818-a598-f0418aa7cbeb';
    $pane->panel = 'main_nav';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4c17bcd-eb8d-4818-a598-f0418aa7cbeb';
    $display->content['new-c4c17bcd-eb8d-4818-a598-f0418aa7cbeb'] = $pane;
    $display->panels['main_nav'][0] = 'new-c4c17bcd-eb8d-4818-a598-f0418aa7cbeb';
    $pane = new stdClass();
    $pane->pid = 'new-41e1e054-5337-4cf1-b2f4-598ca8597475';
    $pane->panel = 'user_nav';
    $pane->type = 'block';
    $pane->subtype = 'system-user-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '41e1e054-5337-4cf1-b2f4-598ca8597475';
    $display->content['new-41e1e054-5337-4cf1-b2f4-598ca8597475'] = $pane;
    $display->panels['user_nav'][0] = 'new-41e1e054-5337-4cf1-b2f4-598ca8597475';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_bc72b232-eb61-4e5e-97c7-c557c416dacf'] = $handler;

  return $export;
}
