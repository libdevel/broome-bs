<div class="secondnav">
<nav class="navbar navbar-expand-xxl">
   <div class="container d-flex">
      <div class="region region-branding">
         <a class="navbar-brand d-flex align-items-center" href="https://sunybroome.edu"><img src="images/sunybroome-words_retina.png" alt="SUNY Broome Logo" height="27" width="250"></a> 
      </div> <!-- /region-branding -->
      <button class="navbar-toggler campusbutton" type="button" data-bs-toggle="offcanvas" data-bs-target="#campusNavDropdown" aria-controls="campusNavDropdown" aria-expanded="false" aria-label="Toggle navigation">
         <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="currentColor" class="bi bi-list" viewBox="0 0 16 16">
            <path fill-rule="evenodd" d="M2.5 12a.5.5 0 0 1 .5-.5h10a.5.5 0 0 1 0 1H3a.5.5 0 0 1-.5-.5m0-4a.5.5 0 0 1 .5-.5h10a.5.5 0 0 1 0 1H3a.5.5 0 0 1-.5-.5m0-4a.5.5 0 0 1 .5-.5h10a.5.5 0 0 1 0 1H3a.5.5 0 0 1-.5-.5"/>
         </svg>
         <span class="icon-text">campus</span>
      </button>
      <div class="offcanvas offcanvas-end" tabindex="-1" id="campusNavDropdown" aria-labelledby="campusNavDropdown">
         <div class="offcanvas-header">
            <h5 class="offcanvas-title" id="offcanvasNavbarDarkLabel">Campus Main Menu</h5>
            <button type="button" class="btn-close" data-bs-dismiss="offcanvas" aria-label="Close"></button>
         </div><!-- /offcanvas-header -->
         <div class="offcanvas-body justify-content-md-end">
            <div class="d-lg-none d-flex">
               <form name="campussearch" id="campussearch " class="input-group input-group-lg" role="search" method="get" action="https://sunybroome.edu/?s=" onsubmit="searchCampus();">
                  <div class="input-group mb-4">
                     <input type="search" value="" name="s" class="form-control"  size="15" maxlength="128" placeholder="Search SUNY Broome" id="campusQueryTemp"  aria-required="true" aria-label="Search sunybroome">
                     <button data-drupal-selector="edit-submit" type="submit" id="edit-submit--2" value="Search" aria-label="Search" class="button js-form-submit form-submit btn" onclick="searchCampus()" >
                        <svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-search" viewBox="0 0 16 16">
                           <path d="M11.742 10.344a6.5 6.5 0 1 0-1.397 1.398h-.001q.044.06.098.115l3.85 3.85a1 1 0 0 0 1.415-1.414l-3.85-3.85a1 1 0 0 0-.115-.1zM12 6.5a5.5 5.5 0 1 1-11 0 5.5 5.5 0 0 1 11 0"/>
                        </svg>
                        <span class="visually-hidden"> Start Search</span>
                     </button>
                  </div><!-- / input-group mb-4 -->
               </form>
            </div><!-- /d-flex  -->
            <ul class="nav navbar-nav justify-content-end">
               <li class="nav-item"><a class="nav-link" href="https://sunybroome.edu/academics-programs/">Academics &amp; Programs</a></li>
               <li class="nav-item"><a class="nav-link" href="https://sunybroome.edu/admissions-costs/">Admissions &amp; Costs</a></li>
               <li class="nav-item"><a class="nav-link" href="https://sunybroome.edu/our-campus/">Our Campus</a></li>
               <li class="nav-item"><a class="nav-link" href="https://sunybroome.edu/about/">About</a></li>
               <li class="nav-item dropdown">
                  <a class="nav-link dropdown-toggle" data-bs-toggle="dropdown" aria-expanded="false" href="https://sunybroome.edu/careers-workforce/" title="">Careers &amp; Workforce<span class="caret"></span></a>   
                  <ul class="dropdown-menu">
                     <li class="nav-item"><a class="dropdown-item" href="https://sunybroome.edu/conted/" >Continuing Education</a></li>
                     <li class="nav-item"><a class="dropdown-item" href="https://sunybroome.edu/careers-workforce/workforce-development/" >Workforce Development</a></li>
                     <li class="nav-item"><a class="dropdown-item" href="https://ce.sunybroome.edu/" >Continuing Education Catalog</a></li>
                     <li class="nav-item"><a class="dropdown-item" href="https://sunybroome.edu/careerservices/" >Career Services</a></li>
                     <li class="nav-item"><a class="dropdown-item" href="https://sunybroome.edu/conted/eac/">Entrepreneurship Assistance</a></li>
                  </ul>
               </li>
               <li class="nav-item"><a class="nav-link" href="https://sunybroome.edu/foundation-alumni/">Foundation &amp; Alumni</a></li>
            </ul>
         </div><!-- /offcanvas body -->
      </div><!-- /offcanvas-->
      <div class="region region-nav-search ml-auto d-none d-lg-block d-xl-block">
         <div class="block-psul-search block-psul-search-popup-search-block">
            <div class="dropdown">
               <button class="btn btn-link dropdown-toggler py-1 px-2" type="button" data-bs-toggle="dropdown" aria-expanded="false" data-bs-auto-close="outside">
                  <svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-search" viewBox="0 0 16 16">
                     <path d="M11.742 10.344a6.5 6.5 0 1 0-1.397 1.398h-.001q.044.06.098.115l3.85 3.85a1 1 0 0 0 1.415-1.414l-3.85-3.85a1 1 0 0 0-.115-.1zM12 6.5a5.5 5.5 0 1 1-11 0 5.5 5.5 0 0 1 11 0"/>
                  </svg>
                  <span class="visually-hidden"> Start Search</span>
               </button>
               <div class="campussearch dropdown-menu dropdown-menu-end p-2 p-md-3">
                  <p>Search sunybroome.edu</p>
                  <form name="campussearch" id="campussearch " class="input-group input-group-lg" role="search" method="get" action="https://sunybroome.edu/?s=" onsubmit="searchCampus();">
                     <div class="input-group input-group-lg">
                        <input type="search" value="" name="s" class="form-control"  placeholder="Search SUNY Broome" id="campusQueryTemp"  aria-required="true" aria-label="Search sunybroome">
                     </div><!-- / input group -->
                     <div class="edit-actions">
                        <input type="submit" class="btn btn-info" value="Search" aria-label="Search" onclick="searchCampus()" />
                     </div><!-- /edit-actions  -->
                  </form>
                  <div class="search-links">
                     <a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&lang=en">Search for articles and books instead</a>		
                  </div><!-- / search-links -->
               </div><!-- /dropdown-menu  -->
            </div> <!-- /dropdown  -->
         </div><!-- / popupsearchblock -->
      </div> <!-- / region-nav-search -->
      <script>
         function searchCampus () {
             document.getElementById("campusQueryTemp").value.replace(/[,]/g, " ");
           document.forms["campussearch"].submit();
         }
         
      </script>
</div><!-- /container  -->
</nav>

</div><!-- secondnav-->


