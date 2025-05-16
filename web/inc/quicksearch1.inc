<div class="frontdecor">
<div class="homepagesearch tabs">

<h2>Quicksearch</h2>

<ul class="nav nav-tabs d-none d-lg-flex" id="myTab" role="tablist">
   <li class="nav-item" role="presentation">
<button class="nav-link active" id="#tab-1" data-bs-toggle="tab" data-bs-target="#tab-1" type="button" role="tab" aria-controls="tab-1" aria-selected="true">Everything</button></li>
   <li class="nav-item" role="presentation">
<button class="nav-link" id="#tab-2" data-bs-toggle="tab" data-bs-target="#tab-2" type="button" role="tab" aria-controls="tab-2" aria-selected="false">Articles</button></li>
   <li class="nav-item" role="presentation">
<button class="nav-link" id="#tab-3" data-bs-toggle="tab" data-bs-target="#tab-3" type="button" role="tab" aria-controls="tab-3" aria-selected="false">Books & Media</button></li>
   <li class="nav-item" role="presentation">
<button class="nav-link" id="#tab-4" data-bs-toggle="tab" data-bs-target="#tab-4" type="button" role="tab" aria-controls="tab-4" aria-selected="false">Reserves</button></li>
   <li class="nav-item" role="presentation">
<button class="nav-link" id="#tab-5" data-bs-toggle="tab" data-bs-target="#tab-5" type="button" role="tab" aria-controls="tab-5" aria-selected="false">Other Libraries</button></li>
</ul>


<div class="tab-content accordion border border-top-0" id="myTabContent">

   <div id="tab-1" class="tab-pane show active" role="tabpanel" aria-labelledby="tab-1" tabindex="0">
    <h2 class="accordion-header d-lg-none" id="headingOne">
      <button class="accordion-button" type="button" data-bs-toggle="collapse" data-bs-target="#collapseOne" aria-expanded="true" aria-controls="collapseOne">Everything</button>
    </h2>

      <div id="collapseOne" class="accordion-collapse collapse show  d-lg-block" aria-labelledby="headingOne" data-bs-parent="#myTabContent">
         <div class="accordion-body p-0">
      <p>Search Primo for almost everything:</p>
      <form name="searchFormEv" role="search" id="all-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="searchPrimoEv();" enctype="application/x-www-form-urlencoded; charset=utf-8">
         <input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
         <input type="hidden" name="tab" value="Everything">
         <input type="hidden" name="search_scope" value="MyInst_and_CI">
         <!-- Fixed parameters -->
         <input type="hidden" name="query" id="primoQueryEv">
        <div class="row">
         <div class="col-9">
            <input class="form-control" aria-label="Input search terms here" type="text" id="primoQueryEvTemp" placeholder="Search for articles & books" value="">
         </div><!-- col-md-10 -->
         <div class="col-2">
            <input type="submit" class="btn btn-info" value="Search" id="go1" title="Search" onclick="searchPrimoEv()" />
         </div><!-- col-md-2 -->
        </div><!-- row -->
      </form>
      <p class="library-links"><a href="/library/journals-and-magazines">Journal A-Z list</a> | <a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></p>
         </div><!-- accordion-body -->
      </div><!-- accordion-collapse-->
   </div>
   <!-- tab-1 -->


   <div id="tab-2" class="tab-pane fade" role="tabpanel" aria-labelledby="tab-2" tabindex="0">
      <h2 class="accordion-header d-lg-none" id="headingTwo">
         <button class="accordion-button collapsed" type="button" data-bs-toggle="collapse" data-bs-target="#collapseTwo" aria-expanded="false" aria-controls="collapseTwo">Articles</button>
      </h2>
      <div id="collapseTwo" class="accordion-collapse collapse d-lg-block" aria-labelledby="headingTwo" data-bs-parent="#myTabContent">
         <div class="accordion-body  p-0">
      <p>Search Primo for articles:</p>
      <form name="searchFormArt" role="search" id="article-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="searchPrimoArt();" enctype="application/x-www-form-urlencoded; charset=utf-8">
         <input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
         <input type="hidden" name="tab" value="CentralIndex">
         <input type="hidden" name="search_scope" value="CentralIndex">
         <!-- Fixed parameters -->
         <input type="hidden" name="query" id="primoQueryArt">
 <div class="row">
         <div class="col-md-8">
            <input class="form-control" aria-label="Input search terms here" type="text" id="primoQueryArtTemp" placeholder="Search for articles" value="">
         </div><!-- col-md-10 -->
         <div class="col-md-2">
            <input type="submit" class="btn btn-info" value="Search" id="go2" title="Search" onclick="searchPrimoArt()" />
         </div><!-- col-md-2 -->
        </div><!-- row -->
      </form>
      <div class="library-links"><a href="/library/databases">Search for articles by subject</a> | <a href="/library/journals-and-magazines">Journal A-Z list</a> | <a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></div>
         </div><!-- accordion-body -->
      </div><!-- accordion-collapse-->
   </div><!-- tab-2-->


   <div id="tab-3" class="tab-pane fade" role="tabpanel" aria-labelledby="tab-2" tabindex="0">
      <h2 class="accordion-header d-lg-none" id="headingThree">
         <button class="accordion-button collapsed" type="button" data-bs-toggle="collapse" data-bs-target="#collapseThree" aria-expanded="false" aria-controls="collapseThree">Books & Media</button>
      </h2>
      <div id="collapseThree" class="accordion-collapse collapse d-lg-block" aria-labelledby="headingThree" data-bs-parent="#myTabContent">
         <div class="accordion-body">
      <form name="searchFormCat" role="search" id="book-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="searchPrimoCat();" enctype="application/x-www-form-urlencoded; charset=utf-8">
         <input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
         <input type="hidden" name="tab" value="LibraryCatalog">
         <input type="hidden" name="search_scope" value="MyInstitution">
         <!-- Fixed parameters -->
         <input type="hidden" name="query" id="primoQueryCat">
 <div class="row">
         <div class="col-md-8">
            <input class="form-control" aria-label="Input search terms here" type="text" id="primoQueryCatTemp" placeholder="Search for books and media" value="">
         </div><!-- col-md-10 -->
         <div class="col-md-2">
            <input type="submit" class="btn btn-info" value="Search" id="go3" title="Search" onclick="searchPrimoCat()" />
         </div><!-- col-md-2 -->
