<?php
/**
 * @file
 * paragraph.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function paragraph_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function paragraph_image_default_styles() {
  $styles = array();

  // Exported image style: paragraph_image.
  $styles['paragraph_image'] = array(
    'label' => 'Paragraph Image',
    'effects' => array(
      3 => array(
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
