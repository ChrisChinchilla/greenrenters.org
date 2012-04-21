// $Id: ajax_slideshow.js,v 1.5 2010/02/25 22:41:00 udig Exp $

/**
 * ajax_slideshow js code. basically it iterates all the nids at the page loading each node using ajax call.
 */
 
var currentPane = -1;
var timeout;
var autoLoadTimeout = new Array();

var tabs_selector = '.ajax_slideshow div.as-tabs .view-content';
var tab_selector = 'a.as-tab';
var tabs_tab_selector = tabs_selector + ' ' + tab_selector;
var panes_selector = '.ajax_slideshow div.as-panes';
var pane_selector = 'div';
var panes_pane_selector = panes_selector + '>' + pane_selector;

/**
 * First step : Initialization of the slideshow
 */
Drupal.behaviors.ajax_slideshow = function() {
  prepSlideshow();
  addEffects();
  initTabs();
}

/**
 * Adding the custom effects, creating the panes placeholders, performing peloading 
 */
function prepSlideshow(){
  // set absolutly positioned panes for certain effects
  var conditional_class = "";
  if (Drupal.settings.ajax_slideshow.effect == "myfade" || Drupal.settings.ajax_slideshow.effect == "myslide") {
    var conditional_class = " absolute_pane"; 
  } 
  // adding dynamically all the panes based on the count of the tabs
  $(tabs_tab_selector).each( function(i){ 
    $(panes_selector).append('<div class="pane' + conditional_class + '" ></div>');
  });
  // perform ajax preloading - must be done after panes were added.
  performPreloading();
  // When any hyperlink is clicked... 
  $("a").click(function () {
    // Cancel all pending auto loading timeouts calls to prevent navigation slowdown.    
    for (i in autoLoadTimeout) {
      clearTimeout(autoLoadTimeout[i]);
    }
  });
  $(tabs_tab_selector).click(function () {
    resumePreloading();
  });
}

/**
 * Performs the smart preloading of the slideshow (only empty panes are being preloaded) 
 */
function performPreloading(){
  if (!Drupal.settings.ajax_slideshow.perform_preloading) return;
  $(panes_pane_selector+":empty").each( function(i){ 
    // auto loading of the nodes sequintially
    var tab_num = $(panes_pane_selector).index(this);
    var pane = $(panes_pane_selector).eq(tab_num);
    var nid = $(tabs_tab_selector).eq(tab_num).attr("href");
    autoLoadTimeout[i] = setTimeout(function(){
      loadNode(nid, pane, true)
    }, i * Drupal.settings.ajax_slideshow.preloading_threshold);
  });
}

function resumePreloading(){
  setTimeout(function(){
    if ($(panes_pane_selector+":empty").size()>0) {performPreloading();}
    }, Drupal.settings.ajax_slideshow.preloading_threshold);
}

/**
 * Adding manual effects. Specifically supporting custom fade since fadeOutSpeed is not supported on the current tabs version (provided by the JQuery Plugins module)
 */
function addEffects(){
  var effect_duration = Number(Drupal.settings.ajax_slideshow.effect_duration)/2;
  $.tools.addTabEffect("myfade", function(tabIndex) { // this call is based on http://flowplayer.org/tools/forum/25/26274 (first post)
    if (currentPane > -1) { // this is to prevent the hiding effect when the screen initially loads
      this.getPanes().eq(currentPane).fadeOut(effect_duration*0.7)
      this.getPanes().eq(tabIndex).fadeIn(effect_duration);
    } else {
      this.getPanes().eq(tabIndex).show();
    }
    currentPane = tabIndex; // keeping the current pane to hide it on the next step  
    return false;
  });
  $.tools.addTabEffect("myslide", function(tabIndex) { // this call is based on http://flowplayer.org/tools/forum/25/26274 (first post)
    if (currentPane > -1) { // this is to prevent the hiding effect when the screen initially loads
      this.getPanes().eq(currentPane).fadeOut(effect_duration*0.7);
      this.getPanes().eq(tabIndex).slideDown(effect_duration);
    } else {
      this.getPanes().eq(tabIndex).show();
    }
    currentPane = tabIndex; // keeping the current pane to hide it on the next step  
    return false;
  });
}

/**
 * Initiate the tabs plugin, set the necessary callbacks and bindings 
 */
function initTabs(){
  $(tabs_selector).tabs(panes_pane_selector,{ // triggering the tabs utility
    effect: Drupal.settings.ajax_slideshow.effect , 
    onBeforeClick: function(i){
      //clear the next timeout if set (might be a user click)
      clearTimeout(timeout);
      // get the pane to be opened
      var pane = this.getPanes().eq(i);
      loadNode(this.getTabs().eq(i).attr("href"), pane, false); 
    },
    onClick: function(i){
      //set the next slide event
      timeout = setTimeout("changeTab('forward');", Drupal.settings.ajax_slideshow.slide_duration);
    }
  });
  $('.next').click(function(){
    changeTab('forward');
    resumePreloading();
  });
  $('.prev').click(function(){
    changeTab('backward');
    resumePreloading();
  });
}

/**
 * This function loads a node using ajax protocol.
 * @param {Object} nid - node id.
 * @param {Object} pane - the pane to load the node into.
 */
function loadNode(nid, pane, is_async) {
  if (pane.is(":empty")) { // this is essential to prevent unnecessary additional loads of nodes already loaded.
    $.ajax({
      url: Drupal.settings.basePath + 'photos/get/photos/' + nid,
      data: null,
      success: function(data){
        var result = Drupal.parseJson(data);
        pane.html(result['node']);
        return;
      },
      async: (is_async || !Drupal.settings.ajax_slideshow.sync_ajax)
    });
  }
}

/**
 * changing tabs with support for rotation 
 * @param {Object} direction
 */
function changeTab(direction){
  var tabs = $(tabs_selector).tabs();
  // need to identify the last tab since rotate attribute does not function - to be checked.
  var last = $(panes_pane_selector).size() - 1; 
  if (direction == 'forward') {
    if (tabs.getIndex() == last) {
      tabs.click(0);
    }
    else {
      tabs.next();
    }
  }
  else {
    if (tabs.getIndex() == 0) {
      tabs.click(last);
    }
    else {
      tabs.prev();
    }
  }  
}


