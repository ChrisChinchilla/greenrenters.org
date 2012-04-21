<?php

class views_handler_field_tab_title extends views_handler_field {


  function construct() {
    parent::construct();
    $this->additional_fields['nid'] = 'nid';
    $this->additional_fields['title'] = 'title';
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    //dpm($this);
    $nid = $values->{$this->aliases['nid']};
    
    if (variable_get('ajax_slideshow_enum_tabs', false)){
      foreach($this->view->result as $key=>$value){
        if ($value->nid == $nid){
          break;
        }
      };
      $tab_title = $key+1;
    } else {
      $tab_title = $values->{$this->aliases['title']};
    }
    return '<a class="as-tab" href="'.$nid.'">'.$tab_title .'</a>';
  }
}
