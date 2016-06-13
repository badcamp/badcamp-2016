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


  $(document).ready(function () {
    // Use document ready because there's no reason to re-build the
    // starfield on ajax.
    // Only show the starfield for the home page
    if ($('body').hasClass('page-home')) {
      new StarField('layout-wrapper').render(60, 4.6);
    }
    //
    var stripeOptions = $('#edit-stripe-donation-options');
    stripeOptions.attr('data-equalizer', true);
    stripeOptions.attr('data-equalizer-on', 'medium');
    stripeOptions.find('.form-item').attr('data-equalizer-watch', true);
    $('#edit-stripe-donation-options').foundation();
  });

})(jQuery, window.StarField);
