      <?php 
            require_once('inc/header.inc');
            ?>
 <title>Bootstrap Library V3</title>
<style>

.homepage-feature {overflow: hidden;position: relative;}
.homepage-feature--image {bottom: 0;display: none;overflow: hidden;position: absolute;right: 0;}
.homepage-feature--image img {height: 400px; -o-object-fit: cover; object-fit: cover; -o-object-position: top left; object-position: top left;}

/* quicksearch */

.homepage-feature--find {
  --bs-nav-link-padding-x: 2rem;
  background-color: rgba(0,0,0,.8);bottom: 0;font-size: 1rem; left: 0; padding: 1rem;}

.homepage-feature--find .block > h2 {color: #fff;text-transform: uppercase;}
.homepage-feature--find .nav-tabs { /* border-bottom: 2px solid transparent;*/}
.homepage-feature--find .nav-tabs .nav-link.active { color:#000;}
.homepage-feature--find .tab-content {background-color: #fff; min-height: 185px;padding: 1.5rem;}

.homepage-feature--find .nav-tabs .nav-link {border-width: 0;color: #fff; font-size: 1rem;padding: var(--bs-nav-link-padding-y) var(--bs-nav-link-padding-x);}

.homepage-feature--find form { flex-wrap: nowrap; margin-bottom: 1rem;}
.homepage-feature--find .input-group { --bs-border-radius: 4px; align-items: end;}
.homepage-feature--find .form-item-query { flex-grow: 1;}
</style>


   </head>
   <body class="version3">
<header>
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
</header>
<div class="row g-5">
    <div class="col-12 front--featured mt-4">
        <div class="pb-4">
            <div class="homepage-feature clearfix">
              <div class="homepage-feature--image">
                    <!-- image code -->
                    <img class="img-fluid" src="images/hero-background.jpg" height="400" width="1950">
              </div>  
        
      <div class="homepage-feature--find col col-lg-8">
 
                        <?php 
                           require_once('inc/quicksearch_penn.inc');
                           ?>	
                     </div><!--col-sm-8-->
       
</div><!-- homepage-feature -->    
</div><!-- pb-4 -->
</div><!--col-12 -->
</div><!--row-->
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

