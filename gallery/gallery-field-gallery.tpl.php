<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <?php
    $count = 12/$items[0]['#entity']->field_gallery_size['und'][0]['value'];
  ?>
  <?php $i = 0; ?>
    <?php foreach ($items as $delta => $item): ?>
      <?php if ($i == 0): ?>
        <div class="field-items row clearfix"<?php print $content_attributes; ?>>
      <?php endif; ?>
      <div class="col-md-<?php print $count; ?> field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
      <?php $i++; ?>
      <?php if ($i == ($items[0]['#entity']->field_gallery_size['und'][0]['value'])): ?>
        <?php $i = 0; ?>
        </div>
      <?php endif; ?>
    <?php endforeach; ?>
    <?php if ($i > 0): ?>
        </div>
    <?php endif; ?>
  </div>
