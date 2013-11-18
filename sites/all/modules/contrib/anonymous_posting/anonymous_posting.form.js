// $Id: comment.js,v 1.5 2007/09/12 18:29:32 goba Exp $

Drupal.behaviors.anonymous_posting = function (context) {
  var parts = new Array("name", "homepage", "mail");
  var cookie = '';
  for (i=0;i<3;i++) {
    cookie = Drupal.anonymous_posting.getCookie('comment_info_' + parts[i]);
    if (cookie != '') {
      $('#node-form input[name="field_anonymous_author[0][' + parts[i] + ']"]:not(.comment-processed)', context)
        .val(cookie)
        .addClass('comment-processed');
    }
  }
};

Drupal.anonymous_posting = {};

Drupal.anonymous_posting.getCookie = function(name) {
  var search = name + '=';
  var returnValue = '';

  if (document.cookie.length > 0) {
    offset = document.cookie.indexOf(search);
    if (offset != -1) {
      offset += search.length;
      var end = document.cookie.indexOf(';', offset);
      if (end == -1) {
        end = document.cookie.length;
      }
      returnValue = decodeURIComponent(document.cookie.substring(offset, end).replace(/\+/g, '%20'));
    }
  }

  return returnValue;
};
