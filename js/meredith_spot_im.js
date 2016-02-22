// Spot.IM, vendor provided event code. Provided via Idan Mitrofanov.
// Primarily used to allow Spot.IM specific styling using body.spot-im-newsfeed.
// See also theme specific _spot-im-scss.
document.addEventListener('spot-im-newsfeed-load', function(event) {
  document.getElementsByTagName('body')[0].className+=' spot-im-newsfeed';
}, false);
