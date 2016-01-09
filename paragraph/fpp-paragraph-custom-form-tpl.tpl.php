<div class="main-form">
  <div class="form-buttons">
    <?php print render($form['buttons']); ?>
  </div>
  <div class="main-form-fields">
    <?php print render($form['title_field']); ?>
    <?php print render($form['field_paragraph_text']); ?>
    <div class="row">
      <div class="col-md-8">
        <?php print render($form['field_paragraph_image']); ?>
      </div>
      <div class="col-md-4">
        <?php print render($form['field_paragraph_image_position']); ?>
      </div>
    </div>
    <div class="additionals">
      <?php print render($form['link']); ?>
      <?php print render($form['additional_settings']); ?>
    </div>
  </div>
</div>
<?php print drupal_render_children($form); ?>
