<?php
/**
 * @file
 * badcamp_contact_form.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function badcamp_contact_form_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contact_us_submissions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Contact Us Submissions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Us Submissions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact_form' => 'contact_form',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'field_contact_admin_status' => 'field_contact_admin_status',
    'field_contact_from' => 'field_contact_from',
    'field_contact_subject' => 'field_contact_subject',
    'field_contact_admin_category' => 'field_contact_admin_category',
    'edit_entityform' => 'edit_entityform',
    'entityform_id' => 'entityform_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_admin_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_from' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_admin_category' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_entityform' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Entityform Submission: Admin Status */
  $handler->display->display_options['fields']['field_contact_admin_status']['id'] = 'field_contact_admin_status';
  $handler->display->display_options['fields']['field_contact_admin_status']['table'] = 'field_data_field_contact_admin_status';
  $handler->display->display_options['fields']['field_contact_admin_status']['field'] = 'field_contact_admin_status';
  $handler->display->display_options['fields']['field_contact_admin_status']['label'] = 'Status';
  /* Field: Entityform Submission: My email address */
  $handler->display->display_options['fields']['field_contact_from']['id'] = 'field_contact_from';
  $handler->display->display_options['fields']['field_contact_from']['table'] = 'field_data_field_contact_from';
  $handler->display->display_options['fields']['field_contact_from']['field'] = 'field_contact_from';
  /* Field: Entityform Submission: Subject */
  $handler->display->display_options['fields']['field_contact_subject']['id'] = 'field_contact_subject';
  $handler->display->display_options['fields']['field_contact_subject']['table'] = 'field_data_field_contact_subject';
  $handler->display->display_options['fields']['field_contact_subject']['field'] = 'field_contact_subject';
  /* Field: Entityform Submission: Admin Category */
  $handler->display->display_options['fields']['field_contact_admin_category']['id'] = 'field_contact_admin_category';
  $handler->display->display_options['fields']['field_contact_admin_category']['table'] = 'field_data_field_contact_admin_category';
  $handler->display->display_options['fields']['field_contact_admin_category']['field'] = 'field_contact_admin_category';
  $handler->display->display_options['fields']['field_contact_admin_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_contact_admin_category']['delta_offset'] = '0';
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Edit ';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Entityform Submission: Date submitted */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact_form' => 'contact_form',
  );
  /* Filter criterion: Entityform Submission: My email address (field_contact_from) */
  $handler->display->display_options['filters']['field_contact_from_value']['id'] = 'field_contact_from_value';
  $handler->display->display_options['filters']['field_contact_from_value']['table'] = 'field_data_field_contact_from';
  $handler->display->display_options['filters']['field_contact_from_value']['field'] = 'field_contact_from_value';
  $handler->display->display_options['filters']['field_contact_from_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_from_value']['expose']['operator_id'] = 'field_contact_from_value_op';
  $handler->display->display_options['filters']['field_contact_from_value']['expose']['label'] = 'My email address';
  $handler->display->display_options['filters']['field_contact_from_value']['expose']['operator'] = 'field_contact_from_value_op';
  $handler->display->display_options['filters']['field_contact_from_value']['expose']['identifier'] = 'field_contact_from_value';
  $handler->display->display_options['filters']['field_contact_from_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Entityform Submission: Admin Status (field_contact_admin_status) */
  $handler->display->display_options['filters']['field_contact_admin_status_value']['id'] = 'field_contact_admin_status_value';
  $handler->display->display_options['filters']['field_contact_admin_status_value']['table'] = 'field_data_field_contact_admin_status';
  $handler->display->display_options['filters']['field_contact_admin_status_value']['field'] = 'field_contact_admin_status_value';
  $handler->display->display_options['filters']['field_contact_admin_status_value']['value'] = array(
    'all' => 'all',
    'new' => 'new',
    'in_process' => 'in_process',
    'closed' => 'closed',
  );
  $handler->display->display_options['filters']['field_contact_admin_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_admin_status_value']['expose']['operator_id'] = 'field_contact_admin_status_value_op';
  $handler->display->display_options['filters']['field_contact_admin_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_contact_admin_status_value']['expose']['operator'] = 'field_contact_admin_status_value_op';
  $handler->display->display_options['filters']['field_contact_admin_status_value']['expose']['identifier'] = 'field_contact_admin_status_value';
  $handler->display->display_options['filters']['field_contact_admin_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_contact_admin_status_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_contact_admin_status_value']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_contact_admin_status_value']['group_info']['identifier'] = 'field_contact_admin_status_value';
  $handler->display->display_options['filters']['field_contact_admin_status_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_contact_admin_status_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
  );
  $handler->display->display_options['path'] = 'admin/badcamp/contact-us-submissions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Contact Us Submissions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['contact_us_submissions'] = $view;

  return $export;
}
