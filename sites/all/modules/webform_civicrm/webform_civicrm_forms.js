if (Drupal.jsEnabled) {
  $(document).ready( function(){

		$('#edit-nid').change( function(){
			if( $(this).is(':checked') ){
				$('#webform-civicrm-configure-form fieldset div').show(600);
			}else{
				$('#webform-civicrm-configure-form fieldset div').hide(600);
			}
		}).change();
	});
}
