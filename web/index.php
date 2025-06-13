<?php 
   require_once('inc/header.inc');
   ?>
<title>Bootstrap Library v1</title>
</head>
<body class="version2">
   <header role="banner">
      <?php 
         require_once('inc/socialheaderv1.inc');
         require_once('inc/campusmenuv2.inc');
         require_once('inc/featuredimage.inc');
         require_once('inc/librarymenu.inc');
         ?>
   </header>
<main role="main" id="main" class="mb-3">
   <a id="main-content" tabindex="-1"></a>
 <div class="container">
         <div class="row g-0">

            <div class="col-sm-9 content" role="main">
               <div class="highlighted">
                  <div class="region region-highlighted">
                  </div><!-- region -->
               </div><!-- highlighted -->

               <div class="region-content">
                  <?php 
                     require_once('inc/quicksearch1a.inc');
                     ?>
                  <div class=" text-nowrap rounded-3 p-1 m-3 text-bg-dark opacity-75">
                     <div class="d-block d-sm-none">Extra Small (xs) (<576px)</div>
                     <div class="d-none d-sm-block d-md-none">Small (sm) (>576px)</div>
                     <div class="d-none d-md-block d-lg-none">Medium (md) (>768px)</div>
                     <div class="d-none d-lg-block d-xl-none">Large (lg) (>992 px)</div>
                     <div class="d-none d-xl-block d-xxl-none">X-Large (xl) (>1200px)</div>
                     <div class="d-none d-xxl-block">XX-Large (xxl) (>1400px)</div>
                  </div><!--/text-nowrap -->
               </div><!-- region-content -->
            </div><!-- col-sm-9 -->
            <?php 
               require_once('inc/sidenav.inc');
               ?>
         </div><!-- row g-0-->

      <?php 
         require_once('inc/newsblock.inc');
         ?>
   </div><!-- content-wrap -->
</main>
   <footer class="footer" role="contentinfo">
      <?php 
         require_once('inc/cankle.inc');
         require_once('inc/footer.inc');
         ?>
      <div class=" text-nowrap rounded-3 p-1 m-3 text-bg-dark opacity-75">
         <div class="d-block d-sm-none">Extra Small (xs) (<576px)</div>
         <div class="d-none d-sm-block d-md-none">Small (sm) (>576px)</div>
         <div class="d-none d-md-block d-lg-none">Medium (md) (>768px)</div>
         <div class="d-none d-lg-block d-xl-none">Large (lg) (>992 px)</div>
         <div class="d-none d-xl-block d-xxl-none">X-Large (xl) (>1200px)</div>
         <div class="d-none d-xxl-block">XX-Large (xxl) (>1400px)</div>
      </div><!--/text-nowrap -->
   </footer>
</body>
</html>

