<?php


/**
 * Returns HTML for a breadcrumb trail.
 */
function aa_theme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    // Override Drupal core breadcrumb item imploding (no arrow).
    $output .= '<nav id="breadcrumb"><ul class="breadcrumb"><li>' . implode('</li><li>', $breadcrumb) . '</li></ul></nav>';
    return $output;
  }
}
