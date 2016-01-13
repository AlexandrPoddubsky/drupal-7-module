<?php

/**
 * @file
 * Renders out HTML for spot-im comments, this includes the sitename and node id
 * to render a unique custom id.
 *
 * Example data-post-id: "spot-im-frame-uid-shape-14589"
 *
 * Available variables:
 * - $spot_im_nid: The generated Spot.im quasi-unique id, based on node id.
 * - $spot_im_site_name: Site name, lower case, dashed.
 *
 * @ingroup themeable
 */
?>

<div id="spot-im-frame-inpage" class="spot-im spot-im-comments" data-post-id="spot-im-frame-uid-<?php print $spot_im_site_name; ?>-<?php print $spot_im_nid; ?>"></div>