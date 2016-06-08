<?php
/**
 * @file
 * badcamp_registration_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_registration_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'badcamp_registration';
  $page->task = 'page';
  $page->admin_title = 'Registration';
  $page->admin_description = 'Register for camp!';
  $page->path = 'registration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Register',
    'name' => 'user-menu',
    'weight' => '100',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_badcamp_registration__panel_context_20a7095a-37f4-44bc-b03b-588504eb45bd';
  $handler->task = 'page';
  $handler->subtask = 'badcamp_registration';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'registration',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Register to Attend | [site:name]',
        ),
        'description' => array(
          'value' => 'Register to attend BADCamp (it\'s free!) and sign up for trainings, summits, and more!',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_narrow1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Registration';
  $display->uuid = '262cbe19-f5b7-4352-9b1c-a8b8391e55b9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-280f39d2-fef4-46b8-9826-0e39f2bc85be';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Registration step 1 marker',
      'title' => 'Registration',
      'body' => '<p><img src="/sites/all/themes/custom/badcamp2016/images/bc_reg_step_1.svg" /></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '280f39d2-fef4-46b8-9826-0e39f2bc85be';
    $display->content['new-280f39d2-fef4-46b8-9826-0e39f2bc85be'] = $pane;
    $display->panels['content'][0] = 'new-280f39d2-fef4-46b8-9826-0e39f2bc85be';
    $pane = new stdClass();
    $pane->pid = 'new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
    $pane->panel = 'content';
    $pane->type = 'user_register_form';
    $pane->subtype = 'user_register_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-WDHNMSpb1AgHaQMHbgQxG5702_4x-Iuin1shi00QWvU',
      'form_token' => 'Lxr5D3PZqjaGT_fvk_Pz8xX49gkxp63qaSlyL6nKWrM',
      'form_id' => 'ctools_user_register_form_content_type_edit_form',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
    $display->content['new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f'] = $pane;
    $display->panels['content'][1] = 'new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['badcamp_registration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'registration_step_2';
  $page->task = 'page';
  $page->admin_title = 'Registration Step 2';
  $page->admin_description = 'The second step of registration, individual sponsorship.';
  $page->path = 'registration/sponsorship';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'make a stripe donation',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_registration_step_2__panel_context_5196f101-92d8-428a-bfca-28fbfc9676f2';
  $handler->task = 'page';
  $handler->subtask = 'registration_step_2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Registration Sponsorship Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Registration - Step 2';
  $display->uuid = '3857cf82-8323-4c0c-984e-253843673a61';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6b15a30f-98a0-4942-8bc7-aec60d4dbfeb';
    $pane->panel = 'content';
    $pane->type = 'donation_options';
    $pane->subtype = 'donation_options';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'stripe_donation_payment_page_title' => NULL,
      'stripe_donation_zero_amt_donation_redirect_path' => '/user',
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
    $pane->uuid = '6b15a30f-98a0-4942-8bc7-aec60d4dbfeb';
    $display->content['new-6b15a30f-98a0-4942-8bc7-aec60d4dbfeb'] = $pane;
    $display->panels['content'][0] = 'new-6b15a30f-98a0-4942-8bc7-aec60d4dbfeb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['registration_step_2'] = $page;

  return $pages;

}
