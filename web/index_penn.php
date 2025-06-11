<?php 
   require_once('inc/header.inc');
   ?>
<title>Bootstrap Library v1</title>
</head>
<body class="version2">
   <header role="banner">
      <?php 
         require_once('inc/socialheaderv1.inc');
         require_once('inc/campusmenuv1.inc');
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
                           require_once('inc/quicksearch_penn.inc');
                           ?>	
<h2>Hours</h2>

<script src="https://code.jquery.com/jquery-3.7.1.min.js"></script> 
<script src="https://cdn.jsdelivr.net/npm/bootstrap@3.4.1/js/tab.js"></script>
<script src="https://sunybroome.libcal.com/js/hours_full.js?002"></script>

<div class="hours-all">
  <div id="s-lc-fhw5196" class="table-responsive"></div>
</div>
<script>
    $(function(){ 
    var slcfhw5196 = new $.LibCalHoursFull( $("#s-lc-fhw5196"), { iid: 5196, months: 3, systemTime: false }); 
    });
</script> 

    <div class="row g-0 mt-0 d-flex mb-4">
      <div class="col-12 col-sm-6 col-md-4 front--help">
        <div class="text-bg-primary p-4 p-lg-5 text-light h-100">
          <h2 class="fs-4 text-white">Research Help and Tools</h2>
          <p class="mb-5">Guides and tools to help you find journal articles, research datasets, newspapers, eBooks and more.</p>
          <div class="text-center">
            <ul class="list-unstyled">
              <li><a href="/databases" class="btn btn-outline-light btn-lg mb-4">Databases A-Z</a></li>
              <li><a href="/guides/subject" class="btn btn-outline-light btn-lg mb-4">Subject Guides</a></li>
              <li><a href="/guides/course" class="btn btn-outline-light btn-lg mb-0">Course Guides</a></li>
            </ul>
          </div>
        </div>
      </div>

      <div class="col-12 col-sm-6 col-md-8 front--experts">
        <div class="text-bg-light p-4 p-lg-5 h-100">
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
    </div>
  
          </div>
</div>



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

