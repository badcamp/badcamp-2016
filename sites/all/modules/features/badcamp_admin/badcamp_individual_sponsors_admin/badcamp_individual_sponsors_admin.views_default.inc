<?php
/**
 * @file
 * badcamp_individual_sponsors_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function badcamp_individual_sponsors_admin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'individual_sponsor_admin';
  $view->description = '';
  $view->tag = 'admin';
  $view->base_table = 'eck_donation';
  $view->human_name = 'Individual Sponsor Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Individual Sponsors (All)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer stripe donations';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_donation_user' => 'field_donation_user',
    'field_donation_type' => 'field_donation_type',
    'field_donation_type_amount' => 'field_donation_type_amount',
    'field_donation_stripe_trans' => 'field_donation_stripe_trans',
    'changed' => 'changed',
    'created' => 'created',
    'nothing' => 'nothing',
    'edit_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_donation_user' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_donation_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_donation_type_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_donation_stripe_trans' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_donation_type_target_id']['id'] = 'field_donation_type_target_id';
  $handler->display->display_options['relationships']['field_donation_type_target_id']['table'] = 'field_data_field_donation_type';
  $handler->display->display_options['relationships']['field_donation_type_target_id']['field'] = 'field_donation_type_target_id';
  $handler->display->display_options['relationships']['field_donation_type_target_id']['required'] = TRUE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Donation: User */
  $handler->display->display_options['fields']['field_donation_user']['id'] = 'field_donation_user';
  $handler->display->display_options['fields']['field_donation_user']['table'] = 'field_data_field_donation_user';
  $handler->display->display_options['fields']['field_donation_user']['field'] = 'field_donation_user';
  $handler->display->display_options['fields']['field_donation_user']['label'] = 'Donor';
  $handler->display->display_options['fields']['field_donation_user']['settings'] = array(
    'link' => 1,
  );
  /* Field: Donation: Donation Type */
  $handler->display->display_options['fields']['field_donation_type']['id'] = 'field_donation_type';
  $handler->display->display_options['fields']['field_donation_type']['table'] = 'field_data_field_donation_type';
  $handler->display->display_options['fields']['field_donation_type']['field'] = 'field_donation_type';
  $handler->display->display_options['fields']['field_donation_type']['settings'] = array(
    'link' => 0,
  );
  /* Field: Donation Type: Amount */
  $handler->display->display_options['fields']['field_donation_type_amount']['id'] = 'field_donation_type_amount';
  $handler->display->display_options['fields']['field_donation_type_amount']['table'] = 'field_data_field_donation_type_amount';
  $handler->display->display_options['fields']['field_donation_type_amount']['field'] = 'field_donation_type_amount';
  $handler->display->display_options['fields']['field_donation_type_amount']['relationship'] = 'field_donation_type_target_id';
  $handler->display->display_options['fields']['field_donation_type_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Donation: Stripe Transaction */
  $handler->display->display_options['fields']['field_donation_stripe_trans']['id'] = 'field_donation_stripe_trans';
  $handler->display->display_options['fields']['field_donation_stripe_trans']['table'] = 'field_data_field_donation_stripe_trans';
  $handler->display->display_options['fields']['field_donation_stripe_trans']['field'] = 'field_donation_stripe_trans';
  $handler->display->display_options['fields']['field_donation_stripe_trans']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_donation_stripe_trans']['alter']['path'] = 'https://dashboard.stripe.com/test/payments/[field_donation_stripe_trans]';
  $handler->display->display_options['fields']['field_donation_stripe_trans']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_donation_stripe_trans']['alter']['alt'] = '[field_donation_stripe_trans]';
  $handler->display->display_options['fields']['field_donation_stripe_trans']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_donation_stripe_trans']['type'] = 'text_plain';
  /* Field: Donation: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_donation';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Donation: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_donation';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Dates';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>Created:</strong> [created]<br />
<strong>Changed:</strong> [changed]';
  /* Field: Donation: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_donation';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Filter criterion: Donation: donation type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_donation';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'donation' => 'donation',
  );
  /* Filter criterion: Donation: Donation Type (field_donation_type) */
  $handler->display->display_options['filters']['field_donation_type_target_id']['id'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['table'] = 'field_data_field_donation_type';
  $handler->display->display_options['filters']['field_donation_type_target_id']['field'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['value']['value'] = '2';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['operator_id'] = 'field_donation_type_target_id_op';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['label'] = 'Donation Type';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['operator'] = 'field_donation_type_target_id_op';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['identifier'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );

  /* Display: all */
  $handler = $view->new_display('page', 'all', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Donation: donation type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_donation';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'donation' => 'donation',
  );
  $handler->display->display_options['path'] = 'admin/badcamp/sponsors/individual/all';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All';
  $handler->display->display_options['menu']['description'] = 'Individual Sponsors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: supporting */
  $handler = $view->new_display('page', 'supporting', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Individual Sponsors (Supporting $25)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Donation: donation type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_donation';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'donation' => 'donation',
  );
  /* Filter criterion: Donation: Donation Type (field_donation_type) */
  $handler->display->display_options['filters']['field_donation_type_target_id']['id'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['table'] = 'field_data_field_donation_type';
  $handler->display->display_options['filters']['field_donation_type_target_id']['field'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['value']['value'] = '2';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['operator_id'] = 'field_donation_type_target_id_op';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['label'] = 'Donation Type';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['operator'] = 'field_donation_type_target_id_op';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['identifier'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'admin/badcamp/sponsors/individual/supporting';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Supporting';
  $handler->display->display_options['menu']['description'] = 'Individual Sponsors';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: contrib */
  $handler = $view->new_display('page', 'contrib', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Individual Sponsors (Contrib $50)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Donation: donation type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_donation';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'donation' => 'donation',
  );
  /* Filter criterion: Donation: Donation Type (field_donation_type) */
  $handler->display->display_options['filters']['field_donation_type_target_id']['id'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['table'] = 'field_data_field_donation_type';
  $handler->display->display_options['filters']['field_donation_type_target_id']['field'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['value']['value'] = '3';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['operator_id'] = 'field_donation_type_target_id_op';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['label'] = 'Donation Type';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['operator'] = 'field_donation_type_target_id_op';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['identifier'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'admin/badcamp/sponsors/individual/contrib';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Contrib';
  $handler->display->display_options['menu']['description'] = 'Individual Sponsors';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: core */
  $handler = $view->new_display('page', 'core', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Individual Sponsors (Core $100)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Donation: donation type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_donation';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'donation' => 'donation',
  );
  /* Filter criterion: Donation: Donation Type (field_donation_type) */
  $handler->display->display_options['filters']['field_donation_type_target_id']['id'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['table'] = 'field_data_field_donation_type';
  $handler->display->display_options['filters']['field_donation_type_target_id']['field'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['value']['value'] = '4';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['operator_id'] = 'field_donation_type_target_id_op';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['label'] = 'Donation Type';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['operator'] = 'field_donation_type_target_id_op';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['identifier'] = 'field_donation_type_target_id';
  $handler->display->display_options['filters']['field_donation_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'admin/badcamp/sponsors/individual/core';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Core';
  $handler->display->display_options['menu']['description'] = 'Individual Sponsors';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['individual_sponsor_admin'] = $view;

  return $export;
}
