<?php
/**
 * @file
 * badcamp_blog_post.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function badcamp_blog_post_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_tags|node|blog_post|form';
  $field_group->group_name = 'group_blog_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Blog tags',
    'weight' => '3',
    'children' => array(
      0 => 'field_blog_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-blog-tags field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_blog_tags|node|blog_post|form'] = $field_group;

  return $export;
}