</div><!-- row -->
      </form>
      <div class="library-links"><a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?&tab=eBooks&search_scope=eBooks&vid=01SUNY_BCC:01SUNY_BCC&offset=0">Search for ebooks</a> | <a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></div>
   </div>
         </div><!-- accordion-body -->
      </div><!-- accordion-collapse-->
   <!-- tab-3-->


   <div id="tab-4" class="tab-pane fade" role="tabpanel" aria-labelledby="tab-4" tabindex="0">
      <h2 class="accordion-header d-lg-none" id="headingFour">
         <button class="accordion-button collapsed" type="button" data-bs-toggle="collapse" data-bs-target="#collapseFour" aria-expanded="false" aria-controls="collapseFour">Reserves</button>
      </h2>
      <div id="collapseFour" class="accordion-collapse collapse d-lg-block" aria-labelledby="headingFour" data-bs-parent="#myTabContent">
         <div class="accordion-body">
      <form name="searchFormCR" role="search" id="reserves-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="searchPrimoCR();" enctype="application/x-www-form-urlencoded; charset=utf-8">
         <input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
         <input type="hidden" name="tab" value="CourseReserves">
         <input type="hidden" name="search_scope" value="CourseReserves">
         <!-- Fixed parameters -->
         <input type="hidden" name="query" id="primoQueryCR">
 <div class="row">
         <div class="col-md-3">
            <label class="sr-only" for="primoSelectCR">Select:</label>
            <select class="form-control" id="primoSelectCR">
               <option selected="selected" value="any,contains,">All Fields</option>
               <option value="course_code,contains,">Course No.</option>
               <option value="course_instructor,contains,">Instructor</option>
            </select>
         </div><!-- col-md-3 -->
         <div class="col-md-7">
            <input class="form-control" aria-label="Input search terms here" type="text" id="primoQueryCRTemp" placeholder="Search for Reserves" value="" />
         </div><!-- col-md-7 -->
         <div class="col-md-2">
            <input type="submit" class="btn btn-info" value="Search" id="go4" title="Search" onclick="searchPrimoCR()" />
         </div><!-- col-md-2 -->
</div><!-- row -->
      </form>
   </div>
         </div><!-- accordion-body -->
      </div><!-- accordion-collapse-->
   <!--tab-4 -->




   <div id="tab-5" class="tab-pane fade" role="tabpanel" aria-labelledby="tab-5" tabindex="0">
      <h2 class="accordion-header d-lg-none" id="headingFive">
         <button class="accordion-button collapsed" type="button" data-bs-toggle="collapse" data-bs-target="#collapseFive" aria-expanded="false" aria-controls="collapseFive">Other Libraries</button>
      </h2>
      <div id="collapseFive" class="accordion-collapse collapse d-lg-block" aria-labelledby="headingFive" data-bs-parent="#myTabContent">
         <div class="accordion-body">
      <form name="searchFormILL" role="search" id="other-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryILL();" enctype="application/x-www-form-urlencoded; charset=utf-8">
         <input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
         <input type="hidden" name="tab" value="OtherLibraries">
         <input type="hidden" name="search_scope" value="OtherLibraries">
         <!-- Fixed parameters -->
         <input type="hidden" name="query" id="primoQueryILL">
 <div class="row">
         <div class="col-md-8">
            <input class="form-control" aria-label="Input search terms here" type="text" id="primoQueryILLTemp" placeholder="Search for books in other libraries" value="">
         </div><!-- col-md-10 -->
         <div class="col-md-2">
            <input type="submit" class="btn btn-info" value="Search" id="go6" title="Search" onclick="searchPrimoILL()" />
         </div><!-- col-md-2 -->
</div><!-- row -->
      </form>
   </div>
         </div><!-- accordion-body -->
      </div><!-- accordion-collapse-->
   <!-- tab-5 -->
</div>



 </div>  <!--homepagesearch -->
</div>
<!--frontdecor -->

