(function($) {
  Drupal.behaviors.elements_tabs = {
    attach: function (context, settings) {
      $('.element-tabs').tabs();
    }
  };
})(jQuery);
