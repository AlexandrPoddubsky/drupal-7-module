<?php
/**
 * @file
 * Contains the administrative functions of the Spot.IM integration module.
 *
 * This file is included by the core Spot.IM integration module, and includes
 * the settings form.
 */

/**
 * Callback used to create the admin form for configuring Spot.IM.
 *
 * @ingroup forms
 */
function spot_im_admin_settings_form() {
  $form = array();

  $form['spot_im_enabled'] = array(
    '#type' => 'radios',
    '#title' => t('Spot.IM Integration Enabled?'),
    '#options' => array(
      1 => t('Yes'),
      0 => t('No'),
    ),
    '#default_value' => variable_get('spot_im_enabled', 0),
  );

  $form['spot_im_enabled_home_page'] = array(
    '#type' => 'radios',
    '#title' => t('Spot.IM Enabled on Homepage?'),
    '#options' => array(
      1 => t('Yes'),
      0 => t('No'),
    ),
    '#default_value' => variable_get('spot_im_enabled_home_page', 0),
  );

  $form['spot_im_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Company Specific Spot.IM ID'),
    '#default_value' => variable_get('spot_im_id', 'sp_xxxxxxxx'),
    '#description' => t('This is provided from the vendor Example: "sp_xxxxxxxx".'),
  );

  // Originally documented @ http://www.sitepoint.com/building-drupal-7-module-show-latest-nodes/.
  $types = node_type_get_types();
  foreach ($types as $node_type) {
    $nodetypes[$node_type->type] = $node_type->name;
  }

  $form['spot_im_shownodes_nodes_toshow'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Select the nodes to show'),
    '#options' => $nodetypes,
    '#default_value' => variable_get('spot_im_shownodes_nodes_toshow', array('')),
    '#description' => t('All the node types selected will be shown.'),
  );

  return system_settings_form($form);
}