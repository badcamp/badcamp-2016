(function ($) {
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
  
  Drupal.behaviors.starfield = {
    attach: function(context) {
      
    }
  }

})(jQuery);
