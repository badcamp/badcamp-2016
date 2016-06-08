(function ($, StarField) {
  'use strict';

  /**
   * Attach and detach Foundation JS.
   */
  Drupal.behaviors.foundation = {
    attach: function (context) {
      $(context).foundation();
    },
    detach: function (context) {
      $(context).foundation('destroy');
    }
  };

  // Use document ready because there's no reason to re-build the
  // starfield on ajax.
  $(document).ready(function () {
    // Only show the starfield for the home page
    if ($('body').hasClass('page-home')) {
      new StarField('layout-wrapper').render(60, 4.6);
    }
  });

})(jQuery, window.StarField);
