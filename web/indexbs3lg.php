<!doctype html>
<html lang="en" data-bs-theme="auto">
   <head>
      <meta charset="utf-8">

      <meta name="viewport" content="width=device-width, initial-scale=1">
       <meta name='robots' content='noindex, nofollow' />
       <link rel="stylesheet" media="all" href="fonts/bootstrap-icons/font/bootstrap-icons.min.css" />

    <link rel="stylesheet" media="all" href="https://fonts.googleapis.com/css?family=Material+Icons+Sharp#.css" />

      <link rel="preconnect" href="https://fonts.googleapis.com">
      <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
      <link href="https://fonts.googleapis.com/css2?family=Barlow+Semi+Condensed:ital,wght@0,100;0,200;0,300;0,400;0,500;0,600;0,700;0,800;0,900;1,100;1,200;1,300;1,400;1,500;1,600;1,700;1,800;1,900&family=Roboto+Slab:wght@100..900&display=swap" rel="stylesheet">

  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">

  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.7.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js"></script>

      <script src="js/primo.js"></script>

      <link rel="stylesheet" href="css/stylebs3lg.css">


 <title>Bootstrap Library BS 3</title>
   </head>
   <body class="versionbs3">
<?php 
	require_once('inc/socialheaderbs3lg.inc');

	require_once('inc/librarymenubs3lg.inc');
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
	require_once('inc/quicksearchbs3.inc');
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
<!-- #content bottom -->
<div class="cankle clearfix">
   <div class="cankle-container container" >
      <div class="row">
         <div class="col-sm col-md-6 col-lg-3">
<div class="mx-4">
      <?php 
         require_once('inc/cankle1.inc');
         ?>
            </div><!--mx-4 -->
         </div><!-- / cankle 1-->
         <div class="col-sm col-md-6 col-lg-3">
            <div class="mx-4">
      <?php 
         require_once('inc/cankle2.inc');
         ?>
         </div><!--mx-4 -->
         </div><!-- / cankle 2 -->
         <div class="col-sm col-md-6 col-lg-3">
            <div class="mx-4">
      <?php 
         require_once('inc/cankle3.inc');
         ?>
         </div><!--mx-4 -->
         </div><!-- / cankle 3 -->
         <div class="col-sm col-md-6 col-lg-3">
            <div class="mx-4">
      <?php 
         require_once('inc/cankle4.inc');
         ?>
         </div><!--mx-4 -->
         </div><!-- / cankle 4 -->
      </div><!-- / row -->
   </div><!-- / cankle-container container -->
</div><!-- / cankle clearfix -->

      <footer class="footer" role="contentinfo">
         <?php 
            require_once('inc/footer.inc');
            ?>

      </footer>
   </body>
</html>

