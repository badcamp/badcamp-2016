/* Implement custom javascript here */

(function ($) {

  Drupal.behavior.foundation = {
    attach: function(context, settings) {
      $(context).foundation();
    },
    detach: function(context, settings) {
      $(context).foundation();
    }
  }

  
})(jQuery);
