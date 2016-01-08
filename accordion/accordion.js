(function($) {
  Drupal.behaviors.accordion = {
    attach: function (context, settings) {
      $('.accordion-items', context).accordion({heightStyle : "content"});
    }
  };
})(jQuery);
