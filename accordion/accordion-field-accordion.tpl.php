<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="field-items row"<?php print $content_attributes; ?>>
    <div class="accordion-items">
      <?php foreach ($items as $delta => $item): ?>
        <?php if (isset($item['entity'])): ?>
          <?php $fields = array_pop($item['entity']['field_collection_item']); ?>
          <h3><?php print $fields['field_accordion_title'][0]['#markup']; ?></h3>
          <div>
            <?php print $fields['field_accordion_text'][0]['#markup']; ?>
          </div>
        <?php endif; ?>
      <?php endforeach; ?>
    </div>
  </div>
</div>
