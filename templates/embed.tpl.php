<?php
/**
 * @file
 * Renders out HTML for spot-im comments, this includes node id
 * to render a unique custom id.
 *
 * Example data-post-id: "spot-im-inpage-uid-14589"
 *
 * Available variables:
 * - $spot_im_nid: The generated Spot.im quasi-unique id, based on node id.
 *
 * @ingroup themeable
 */
?>
<div class="spot-im-frame-inpage"
     data-post-id="spot-im-frame-uid-<?php echo $spot_im_nid; ?>">
</div>