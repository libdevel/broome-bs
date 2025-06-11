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
      <link rel="stylesheet" href="css/style.css">

<style>

.social-links-wrap {float:left; padding-top: 15px;
    padding-bottom: 15px;}

.campus-logo {float:left;}

.slinks, .campusnav-links {float:right;}


.featured-image-and-title {background-color: #000; background-image: url("/images/NetworkBlack.png"); min-height: auto;}

</style>

 <title>Bootstrap Library BS 3</title>
   </head>
   <body class="versionbs3">
<?php 
	require_once('inc/socialheaderbs3.inc');
?>


<?php 
	require_once('inc/campusmenubs3.inc');
?>

 

<div class="featured-image-and-title clearfix">
    <div class="media-wrap container">							
            <div class="big-title-wrap ">
	            <h1 class="pg-title">Library</h1>
            </div><!-- big-title-wrap-->
    </div><!-- media-wrap-->
</div><!-- featured-image-->


<div class="thirdnav">
<nav class="navbar libnav navbar-expand-lg bg-body-tertiary">
   <div class="container">
   <div class="library-logo">
   </div>
<?php 
	require_once('inc/librarymenubs3.inc');
?>
</div><!-- /thirdnav -->

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
      <footer class="footer" role="contentinfo">
         <?php 
            require_once('inc/cankle.inc');
            ?>
         <?php 
            require_once('inc/footer.inc');
            ?>
<div class=" text-nowrap rounded-3 p-1 m-3 text-bg-dark opacity-75">
  <div class="d-block d-sm-none">Extra Small (xs) (<576px)</div>
  <div class="d-none d-sm-block d-md-none">Small (sm) (>576px)</div>
  <div class="d-none d-md-block d-lg-none">Medium (md) (>768px)</div>
  <div class="d-none d-lg-block d-xl-none">Large (lg) (>992 px)</div>
  <div class="d-none d-xl-block d-xxl-none">X-Large (xl) (>1200px)</div>
  <div class="d-none d-xxl-block">XX-Large (xxl) (>1400px)</div>
</div>
      </footer>
   </body>
</html>

