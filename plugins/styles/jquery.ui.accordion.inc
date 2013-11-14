<?php

/**
 * @file
 * Definition of the 'naked' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('jQuery UI Accordion'),
  'description' => t('Display markup for jQuery Accordion'),
  'render region' => 'panels_jquery_ui_accordion_style_render_region',
  'render pane' => 'panels_jquery_ui_accordion_style_render_pane',
  'weight' => -5,
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function panels_jquery_ui_accordion_style_render_region($vars) {
  return implode($vars['panes']);
}

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function panels_jquery_ui_accordion_style_render_pane($vars) {
	dpr($vars);
  return render($vars['content']->content);
}

