<?php
/**
 * @file
 * badcamp_community.features.inc
 */

/**
 * Implements hook_views_api().
 */
function badcamp_community_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function badcamp_community_image_default_styles() {
  $styles = array();

  // Exported image style: headshot.
  $styles['headshot'] = array(
    'label' => 'headshot',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
      6 => array(
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: headshot_thumbnail.
  $styles['headshot_thumbnail'] = array(
    'label' => 'headshot thumbnail',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 75,
          'height' => 75,
        ),
        'weight' => 1,
      ),
      8 => array(
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
