<?php 
   require_once('inc/header.inc');
   ?>
<title>Bootstrap Library v1</title>
</head>
<body class="version2">
   <header role="banner">
      <?php 
         require_once('inc/socialheaderv1.inc');
         ?>
      <?php 
         require_once('inc/campusmenuv1.inc');
         require_once('inc/campussearchv1.inc');
         ?>
      <?php 
         require_once('inc/featuredimage.inc');
         require_once('inc/librarymenu.inc');
         ?>
    <div class="mobile_chat">
<script src="https://sunybroome.libanswers.com/load_chat.php?hash=5a4e12972681f2cc6bfa79be6d9c052bb3c3e0467170d18124beef22247496ea"></script>
        <div id="libchat_5a4e12972681f2cc6bfa79be6d9c052bb3c3e0467170d18124beef22247496ea"></div>
    </div>
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
                     require_once('inc/quicksearch1.inc');
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
<!-- #content bottom -->
<div class="cankle clearfix">
   <div class="cankle-container container" >
      <div class="row">
         <div class="col-sm col-md-6 col-xl-3">
<div class="mx-4">
      <?php 
         require_once('inc/cankle1.inc');
         ?>
            </div><!--mx-4 -->
         </div><!-- / cankle 1-->
         <div class="col-sm col-md-6 col-xl-3">
            <div class="mx-4">
      <?php 
         require_once('inc/cankle2.inc');
         ?>
         </div><!--mx-4 -->
         </div><!-- / cankle 2 -->
         <div class="col-sm col-md-6 col-xl-3">
            <div class="mx-4">
      <?php 
         require_once('inc/cankle3.inc');
         ?>
         </div><!--mx-4 -->
         </div><!-- / cankle 3 -->
         <div class="col-sm col-md-6 col-xl-3">
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

