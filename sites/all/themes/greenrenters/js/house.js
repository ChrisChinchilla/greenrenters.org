  $(document).ready(function() {
		
		   var overlay = $('<div id="house_overlay">');
    
		$("#block-block-4").append(overlay);
		$('#house_overlay').html("<p>Find what you are looking for by clicking on relevant rooms of the house.</p>");
    
		
		$("#Table_01").mouseover(function()
		{
			$('#house_overlay').toggle();
		});
		
				$("#Table_01").mouseout(function()
		{
			$('#house_overlay').toggle();
		});
		
		// Preload all rollovers
		$("#Table_01 img.roll").each(function() {

			// Set the original src
			rollsrc = $(this).attr("src");
			rollON = rollsrc.replace(/.png$/ig,"_over.png");

			$("<img>").attr("src", rollON);
			
		});
		
		// Navigation rollovers
		$("#Table_01 a").mouseover(function(){
		
			imgsrc = $(this).children("img").attr("src");
			matches = imgsrc.match(/_over/);
			
			// don't do the rollover if state is already ON
			if (!matches) {
			imgsrcON = imgsrc.replace(/.png$/ig,"_over.png"); // strip off extension
			$(this).children("img").attr("src", imgsrcON);
			}
			
		});
		$("#Table_01 a").mouseout(function(){
			$(this).children("img").attr("src", imgsrc);
		});
		
	
	});