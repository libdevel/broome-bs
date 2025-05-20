
      <?php 
            require_once('inc/header.inc');
            ?>
      <title>Bootstrap Library v2</title>
   </head>
   <body class="version2">

<?php 
	require_once('inc/socialheaderv2.inc');
?>

<div class="secondnav">
<nav class="navbar campusnav navbar-expand-lg bg-body-tertiary">
   <div class="container">
   <div class="campus-logo">
      <a class="navbar-brand" href="https://broome-bs1.ddev.site/"><img src="images/sunybroome-words_retina.png" alt="SUNY Broome Logo" height="27" width="250"></a> 
   </div>
<?php 
	require_once('inc/campusmenuv2.inc');
?>
</div><!-- secondnav-->
 

<div class="featured-image-and-title">
    <div class="media-wrap container">							
            <div class="big-title-wrap ">
	            <h1 class="pg-title">Library</h1>
            </div><!-- big-title-wrap-->
    </div><!-- media-wrap-->
</div><!-- featured-image-->


<div class="thirdnav">
<nav class="navbar campusnav navbar-expand-lg bg-body-tertiary">
   <div class="container">
   <div class="library-logo">
   </div>
<?php 
	require_once('inc/librarymenu.inc');
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

<div class=" text-nowrap rounded-3 p-1 m-3 text-bg-dark opacity-75">
  <div class="d-block d-sm-none">Extra Small (xs) (<576px)</div>
  <div class="d-none d-sm-block d-md-none">Small (sm) (>576px)</div>
  <div class="d-none d-md-block d-lg-none">Medium (md) (>768px)</div>
  <div class="d-none d-lg-block d-xl-none">Large (lg) (>992 px)</div>
  <div class="d-none d-xl-block d-xxl-none">X-Large (xl) (>1200px)</div>
  <div class="d-none d-xxl-block">XX-Large (xxl) (>1400px)</div>
</div>
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

