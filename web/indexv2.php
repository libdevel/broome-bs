<!doctype html>
<html lang="en" data-bs-theme="auto">
   <head>
      <title>Bootstrap Library</title>
      <meta charset="utf-8">
      <meta name="viewport" content="width=device-width, initial-scale=1">
      <link rel="preconnect" href="https://fonts.googleapis.com">
      <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
      <link href="https://fonts.googleapis.com/css2?family=Barlow+Semi+Condensed:ital,wght@0,100;0,200;0,300;0,400;0,500;0,600;0,700;0,800;0,900;1,100;1,200;1,300;1,400;1,500;1,600;1,700;1,800;1,900&family=Roboto+Slab:wght@100..900&display=swap" rel="stylesheet">
      <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet">
      <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js"></script>
      <script src="js/primo.js"></script>
      <link rel="stylesheet" href="css/style.css">

    <script defer data-domain="very.inept.quest" src="https://implausible.info/js/script.outbound-links.js"></script>
    <script>window.plausible = window.plausible || function() { (window.plausible.q = window.plausible.q || []).push(arguments) }</script>

   </head>
   <body>

<?php 
	require_once('inc/socialheaderv2.inc');
?>

<div class="secondnav">
<nav class="navbar campusnav navbar-expand-lg bg-body-tertiary">
   <div class="container">
   <div class="campus-logo">
      <a class="navbar-brand" href="https://broome-bs1.ddev.site/"><img src="sunybroome-words.png" alt="SUNY Broome Logo" height="27" width="250"></a> 
   </div>
<?php 
	require_once('inc/campusmenu.inc');
?>
</div><!-- secondnav-->
 

<div class="featured-image-and-title has-media style-hdr-default placement-default">
    <div class="media-wrap">							
        <div class="wrap content-wrap">
            <div class="big-title-wrap">
	            <h1 class="pg-title">Library</h1>
            </div><!-- big-title-wrap-->
        </div><!-- wrap content-wrap-->
    </div><!-- media-wrap-->
</div><!-- featured-image-->


<div class="thirdnav">
<nav class="navbar campusnav navbar-expand-lg bg-body-tertiary">
   <div class="container">
   <div class="library-logo">
      <h1><a class="navbar-brand" href="https://broome-bs1.ddev.site/"></a></h1>
   </div>
<?php 
	require_once('inc/librarymenu.inc');
?>


 <div class="content-wrap mt-3"> 
<div class="container main-container">
    <div class="row">

        <div class="col-sm-9 content" role="main">
		     <div class="highlighted">  
				 <div class="region region-highlighted">

		     </div><!-- region -->
		   </div><!-- highlighted -->

 <div class="region-content">
<?php 
	require_once('inc/quicksearch1.inc');
?>
</div> <!-- region-content -->



        </div><!-- col-sm-9 -->


  <?php 
  	require_once('inc/sidenav.inc');
  ?>
   </div><!-- row -->
      </div><!-- main-container -->
  
  <?php 
  	require_once('inc/newsblock.inc');
  ?>

  

     
 </div> <!-- content-wrap -->


	<footer class="footer" role="contentinfo">

		<?php 
			require_once('inc/cankle.inc');
		?>

	 <?php 
	  	require_once('inc/footer.inc');
	  ?>
	</footer>

   </body>
</html>

