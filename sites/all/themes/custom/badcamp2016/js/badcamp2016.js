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
    var donationOptions = $('.form-item-stripe-donation-options');
    if (donationOptions.length === 1) {
      var elem = new Foundation.Equalizer(donationOptions, {'data-equalize-by-row': true});
    }
  });

})(jQuery, window.StarField);
