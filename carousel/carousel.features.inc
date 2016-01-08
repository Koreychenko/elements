<?php
/**
 * @file
 * carousel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function carousel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function carousel_image_default_styles() {
  $styles = array();

  // Exported image style: carousel.
  $styles['carousel'] = array(
    'label' => 'Карусель',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
