<?php
/**
 * @file
 * Block grid views style plugin.
 *
 * Coding standards ignore statements are to fix views/drupalcs mismatch
 * on class and method naming.
 */

/**
 * Block grid views style plugin.
 */
// @codingStandardsIgnoreStart
class badcamp_theme_views_plugin_block_grid extends views_plugin_style_default {
// @codingStandardsIgnoreEnd
  /**
   * {@inheritdoc}
   */
  // @codingStandardsIgnoreStart
  public function option_definition() {
    // @codingStandardsIgnoreEnd
    $options = parent::option_definition();
    $options['grid'] = array(
      'default' => array(
        'small' => NULL,
        'medium' => NULL,
        'large' => NULL,
      ),
    );
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  // @codingStandardsIgnoreStart
  public function options_form(&$form, &$form_state) {
    // @codingStandardsIgnoreEnd
    parent::options_form($form, $form_state);
    $form['grid'] = array(
      '#type' => 'fieldset',
      '#title' => t('Grid'),
      '#tree' => TRUE,
    );
    $form['grid']['small'] = array(
      '#type' => 'numberfield',
      '#title' => t('Small Grid Blocks'),
      '#default_value' => $this->options['grid']['small'],
    );
    $form['grid']['medium'] = array(
      '#type' => 'numberfield',
      '#title' => t('Medium Grid Blocks'),
      '#default_value' => $this->options['grid']['medium'],
    );
    $form['grid']['large'] = array(
      '#type' => 'numberfield',
      '#title' => t('Large Grid Blocks'),
      '#default_value' => $this->options['grid']['large'],
    );
  }

}
