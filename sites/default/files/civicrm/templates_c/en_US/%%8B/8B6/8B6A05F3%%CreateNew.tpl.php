<?php /* Smarty version 2.6.26, created on 2012-09-06 13:11:51
         compiled from CRM/Block/CreateNew.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'ts', 'CRM/Block/CreateNew.tpl', 28, false),)), $this); ?>
<div class="block-civicrm">
<div id="crm-create-new-wrapper">
	<div id="crm-create-new-link"><span><div class="icon dropdown-icon"></div><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Create New<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></div>
		<div id="crm-create-new-list" class="ac_results">
			<div class="crm-create-new-list-inner">
			<ul>
			<?php $_from = $this->_tpl_vars['shortCuts']; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array'); }if (count($_from)):
    foreach ($_from as $this->_tpl_vars['short']):
?>
				    <li><a href="<?php echo $this->_tpl_vars['short']['url']; ?>
" class="crm-<?php echo $this->_tpl_vars['short']['ref']; ?>
"><?php echo $this->_tpl_vars['short']['title']; ?>
</a></li>
			    <?php endforeach; endif; unset($_from); ?>
			</ul>
			</div>
		</div>
	</div>
</div>
<div class='clear'></div>
<?php echo '
<script>

cj(\'body\').click(function() {
	 	cj(\'#crm-create-new-list\').hide();
	 	});
	
	 cj(\'#crm-create-new-list\').click(function(event){
	     event.stopPropagation();
	 	});

cj(\'#crm-create-new-list li\').hover(
	function(){ cj(this).addClass(\'ac_over\');},
	function(){ cj(this).removeClass(\'ac_over\');}
	);

cj(\'#crm-create-new-link\').click(function(event) {
	cj(\'#crm-create-new-list\').toggle();
	event.stopPropagation();
	});

</script>

'; ?>
