<?php
/**
 * @file
 * badcamp_summits_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badcamp_summits_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
