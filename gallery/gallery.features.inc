<?php
/**
 * @file
 * gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function gallery_image_default_styles() {
  $styles = array();

  // Exported image style: gallery.
  $styles['gallery'] = array(
    'label' => 'gallery',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
