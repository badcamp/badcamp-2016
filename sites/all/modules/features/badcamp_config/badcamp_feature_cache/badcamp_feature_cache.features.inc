<?php
/**
 * @file
 * badcamp_feature_cache.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badcamp_feature_cache_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
