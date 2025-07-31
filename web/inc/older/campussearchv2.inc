
<section class="ml-auto d-none d-lg-block d-xl-block region region-header-ua-utilities">

<div class="region region-nav-search">
   <div class="block-psul-search block-psul-search-popup-search-block">
      <div class="dropdown">
         <button class="btn btn-link dropdown-toggler py-1 px-2" type="button" data-bs-toggle="dropdown" aria-expanded="false" data-bs-auto-close="outside">
         <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="currentColor" class="bi bi-search" viewBox="0 0 16 16">
  <path d="M11.742 10.344a6.5 6.5 0 1 0-1.397 1.398h-.001q.044.06.098.115l3.85 3.85a1 1 0 0 0 1.415-1.414l-3.85-3.85a1 1 0 0 0-.115-.1zM12 6.5a5.5 5.5 0 1 1-11 0 5.5 5.5 0 0 1 11 0"/>
</svg>
<span class="visually-hidden"> Start Search</span>
         </button>
         <div class="campussearch dropdown-menu dropdown-menu-end p-2 p-md-3">
<p>Search sunybroome.edu</p>

<form name="campussearch" id="campussearch " class="input-group input-group-lg" role="search" method="get" action="https://sunybroome.edu/?s=" onsubmit="searchCampus();">
      
    <div class="input-group input-group-lg">
            <input type="search" value="" name="s" class="form-control"  placeholder="Search..." id="campusQueryTemp"  aria-required="true" aria-label="Search sunybroome">
   </div>
  
        <div class="edit-actions">
            <input type="submit" class="btn btn-info" value="Search" aria-label="Search" onclick="searchCampus()" />
        </div>
	
</form>
 <div class="search-links">
	            <a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&lang=en">Search for articles and books instead</a>		
</div>	

 </section>
    
         </div><!-- /dropdown-menu  -->
         </div><!-- /dropdown  -->
      </div><!-- / popupsearchblock -->
   </div><!-- / region-nav-search -->



    <button class="navbar-toggler campusbutton" type="button" data-bs-toggle="offcanvas" data-bs-target="#campusNavDropdown" aria-controls="campusNavDropdown" aria-expanded="false" aria-label="Toggle navigation">              
            <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="currentColor" class="bi bi-list" viewBox="0 0 16 16">
              <path fill-rule="evenodd" d="M2.5 12a.5.5 0 0 1 .5-.5h10a.5.5 0 0 1 0 1H3a.5.5 0 0 1-.5-.5m0-4a.5.5 0 0 1 .5-.5h10a.5.5 0 0 1 0 1H3a.5.5 0 0 1-.5-.5m0-4a.5.5 0 0 1 .5-.5h10a.5.5 0 0 1 0 1H3a.5.5 0 0 1-.5-.5"/>
            </svg>
            <span class="icon-text">campus</span>
    </button>

<script>
function searchCampus () {
    document.getElementById("campusQueryTemp").value.replace(/[,]/g, " ");
  document.forms["campussearch"].submit();
}

</script>

</nav><!-- /container -->

</div><!-- secondnav-->
