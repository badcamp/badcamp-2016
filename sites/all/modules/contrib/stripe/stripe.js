(function ($) {
  if (typeof Drupal.ajax !== 'undefined') {
    // Keep a reference to the original Drupal.ajax.prototype.beforeSerialize.
    var originalBeforeSerialize = Drupal.ajax.prototype.beforeSerialize;
    /**
     * Handler for the form serialization.
     *
     * Replace original Drupal.ajax.prototype.beforeSerialize to prevent (ajax)
     * submission of card data. This cannot be done using Drupal.detachBehaviors
     * because behaviors are not able to cancel a submission.
     */
    Drupal.ajax.prototype.beforeSerialize = function (element, options) {
      // Use newer jQuery's .prop() when available.
      var propFn = (typeof $.fn.prop === 'function') ? 'prop' : 'attr';
      // Prevent serialisation of form with card data (ie. with enabled stripe
      // inputs elements).
      if (this.form && $(':input[data-stripe]:enabled', this.form).length) {
        // Disable Stripe input elements (and add disabled class on wrapper).
        $(':input[data-stripe]:enabled', this.form)[propFn]('disabled', true)
          .closest('.form-item').addClass('form-disabled');
        // Create the token (unless the form is flagged to prevent it).
        if (!$.data(this, 'stripeNoToken')) {
          // Set publishable key *stored in the form element).
          Stripe.setPublishableKey(this.form.data('stripeKey'));
          Stripe.createToken(Drupal.behaviors.stripe.extractTokenData(this.form), $.proxy(Drupal.ajax.prototype.beforeSerializeStripeResponseHandler, this));
          // Cancel this submit, the form will be re-submitted in token creation
          // callback.
          return false;
        }
      }
      // Call original Drupal.ajax.prototype.beforeSerialize.
      originalBeforeSerialize.apply(this, arguments);
    }

    /**
     * Stripe response handler for intercepted (ajax) form submission.
     *
     * @see Drupal.ajax.prototype.beforeSerialize().
     */
    Drupal.ajax.prototype.beforeSerializeStripeResponseHandler = function(status, response) {
      Drupal.behaviors.stripe.processStripeResponse(status, response, this.form);
      // Always re-submit the form through AJAX, even if token can not be created.
      this.form.ajaxSubmit(this.options);
    }
  }

  Drupal.behaviors.stripe = {
    /**
     * Attach Stripe behavior to form elements.
     *
     * @param context
     *   An element to attach behavior to.
     * @param settings
     *   An object containing settings for the current context.
     */
    attach: function (context, settings)  {
      // Use newer jQuery's .prop() when available.
      var propFn = (typeof $.fn.prop === 'function') ? 'prop' : 'attr';
      // Process all Stripe form elements, even if already processed (ie. not
      // using .once() and context is intentional).
      $('*[data-stripe-key]').each(function() {
        // Ensure the current element has an DOM ID.
        if (!this.id) {
          $(this)[propFn]('id', 'stripe-' + Drupal.behaviors.stripe.id++);
        }
        var id = this.id;
        // Retrieve the stripe key for this element.
        var key = $(this).attr('data-stripe-key');
        // Get the form containing the Stripe fieldset.
        $(this).closest('form')
          // Enable Stripe input elements (and remove matching classes).
          .find(':input[data-stripe]', this)
            [propFn]('disabled', false)
            .closest('.form-item')
            	.removeClass('form-disabled')
            .end()
          .end()
          // Only do the following once for each form.
          .once('stripe')
          // Register submit handler.
          .submit(Drupal.behaviors.stripe.stripeSubmitHandler)
          // Keep track of which button is clicked.
          .find('input[type="submit"], button[type="submit"]')
            .click(Drupal.behaviors.stripe.stripeButtonClickHandler)
          .end()
          // Store the key in the form element, to be used in our submit handlers.
          .data('stripeKey', key)
      });
    },
    detach: function(context, settings, trigger) {
      if (trigger === 'unload') {
        // Remove error message for unloaded Stripe inputs.
        $(':input[data-stripe].error', context).each(function(){
        	if (this.id) {
        	  $('#' + this.id + '-error').remove();
        	}
        });
      }
    },
    /**
     * Extract token creation data from a form.
     *
     * Stripe.createToken() should support the form as first argument and pull the information
     * from inputs marked up with the data-stripe attribute. But it does not seems to properly
     * pull value from <select> elements for the 'exp_month' and 'exp_year' fields.
     *
     */
    extractTokenData: function(form) {
    	var data = {};
      $(':input[data-stripe]').not('[data-stripe="token"]').each(function() {
    	  var input = $(this);
    	  data[input.attr('data-stripe')] = input.val();
    	});
    	return data;
    },
    /**
     * Submit handler for a form containing Stripe inputs.
     *
     * This function expect 'this' to be bound to the submitted form DOM element.
     *
     * @see https://stripe.com/docs/stripe.js#createToken
     *
     * @param event
     *   The triggering event object.
     */
    stripeSubmitHandler: function (event) {
      // Clear out all (Stripe) errors.
      $(':input[data-stripe].error', this).removeClass('error');
      $('.stripe-errors').remove();

      // Disable Stripe input elements (and add disabled class on wrapper).
      var propFn = (typeof $.fn.prop === 'function') ? 'prop' : 'attr';
      $(':input[data-stripe]:enabled', this.form)[propFn]('disabled', true)
        .closest('.form-item').addClass('form-disabled');

      // Create the token (unless the form is flagged to prevent it).
      if (!$.data(this, 'stripeNoToken')) {
        // Set publishable key.
        Stripe.setPublishableKey($.data(this, 'stripeKey'));
        Stripe.createToken(Drupal.behaviors.stripe.extractTokenData(this), $.proxy(Drupal.behaviors.stripe.stripeResponseHandler, this));
        // Prevent the form from submitting with the default action.
        event.preventDefault();
        return false;
      }
    },
    /**
     * No token button click handler.
     *
     * Set a flag on the form to prevent generation of a Stripe token on submit.
     *
     * @param event
     *   The triggering event object.
     */
    stripeButtonClickHandler: function (event) {
      if ($(this).hasClass('stripe-no-token')) {
        $(this).closest('form').data('stripeNoToken', true);
      }
      else {
        $(this).closest('form').data('stripeButton', this);
      }
    },
    /**
     * Stripe (create token) response handler.
     *
     * This function expect 'this' to be bound to the submitted form DOM element.
     *
     * @see https://stripe.com/docs/stripe.js#createToken
     *
     * @param status
     *   The response status code, as described in Stripe API doc.
     * @param response
     *   The response object.
     */
    stripeResponseHandler: function(status, response) {
      Drupal.behaviors.stripe.processStripeResponse(status, response, this);
      if (response.error) {
        // Re-enable Stripe input elements (and remove disabled class on wrapper).
        var propFn = (typeof $.fn.prop === 'function') ? 'prop' : 'attr';
        $(':input[data-stripe]:disabled', this)[propFn]('disabled', false)
          .closest('.form-item').removeClass('form-disabled');
      }
      else {
        // Act as though the clicked button were submitted.
        var button = $.data(this, 'stripeButton');
        $(this).prepend('<input type="hidden" name="' + button.name + '" value="' + button.value + '" />');
        this.submit();
      }
    },
    /**
     * Process a Stripe (create token) response for a given form.
     *  - Prepend error message to the form.
     *  - Set hidden token input value. 
     *
     * @param status
     *   The resposne status code, as described in Stripe API doc.
     * @param response
     *   The response object.
     * @param form
     *   The form used to create the token.
     */
    processStripeResponse: function(status, response, form, errorContainer) {
      if (response.error) {
      	var propFn = (typeof $.fn.prop === 'function') ? 'prop' : 'attr';
      	var errorElement = $(':input[data-stripe=' + response.error.param + ']', form);
      	if (errorElement.length === 0) {
      	  errorElement = $('*[data-stripe-key]', form);
      	}
      	// Ensure the error element has an ID
        var id = errorElement[propFn]('id');
        if (!id) {
        	id = 'stripe-' + Drupal.behaviors.stripe.id++;
          errorElement[propFn]('id', id);
        }      	
        
        if (typeof errorContainer === 'undefined') {
          errorContainer = form;
        }
        // Prepend error message to the container, wrapped in a error div.
        $('<div class="stripe-errors messages error"></div>')
        	.text(Drupal.t(response.error.message))
        	[propFn]('id', id + '-error')
        	.prependTo(form);
        // Add error class to the corresponding form element.
        errorElement.addClass('error');
      	// Insert empty value in token.
      	$(':input[data-stripe=token]', form).val(null);
      } else {
        // Use newer jQuery's .prop() when available.
        var propFn = (typeof $.fn.prop === 'function') ? 'prop' : 'attr';
        // Insert the token into the form and enabled its element so it gets submitted to the server.
        $(':input[data-stripe=token]', form)[propFn]('disabled', false).val(response.id);
      }
    },
    /**
     * A unique ID to be assigned to Stripe container element without a DOM ID.
     */
    id: 0
  };
})(jQuery);