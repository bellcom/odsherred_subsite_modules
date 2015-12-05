<?php
/**
 * @file
 * subsite_event_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function subsite_event_calendar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function subsite_event_calendar_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function subsite_event_calendar_node_info() {
  $items = array(
    'od_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Create events to be shown on the event calendar.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
