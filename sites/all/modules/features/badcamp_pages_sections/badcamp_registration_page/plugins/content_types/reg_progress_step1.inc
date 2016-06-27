<?php
/**
 * @file
 * Provides progress bar step 1 for user registration process.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Registration progress bar step 1'),
  'description' => t('Displays a progress bar indicating to the user that they are on step 1.'),
  'content_types' => array('reg_progress_one'),
  'category' => t('BADCamp'),
  'render callback' => 'badcamp_registration_page_reg_progress_one_render',
);

/**
 * Render the custom pane.
 */
function badcamp_registration_page_reg_progress_one_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();

  // Initial content is blank.
  $block->title = '';
  $block->content = '';

  // Add in the content.
  $block->content .= '<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<svg width="607px" height="90px" viewBox="0 76 607 90" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink">
    <!-- Generator: Sketch 3.8.3 (29802) - http://www.bohemiancoding.com/sketch -->
    <title>Registration title and steps</title>
    <desc>Created with Sketch.</desc>
    <defs>
        <filter x="-50%" y="-50%" width="200%" height="200%" filterUnits="objectBoundingBox" id="filter-2">
            <feOffset dx="0" dy="2" in="SourceAlpha" result="shadowOffsetOuter1"></feOffset>
            <feGaussianBlur stdDeviation="2" in="shadowOffsetOuter1" result="shadowBlurOuter1"></feGaussianBlur>
            <feColorMatrix values="0 0 0 0 0   0 0 0 0 0   0 0 0 0 0  0 0 0 0.5 0" type="matrix" in="shadowBlurOuter1"></feColorMatrix>
        </filter>
    </defs>
    <g id="Registration" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd">
        <g id="Registration-1" transform="translate(-416.000000, -287.000000)">
            <g id="Registration-title-and-steps" transform="translate(124.000000, 288.000000)">
                <g id="Registration" fill-opacity="1" fill="#59A8C2">
                    <use filter="url(#filter-2)" xlink:href="#text-1"></use>
                    <use xlink:href="#text-1"></use>
                </g>
                <path d="M341,120 L861,120" id="Line" stroke="#979797" stroke-width="2" fill="#D8D8D8"></path>
                <circle id="Oval-1" stroke="#FF9A00" stroke-width="2" fill="#000000" cx="335" cy="120" r="42"></circle>
                <circle id="Oval-1" fill="#213C47" cx="335" cy="120" r="36"></circle>
                <circle id="Oval-1" stroke="#FFFFFF" stroke-width="2" fill="#000000" cx="596" cy="120" r="42"></circle>
                <circle id="Oval-1" stroke="#FFFFFF" stroke-width="2" fill="#000000" cx="856" cy="120" r="42"></circle>
                <text id="2" font-family="Orbitron-Bold, Orbitron" font-size="36" font-weight="bold" letter-spacing="2.34947371" fill="#FFFFFF">
                    <tspan x="580.385263" y="132">2</tspan>
                </text>
                <text id="1" font-family="Orbitron-Bold, Orbitron" font-size="36" font-weight="bold" letter-spacing="2.34947371" fill="#FFFFFF">
                    <tspan x="327.287263" y="132">1</tspan>
                </text>
                <text id="3" font-family="Orbitron-Bold, Orbitron" font-size="36" font-weight="bold" letter-spacing="2.34947371" fill="#FFFFFF">
                    <tspan x="840.457263" y="132">3</tspan>
                </text>
            </g>
        </g>
    </g>
</svg>';

  return $block;
}
