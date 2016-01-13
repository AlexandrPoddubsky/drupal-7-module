<?php

/**
 * @file
 * Contains the administrative functions of the spot.im integration module.
 *
 * This file is included by the core spot.im integration module, and includes
 * the settings form.
 */

/**
 * Callback used to create the admin form for configuring spot.im.
 *
 * @ingroup forms
 */
function meredith_spot_im_admin_settings_form() {
  $form = array();

  $form['meredith_spot_im_enabled'] = array(
    '#type' => 'radios',
    '#title' => t('Spot.IM Integration Enabled?'),
    '#options' => array(
      1 => t('Yes'),
      0 => t('No'),
    ),
    '#default_value' => variable_get('meredith_spot_im_enabled', 0),
  );

  $form['meredith_spot_im_enabled_home_page'] = array(
    '#type' => 'radios',
    '#title' => t('Spot.IM Enabled on Homepage?'),
    '#options' => array(
      1 => t('Yes'),
      0 => t('No'),
    ),
    '#default_value' => variable_get('meredith_spot_im_enabled_home_page', 0),
  );

  $form['meredith_spot_im_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Company Specific Spot.IM ID'),
    '#default_value' => variable_get('meredith_spot_im_id', 'sp_yA3nEEO7'),
    '#description' => t('This is provided from the vendor Example: "sp_yA3nEEO7".'),
  );

  $form['meredith_spot_im_site_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Company Specific Spot.IM Sitename'),
    '#default_value' => variable_get('meredith_spot_im_site_name'),
    '#description' => t('The site name unique identifier such as "shape-magazine".'),
  );

  // Originally documented @ http://www.sitepoint.com/building-drupal-7-module-show-latest-nodes/.
  $types = node_type_get_types();
  foreach ($types as $node_type) {
    $nodetypes[$node_type->type] = $node_type->name;
  }

  $form['meredith_spot_im_shownodes_nodes_toshow'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Select the nodes to show'),
    '#options' => $nodetypes,
    '#default_value' => variable_get('meredith_spot_im_shownodes_nodes_toshow', array('')),
    '#description' => t('All the node types selected will be shown.'),
  );

  return system_settings_form($form);
}