<?php
/**
 * @file
 * badcamp_individual_sponsors_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_individual_sponsors_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'individual_sponsorship_selection';
  $page->task = 'page';
  $page->admin_title = 'Individual Sponsorship Selection';
  $page->admin_description = 'The second step of registration, individual sponsorship.';
  $page->path = 'individual/sponsorship';
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
  $handler->name = 'page_individual_sponsorship_selection__panel_context_e2541029-46b4-44c5-8bf9-469937a87656';
  $handler->task = 'page';
  $handler->subtask = 'individual_sponsorship_selection';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Individual Sponsorship Panel',
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
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Individual Sponsorship';
  $display->uuid = '3857cf82-8323-4c0c-984e-253843673a61';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a8e5ebd-62c8-4aab-8375-8362b1e025d0';
    $pane->panel = 'middle';
    $pane->type = 'donation_options';
    $pane->subtype = 'donation_options';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h1',
      'stripe_donation_payment_page_title' => NULL,
      'stripe_donation_zero_amt_donation_redirect_path' => '/user',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a8e5ebd-62c8-4aab-8375-8362b1e025d0';
    $display->content['new-0a8e5ebd-62c8-4aab-8375-8362b1e025d0'] = $pane;
    $display->panels['middle'][0] = 'new-0a8e5ebd-62c8-4aab-8375-8362b1e025d0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0a8e5ebd-62c8-4aab-8375-8362b1e025d0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['individual_sponsorship_selection'] = $page;

  return $pages;

}
