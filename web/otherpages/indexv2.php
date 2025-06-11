      <?php 
            require_once('inc/header.inc');
            ?>
 <title>Bootstrap Library V2</title>
   </head>
   <body class="version1">
      <?php 
         require_once('inc/socialheaderv2.inc');
         ?>
      <div class="secondnav">
      <nav class="navbar libnav navbar-expand-lg bg-body-tertiary">
      <div class="container">
         <div class="library-logo">
            <h1><a class="navbar-brand" href="https://broome-bs1.ddev.site/">Library</a></h1>
         </div>
         <?php 
            require_once('inc/librarymenuv2.inc');
            ?>
      </div>
      <!-- secondnav-->
      <div class="featured-image-and-title">
         <div class="media-wrap">
            <div class="wrap content-wrap">
               <div class="big-title-wrap container">
                  <div class="row">
                     <div class="col-sm-3 order-sm-2">
                        <div class="hours-block">
                           <h3 class="block-title">Hours</h3>
                           <div id="api_hours_today_iid5196_lid0"></div>
                           <script src="https://sunybroome.libcal.com/api_hours_today.php?iid=5196&lid=0&format=js&systemTime=0&context=object"> </script>
                           <div class="s-lc-w-today-view-all"><a href="hours.php" class="s-lc-w-today-view-link">View all Hours</a></div>
                        </div><!-- hours block-->
                     </div><!--col-sm-3-->
                     <div class="col-sm-8 order-sm-1">
                        <?php 
                           require_once('inc/quicksearch1a.inc');
                           ?>	
                     </div><!--col-sm-8-->

                  </div><!--row-->
               </div><!--big-title-wrap-->
            </div>
         </div>
      </div>
      <div class="content-wrap mt-3">
         <div class="container main-container">
            <div class="row">
               <div class="col-sm-9 content" role="main">
                  <div class="highlighted">
                     <div class="region region-highlighted">
                     </div>
                     <!-- region -->
                  </div>
                  <!-- highlighted -->
                  <div class="region-content">
                     <?php 
                        ?>

                  </div>
                  <!-- region-content -->
               </div>
               <!-- col-sm-9 -->
            </div>
            <!-- row -->
         </div>
         <!-- main-container -->
<div class=" text-nowrap rounded-3 p-1 m-3 text-bg-dark opacity-75">
  <div class="d-block d-sm-none">Extra Small (xs) (<576px)</div>
  <div class="d-none d-sm-block d-md-none">Small (sm) (>576px)</div>
  <div class="d-none d-md-block d-lg-none">Medium (md) (>768px)</div>
  <div class="d-none d-lg-block d-xl-none">Large (lg) (>992 px)</div>
  <div class="d-none d-xl-block d-xxl-none">X-Large (xl) (>1200px)</div>
  <div class="d-none d-xxl-block">XX-Large (xxl) (>1400px)</div>
</div>
         <?php 
            require_once('inc/newsblock.inc');
            ?>
      </div>
      <!-- content-wrap -->
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

