<?php
/**
 * @file
 * Drupal site-specific configuration file.
 */

// Environment specific information that should not be in version control.
if (file_exists(DRUPAL_ROOT . '/sites/default/settings.secret.php')) {
  require_once DRUPAL_ROOT . '/sites/default/settings.secret.php';
}

// Pantheon.
if (defined('PANTHEON_ENVIRONMENT')) {
  if (file_exists(DRUPAL_ROOT . '/sites/default/pantheon.settings.php')) {
    require_once(DRUPAL_ROOT . '/sites/default/pantheon.settings.php');
  }
}

/**
 * Master module configuration.
 *
 * @see https://www.drupal.org/project/master
 */
$conf['master_version'] = 2;
$conf['master_allow_base_scope'] = TRUE;
$conf['master_modules'] = array();
$conf['master_modules']['base'] = array(
  // Core modules.
  'dblog',
  'file',
  'image',
  'list',
  'menu',
  'number',
  'options',
  'path',
  'taxonomy',
  'update',

  // Contrib modules.
  'admin_menu',
  'admin_views',
  'adminimal_admin_menu',
  'ckeditor',
  'ckeditor_link',
  'ctools',
  'entity',
  'features',
  'field_group',
  'globalredirect',
  'jquery_update',
  'inline_entity_form',
  'libraries',
  'link',
  'master',
  'metatag',
  'module_filter',
  'panels',
  'panels_everywhere',
  'panels_node',
  'pantheon_api',
  'pathauto',
  'realname',
  'r4032login',
  'strongarm',
  'styleguide',
  'token',
  'user_pages',
  'views',
  'views_bulk_operations',
  'views_content',

  // BADCamp features.
  'badcamp_community',
  'badcamp_basic_page',
  'badcamp_blog_post',
  'badcamp_code_of_conduct_page',
  'badcamp_contact_form',
  'badcamp_environment',
  'badcamp_events',
  'badcamp_feature_credits_page',
  'badcamp_homepage',
  'badcamp_mailchimp',
  'badcamp_news_feature',
  'badcamp_registration_page',
  'badcamp_scholarship_application',
  'badcamp_sessions',
  'badcamp_sessions_page',
  'badcamp_site_config',
  'badcamp_sponsors',
  'badcamp_sponsors_page',
  'badcamp_summits_page',
  'badcamp_trainings_page',
  'badcamp_user_profile',
  'feature_badcamp_homepage',
  'feature_badcamp_reports',
  'training_reg_feature',
  // BADCamp custom modules.
  'training_reg',
  'badcamp_theme',
);
$conf['master_modules']['local'] = array(
  'diff',
  'field_ui',
  'page_manager',
  'views_ui',
);

$conf['master_modules']['test'] = $conf['master_modules']['live'] = array();

$update_free_access = FALSE;

ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);

$conf['404_fast_paths_exclude'] = '/\/(?:styles)\//';
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['404_fast_html'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';
drupal_fast_404();

// Use admin theme for editing content.
$conf['node_admin_theme'] = 1;

// Metatag.
$conf['metatag_cache_output'] = 1;
$conf['metatag_enable_node'] = 1;
$conf['metatag_entity_no_lang_default'] = 0;
$conf['metatag_extended_permissions'] = 0;
$conf['metatag_load_all_pages'] = 0;
$conf['metatag_load_defaults'] = 1;
$conf['metatag_page_region'] = 'content';
$conf['metatag_tag_admin_pages'] = 0;

// Views.
$conf['views_ui_show_advanced_column'] = 1;
$conf['views_ui_show_advanced_help_warning'] = 0;
$conf['views_ui_show_master_display'] = 1;

// Regional settings.
$conf['date_default_timezone'] = 'America/Los_Angeles';
$conf['configurable_timezones'] = 0;

// Disable Drupal's "poor man's cron".
$conf['cron_safe_threshold'] = 0;

// Enable user registration.
$conf['user_register'] = 1;

// Site information.
$conf['site_name'] = 'BADCamp 2016';
$conf['site_slogan'] = 'Bay Area Drupal Camp';
$conf['site_mail'] = 'info@badcamp.net';
$conf['site_frontpage'] = 'home';

// Theme.
$conf['theme_default'] = 'badcamp2016';

// Local configuration; should remain at the bottom of this file.
if (file_exists(DRUPAL_ROOT . '/sites/default/settings.local.php')) {
  require_once DRUPAL_ROOT . '/sites/default/settings.local.php';
}
