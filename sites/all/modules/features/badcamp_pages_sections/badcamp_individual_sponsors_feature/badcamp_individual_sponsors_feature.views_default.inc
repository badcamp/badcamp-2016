<?php
/**
 * @file
 * badcamp_individual_sponsors_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function badcamp_individual_sponsors_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'badcamp_individual_sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_donation';
  $view->human_name = 'Individual Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Individual Sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_donation_type',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_donation_type_target_id']['id'] = 'field_donation_type_target_id';
  $handler->display->display_options['relationships']['field_donation_type_target_id']['table'] = 'field_data_field_donation_type';
  $handler->display->display_options['relationships']['field_donation_type_target_id']['field'] = 'field_donation_type_target_id';
  $handler->display->display_options['relationships']['field_donation_type_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_donation_user_target_id']['id'] = 'field_donation_user_target_id';
  $handler->display->display_options['relationships']['field_donation_user_target_id']['table'] = 'field_data_field_donation_user';
  $handler->display->display_options['relationships']['field_donation_user_target_id']['field'] = 'field_donation_user_target_id';
  $handler->display->display_options['relationships']['field_donation_user_target_id']['required'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_donation_user_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'attendee-photo';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<img src="/sites/all/themes/badcamp2015/logo.png" class="attendee-photo" />';
  $handler->display->display_options['fields']['picture']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'headshot_thumbnail';
  /* Field: Donation: Donation Type */
  $handler->display->display_options['fields']['field_donation_type']['id'] = 'field_donation_type';
  $handler->display->display_options['fields']['field_donation_type']['table'] = 'field_data_field_donation_type';
  $handler->display->display_options['fields']['field_donation_type']['field'] = 'field_donation_type';
  $handler->display->display_options['fields']['field_donation_type']['label'] = '';
  $handler->display->display_options['fields']['field_donation_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_donation_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_donation_type']['alter']['text'] = '[field_donation_type]s';
  $handler->display->display_options['fields']['field_donation_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_donation_type']['settings'] = array(
    'link' => 0,
  );
  /* Field: Donation: User */
  $handler->display->display_options['fields']['field_donation_user']['id'] = 'field_donation_user';
  $handler->display->display_options['fields']['field_donation_user']['table'] = 'field_data_field_donation_user';
  $handler->display->display_options['fields']['field_donation_user']['field'] = 'field_donation_user';
  $handler->display->display_options['fields']['field_donation_user']['label'] = '';
  $handler->display->display_options['fields']['field_donation_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_donation_user']['settings'] = array(
    'link' => 1,
  );
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['relationship'] = 'field_donation_user_target_id';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['relationship'] = 'field_donation_user_target_id';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['alter']['text'] = ' [field_user_last_name]';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  /* Field: Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_user_first_name][field_user_last_name]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: User: Title/Role */
  $handler->display->display_options['fields']['field_user_title_role']['id'] = 'field_user_title_role';
  $handler->display->display_options['fields']['field_user_title_role']['table'] = 'field_data_field_user_title_role';
  $handler->display->display_options['fields']['field_user_title_role']['field'] = 'field_user_title_role';
  $handler->display->display_options['fields']['field_user_title_role']['relationship'] = 'field_donation_user_target_id';
  $handler->display->display_options['fields']['field_user_title_role']['label'] = '';
  $handler->display->display_options['fields']['field_user_title_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_title_role']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_title_role']['empty_zero'] = TRUE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['relationship'] = 'field_donation_user_target_id';
  $handler->display->display_options['fields']['field_user_organization']['label'] = '';
  $handler->display->display_options['fields']['field_user_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_organization']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_organization']['empty_zero'] = TRUE;
  /* Filter criterion: Donation: donation type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_donation';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'donation' => 'donation',
  );
  /* Filter criterion: Donation Type: Amount (field_donation_type_amount) */
  $handler->display->display_options['filters']['field_donation_type_amount_value']['id'] = 'field_donation_type_amount_value';
  $handler->display->display_options['filters']['field_donation_type_amount_value']['table'] = 'field_data_field_donation_type_amount';
  $handler->display->display_options['filters']['field_donation_type_amount_value']['field'] = 'field_donation_type_amount_value';
  $handler->display->display_options['filters']['field_donation_type_amount_value']['relationship'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_amount_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_donation_type_amount_value']['value']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Want to become an individual sponsor? <a href="https://2015.badcamp.net/registration/sponsorship">Checkout the options</a>.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'sponsors/individual';
  $handler->display->display_options['menu']['title'] = 'Individual';
  $handler->display->display_options['menu']['description'] = 'Individual Sponsors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'BADCamp';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['badcamp_individual_sponsors'] = $view;

  return $export;
}
