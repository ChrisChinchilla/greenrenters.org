<?php /* Smarty version 2.6.26, created on 2012-09-06 13:28:48
         compiled from CRM/Event/Form/SearchEvent.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'ts', 'CRM/Event/Form/SearchEvent.tpl', 27, false),array('modifier', 'crmReplace', 'CRM/Event/Form/SearchEvent.tpl', 30, false),array('function', 'cycle', 'CRM/Event/Form/SearchEvent.tpl', 39, false),)), $this); ?>
<div class="crm-block crm-form-block crm-event-searchevent-form-block">
 <h3><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Find Events<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></h3>
  <table class="form-layout">
    <tr class="crm-event-searchevent-form-block-title">
        <td><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['title']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'twenty') : smarty_modifier_crmReplace($_tmp, 'class', 'twenty')); ?>

             <div class="description font-italic">
                    <?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Complete OR partial Event name.<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
             </div>
             <div style="height: auto; vertical-align: bottom"><?php echo $this->_tpl_vars['form']['eventsByDates']['html']; ?>
</div>
        </td>
        <td rowspan="2"><label><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Event Type<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></label>
            <div class="listing-box">
                <?php $_from = $this->_tpl_vars['form']['event_type_id']; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array'); }if (count($_from)):
    foreach ($_from as $this->_tpl_vars['event_val']):
?>
                <div class="<?php echo smarty_function_cycle(array('values' => "odd-row,even-row"), $this);?>
">
                    <?php echo $this->_tpl_vars['event_val']['html']; ?>

                </div>
                <?php endforeach; endif; unset($_from); ?>
            </div>
        </td>
        <td class="right" rowspan="2">&nbsp;<?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formButtons.tpl", 'smarty_include_vars' => array()));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></td>  
    </tr>
  
    <tr>
       <td colspan="2">
       <table class="form-layout-compressed" id="id_fromToDates">
        <tr class="crm-event-searchevent-form-block-start_date">
            <td class="label"><?php echo $this->_tpl_vars['form']['start_date']['label']; ?>
</td>
            <td><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'start_date')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></td>
        </tr>
        <tr class="crm-event-searchevent-form-block-end_date" >
            <td class="label"><?php echo $this->_tpl_vars['form']['end_date']['label']; ?>
</td>
            <td><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'end_date')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></td>             
        </tr>
      </table> 
    </td></tr>  

        <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/Campaign/Form/addCampaignToComponent.tpl", 'smarty_include_vars' => array('campaignContext' => 'componentSearch','campaignTrClass' => 'crm-event-searchevent-form-block-campaign_id','campaignTdClass' => '')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>

  </table>
</div>

<?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/showHide.tpl", 'smarty_include_vars' => array()));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>

<?php echo ' 
<script type="text/javascript">
if ( document.getElementsByName(\'eventsByDates\')[1].checked ) {
   show( \'id_fromToDates\', \'block\' );
}
</script>
'; ?>
 