<?php /* Smarty version 2.6.26, created on 2012-09-06 13:11:21
         compiled from CRM/common/action.tpl */ ?>
<?php echo '
<script type="text/javascript">
cj(\'#crm-container\')
    .live(\'click\', function(event) {
        if (cj(event.target).is(\'.btn-slide\')) {
            var currentActive = cj(\'#crm-container .btn-slide-active\');
            currentActive.children().hide();
            currentActive.removeClass(\'btn-slide-active\');
            cj(event.target).children().show();
            cj(event.target).addClass(\'btn-slide-active\');
        } else {
            cj(\'.btn-slide .panel\').hide();
            cj(\'.btn-slide-active\').removeClass(\'btn-slide-active\');	
        } 
});
</script>
'; ?>
