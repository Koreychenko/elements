<?php
/**
 * @file
 * accordion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function accordion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
}