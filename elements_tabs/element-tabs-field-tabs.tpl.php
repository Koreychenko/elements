<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="field-items row"<?php print $content_attributes; ?>>
    <div class="col-md-12">
    <div class="element-tabs">
      <ul>
      <?php foreach ($items as $delta => $item): ?>
        <?php if (isset($item['entity'])): ?>
          <?php $fields = array_pop($item['entity']['field_collection_item']); ?>
          <?php $id = 'element-tabs-'.$fields['#entity']->item_id.'-'.$delta; ?>
          <li><a href="#<?php print $id; ?>"><?php print $fields['field_tabs_title'][0]['#markup']; ?></a></li>
        <?php endif; ?>
      <?php endforeach; ?>
      </ul>
      <?php foreach ($items as $delta => $item): ?>
        <?php if (isset($item['entity'])): ?>
          <?php $fields = array_pop($item['entity']['field_collection_item']); ?>
          <?php $id = 'element-tabs-'.$fields['#entity']->item_id.'-'.$delta; ?>
          <div id="<?php print $id; ?>">
            <?php print $fields['field_tabs_text'][0]['#markup']; ?>
          </div>
        <?php endif; ?>
      <?php endforeach; ?>
    </div>
    </div>
  </div>
</div>
