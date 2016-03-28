<?php
/**
 * @file
 * badcamp_blog_post.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function badcamp_blog_post_taxonomy_default_vocabularies() {
  return array(
    'blog_tags' => array(
      'name' => 'Blog tags',
      'machine_name' => 'blog_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
