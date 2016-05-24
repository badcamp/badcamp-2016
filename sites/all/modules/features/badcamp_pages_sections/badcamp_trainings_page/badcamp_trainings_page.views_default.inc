<?php
/**
 * @file
 * badcamp_trainings_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function badcamp_trainings_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'badcamp_trainings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Trainings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_training_date_time',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_training_date_time']['id'] = 'field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['table'] = 'field_data_field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['field'] = 'field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_training_date_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_date_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_training_date_time']['alter']['text'] = '<h3>[field_training_date_time]</h3>';
  $handler->display->display_options['fields']['field_training_date_time']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_training_date_time']['element_class'] = 'panel';
  $handler->display->display_options['fields']['field_training_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_date_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_training_date_time']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Skill level */
  $handler->display->display_options['fields']['field_skill_level']['id'] = 'field_skill_level';
  $handler->display->display_options['fields']['field_skill_level']['table'] = 'field_data_field_skill_level';
  $handler->display->display_options['fields']['field_skill_level']['field'] = 'field_skill_level';
  $handler->display->display_options['fields']['field_skill_level']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_skill_level']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_skill_level']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_skill_level']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_skill_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'button buttercup';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More Information';
  /* Sort criterion: Content: Date and Time (field_training_date_time) */
  $handler->display->display_options['sorts']['field_training_date_time_value']['id'] = 'field_training_date_time_value';
  $handler->display->display_options['sorts']['field_training_date_time_value']['table'] = 'field_data_field_training_date_time';
  $handler->display->display_options['sorts']['field_training_date_time_value']['field'] = 'field_training_date_time_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'not';
  $handler->display->display_options['filters']['title']['value'] = 'Cancelled Registration';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['badcamp_trainings'] = $view;

  return $export;
}
