<?php
/**
 * @file
 * carousel.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function carousel_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'fieldable_panels_pane-carousel-field_carousel_image'.
  $field_instances['fieldable_panels_pane-carousel-field_carousel_image'] = array(
    'bundle' => 'carousel',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'slick_fields',
        'settings' => array(
          'asnavfor_auto' => 0,
          'asnavfor_main' => '',
          'asnavfor_thumbnail' => '',
          'aspect_ratio' => '',
          'cache' => '',
          'color_field' => '',
          'colorbox_style' => '',
          'current_display' => 'main',
          'current_view_mode' => 'default',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'grid' => '',
          'grid_medium' => '',
          'grid_small' => '',
          'iframe_lazy' => FALSE,
          'image_style' => 'carousel',
          'lightbox_ready' => FALSE,
          'markup' => 0,
          'media_switch' => 'colorbox-switch',
          'mousewheel' => 0,
          'nested_optionset' => '',
          'nested_slick' => FALSE,
          'nested_style' => '',
          'optionset' => 'carousel',
          'optionset_thumbnail' => '',
          'overridables' => array(
            'arrows' => 0,
            'autoplay' => 0,
            'dots' => 0,
            'draggable' => 0,
          ),
          'override' => 0,
          'picture' => FALSE,
          'picture_fallback' => '',
          'picture_ready' => FALSE,
          'picture_style' => '',
          'preserve_keys' => FALSE,
          'skin' => '',
          'skin_arrows' => '',
          'skin_dots' => '',
          'skin_thumbnail' => '',
          'slide_caption' => array(
            0 => 0,
            'alt_field' => 0,
            'title_field' => 0,
          ),
          'slide_classes' => '',
          'slide_image' => '',
          'slide_layout' => '',
          'slide_link' => '',
          'slide_overlay' => array(),
          'slide_title' => '',
          'thumbnail_caption' => '',
          'thumbnail_hover' => 0,
          'thumbnail_style' => '',
          'type' => '',
          'use_ajax' => FALSE,
          'view_mode' => '',
          'visible_slides' => '',
        ),
        'type' => 'slick',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_carousel_image',
    'label' => 'Изображение',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 'clipboard',
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 'remote',
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-carousel-title_field'.
  $field_instances['fieldable_panels_pane-carousel-title_field'] = array(
    'bundle' => 'carousel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A field replacing fieldable panel pane title.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => FALSE,
    'settings' => array(
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A field replacing fieldable panel pane title.');
  t('Title');
  t('Изображение');

  return $field_instances;
}
