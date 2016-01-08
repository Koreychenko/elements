<?php
/**
 * @file
 * slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
}
