<?php /* Smarty version 2.6.26, created on 2012-09-06 13:28:31
         compiled from CRM/Custom/Form/ContactReference.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('modifier', 'replace', 'CRM/Custom/Form/ContactReference.tpl', 30, false),array('modifier', 'cat', 'CRM/Custom/Form/ContactReference.tpl', 31, false),array('modifier', 'regex_replace', 'CRM/Custom/Form/ContactReference.tpl', 31, false),array('block', 'ts', 'CRM/Custom/Form/ContactReference.tpl', 52, false),)), $this); ?>
<?php echo '
<script type="text/javascript">
cj( function( ) {
    var url       = "'; ?>
<?php echo $this->_tpl_vars['customUrls'][$this->_tpl_vars['element_name']]; ?>
<?php echo '";
    var custom    = "'; ?>
#<?php echo ((is_array($_tmp=((is_array($_tmp=$this->_tpl_vars['element_name'])) ? $this->_run_mod_handler('replace', true, $_tmp, ']', '') : smarty_modifier_replace($_tmp, ']', '')))) ? $this->_run_mod_handler('replace', true, $_tmp, '[', '_') : smarty_modifier_replace($_tmp, '[', '_')); ?>
<?php echo '";
    var custom_id = "'; ?>
input[name=\"<?php echo ((is_array($_tmp=((is_array($_tmp=$this->_tpl_vars['element_name'])) ? $this->_run_mod_handler('cat', true, $_tmp, '_id') : smarty_modifier_cat($_tmp, '_id')))) ? $this->_run_mod_handler('regex_replace', true, $_tmp, '/\]_id$/', '_id]') : smarty_modifier_regex_replace($_tmp, '/\]_id$/', '_id]')); ?>
\"]<?php echo '";

    var customObj   = cj(custom);
    var customIdObj = cj(custom_id);
    
    if ( !customObj.hasClass(\'ac_input\') ) {
        customObj.autocomplete( url, 
            { width : 250, selectFirst : false, elementId: custom,  matchContains: true, formatResult: '; ?>
validate<?php echo ((is_array($_tmp=((is_array($_tmp=((is_array($_tmp=$this->_tpl_vars['element_name'])) ? $this->_run_mod_handler('replace', true, $_tmp, ']', '') : smarty_modifier_replace($_tmp, ']', '')))) ? $this->_run_mod_handler('replace', true, $_tmp, '[', '_') : smarty_modifier_replace($_tmp, '[', '_')))) ? $this->_run_mod_handler('replace', true, $_tmp, '-', '_') : smarty_modifier_replace($_tmp, '-', '_')); ?>
<?php echo '
            }).result( 
                function(event, data ) {
                    customIdObj.val( data[1] );
                }
        );
        customObj.click( function( ) {
            customIdObj.val(\'\');
	    }); 
     }
});

function validate'; ?>
<?php echo ((is_array($_tmp=((is_array($_tmp=((is_array($_tmp=$this->_tpl_vars['element_name'])) ? $this->_run_mod_handler('replace', true, $_tmp, ']', '') : smarty_modifier_replace($_tmp, ']', '')))) ? $this->_run_mod_handler('replace', true, $_tmp, '[', '_') : smarty_modifier_replace($_tmp, '[', '_')))) ? $this->_run_mod_handler('replace', true, $_tmp, '-', '_') : smarty_modifier_replace($_tmp, '-', '_')); ?>
<?php echo '( Data, position ) {
  if ( Data[1] == \'error\' ) {
    cj(this.elementId).parent().append("<span id=\'"+ (this.elementId).substr(1) +"_error\' class=\'hiddenElement messages crm-error\'>" + "'; ?>
<?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Invalid parameters for contact search.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?><?php echo '" + "</span>");
    cj(this.elementId + \'_error\').fadeIn(800).fadeOut(5000, function( ){ cj(this).remove(); });
    Data[1] = \'\';
  }
}
</script>
'; ?>