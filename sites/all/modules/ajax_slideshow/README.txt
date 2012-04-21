// $Id: README.txt

DESCRIPTION
-----------
This module provides the following features
* ajax based slideshow utilizing jquery transtion effects.
* node-based / views-based control on the contents of each slide.
* view-based control on the slides set (filtering), the slides order (sorting) and the slides navigation aids (tabs).
* Optional tabs - enabling tab per slide. Content is determined by choosing the views fields. Images are supported.
* Optional navigation buttons (previous / next).
* 4 different transition effects to choose from.
* Best performance - using ajax to load the slides gradually.
* preloader option to ensure smooth slides transitions.
* block enbabled and page enabled setups.
* argumnents support when in node-based content source mode.


INSTALLATION
------------
- Place entire ajaxs_slideshow folder in the Drupal modules directory, or relevant site module directory.
- Enable the module inside the modules page using the admin account.
At this point your slideshow is already operational. 
Under the path <www.my-domain.com>/slideshow-front you can view the slideshow. Initially it consists of all published nodes within your site.


CONFIGURATION
-------------
To further control the slideshow do the following:  
- Open the ajax_slideshow admin page and adjust the slideshow by changing the settings as desired. 
Important setting:
Source Content - ajax slideshow allows 2 workmodes: 
a. Node Based - slides content is retrieved using the node_view api. Each slide presents a node either in it's full mode or teaser mode (based on the user selection at the relevant checkbox).
b. Views Based - slides content is retrieved using the views system - specifically the content is brought using the content display of the ajax_slideshow_view. User can add / remove the fields that will be shown at the slide content area.  
- Under the views area, you will find a view named ajax_slideshow_view. 
The tabs display allows you to control:
1. The filter applied on the nodes to be presented.
2. The sort applied on the nodes to be presented.
3. The content of the tabs. Add / Remove fields to adjust the tab content as needed.
Please note that even when the tabs are switched off, filtering and sorting are still controlled by the tabs display of the ajax_slideshow_view.
The content display allows you to control mostly the slides content. This component is active only if the 'Content Source' field inside the ajax slideshow admin page was set to views based.
- optionally use the ajax slideshow block available at the blocks admin page.


THEMEING
--------
Changing the slideshow layout can be done by implementing the following theme function: theme_ajax_slideshow()
As with any other theme function overide - implement the above function at your theme level optionally using the contents of the original function.


IMPORTANT NOTES
---------------
1. Do not change the ajax_slideshow_view view style and/or row style.
2. Keep the filtering, sorting and arguments sections of the content display and the tabs display identical (do not use the override option).
3. Only additions are allowed to the arguments area at the view (do not remove the nid argument).
4. User arguments may only be used when source mode is node-based and the slideshow is not presented using a block.
5. At this stage, the module does not support having more than one ajax slideshow on a page. Please ensure the slideshow exclusiveness when using the ajax slideshow block.
6. non-clean url Drupal installation are not supported at this point.


UPGRADE V1.X TO V2.X
--------------------
V2.x of the ajax slideshow is a complete rewrite of the module using the jquery_plugin module. However upgrade should be fairly straight forward.
1. Copy the new version of the module over the old one 
2. Empty the drupal's cache 
3. Empty the views cache
Your existing slideshow should be up and running.


EXTENSIBLE EFFECTS
------------------
It is possible to add your own js effects to the slideshow. Please check the addEffects function at ajax_slideshow.js to learn how to do that.


CREDIT
------
Ajax Slideshow V2.x is making intensive use of the JQuery Tools foundation http://flowplayer.org/tools/index.html
It makes use of the library provided, reuses html,css and js code and offers sample navigation buttons image provided by the Jquery Tools foundation.
Special thanks to the JQuery Tools foundation.



For any questions / comments please contact us at contact@dofinity.com

enjoy.
