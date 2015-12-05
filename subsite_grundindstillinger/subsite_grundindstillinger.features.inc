<?php
/**
 * @file
 * subsite_grundindstillinger.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function subsite_grundindstillinger_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function subsite_grundindstillinger_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function subsite_grundindstillinger_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Simpel side'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'subsite_nyhed' => array(
      'name' => t('Subsite nyhed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
    'velkomst' => array(
      'name' => t('Velkomst'),
      'base' => 'node_content',
      'description' => t('Bruges til at lave nye velkomsthilsener på forsiden. Det vil altid være den nyeste, der er publiceret, der vises.'),
      'has_title' => '1',
      'title_label' => t('Velkomst overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
