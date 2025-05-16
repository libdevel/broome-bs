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
<!--
    <script defer data-domain="very.inept.quest" src="https://implausible.info/js/script.outbound-links.js"></script>
    <script>window.plausible = window.plausible || function() { (window.plausible.q = window.plausible.q || []).push(arguments) }</script>
-->


<!--  sb.dev -->
<script defer data-domain="dev.sunybroome.dev" src="https://implausible.info/js/script.outbound-links.js"></script>
<script>window.plausible = window.plausible || function() { (window.plausible.q = window.plausible.q || []).push(arguments) }</script>

   </head>
   <body class="version1">
      <?php 
         require_once('inc/socialheader.inc');
         ?>
      <div class="secondnav">
      <nav class="navbar libnav navbar-expand-lg bg-body-tertiary">
      <div class="container">
         <div class="library-logo">
            <h1><a class="navbar-brand" href="https://broome-bs1.ddev.site/">Library</a></h1>
         </div>
         <?php 
            require_once('inc/librarymenu.inc');
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
                           require_once('inc/quicksearch1.inc');
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
      </footer>
   </body>
</html>

