<style>


/* quicksearch */


.homepage-feature--find {--bs-nav-link-padding-x: 2rem; background-color: rgba(0,0,0,.8); bottom: 0;font-size: 1rem; left: 0; padding: 1rem;}

.homepage-feature--find .block > h2 {color: #fff;text-transform: uppercase;}
.homepage-feature--find .nav-tabs { /*border-bottom: 2px solid transparent;*/}
.homepage-feature--find .nav-tabs .nav-link.active { color:#000;}
.homepage-feature--find .tab-content {background-color: #fff; min-height: 185px;padding: 1.5rem;}
.homepage-feature--find .nav-tabs .nav-link {border-width: 0;color: #fff; font-size: 1rem;padding: var(--bs-nav-link-padding-y) var(--bs-nav-link-padding-x);}


.homepage-feature--find form { flex-wrap: nowrap; margin-bottom: 1rem;}

.homepage-feature--find .input-group { --bs-border-radius: 4px; align-items: end;}
.homepage-feature--find .bef-exposed-form .form--inline { margin-bottom: 0}
.homepage-feature--find .form-type-select {flex-shrink: 0}
.homepage-feature--find .form-item-query { flex-grow: 1;}

.homepage-feature--find .input-group-lg > .form-control {font-size:1em;}



.homepage-feature--find .nav-tabs .nav-link:active,.homepage-feature--find .nav-tabs .nav-link:hover {background-color: #314d64;text-decoration: underline}

.homepage-feature--find .nav-tabs .nav-link.active { color:#000;}

.homepage-feature--find .nav-tabs .nav-link.active:active,.homepage-feature--find .nav-tabs .nav-link.active:hover {background-color: #eef3f7}

.homepage-feature--find .tab-content {background-color: #fff;min-height: 185px;padding: 1.5rem}




.homepage-feature--find .form-item-query>label {
    clip: rect(0,0,0,0)!important;
    border: 0!important;
    height: 1px!important;
    margin: -1px!important;
    overflow: hidden!important;
    padding: 0!important;
    white-space: nowrap!important;
    width: 1px!important
}

.homepage-feature--find .form-item-query>label:not(caption) {position: absolute!important}

.homepage-feature--find .bef-exposed-form .form--inline,.homepage-feature--find .form--inline,.homepage-feature--find form {
    flex-wrap: nowrap;
    margin-bottom: 1rem;
}

.homepage-feature--find .bef-exposed-form .form--inline .form-actions,.homepage-feature--find .bef-exposed-form .form--inline .form-item,.homepage-feature--find .form--inline .form-actions,.homepage-feature--find .form--inline .form-item,.homepage-feature--find form .form-actions,.homepage-feature--find form .form-item {margin: 0;}



.btn-primary {
    --bs-btn-color: #fff;
    --bs-btn-bg: #005fa9;
    --bs-btn-border-color: #005fa9;
    --bs-btn-hover-color: #fff;
    --bs-btn-hover-bg: #001e44;
    --bs-btn-hover-border-color: #001e44;
    --bs-btn-focus-shadow-rgb: 38, 119, 182;
    --bs-btn-active-color: #fff;
    --bs-btn-active-bg: #004c87;
    --bs-btn-active-border-color: #00477f;
    --bs-btn-active-shadow: inset 0 3px 5px rgba(0, 0, 0, .125);
    --bs-btn-disabled-color: #fff;
    --bs-btn-disabled-bg: #005fa9;
    --bs-btn-disabled-border-color: #005fa9;
}



</style>


 <div class="homepage-feature--find">

<div class="block block-psul-search block-psul-search-homepage-find-block">
<h2>Find</h2>

<ul class="nav flex-column nav-tabs flex-sm-row" role="tablist">
	<li class="nav-item"><a class="nav-link active" href="#tab-1" data-bs-toggle="tab">Everything</a></li>
	<li class="nav-item"><a class="nav-link" href="#tab-2" data-bs-toggle="tab">Articles</a></li>
	<li class="nav-item"><a class="nav-link" href="#tab-3" data-bs-toggle="tab">Books & Media</a></li>
	<li class="nav-item"><a class="nav-link" href="#tab-4" data-bs-toggle="tab">Reserves</a></li>
	<li class="nav-item"><a class="nav-link" href="#tab-5" data-bs-toggle="tab">Other Libraries</a></li>
</ul>	

<div class="tab-content">

	<div id="tab-1" class="tab-pane fade active show" id="general-search-tab-pane" role="tabpanel" aria-labelledby="general-search-tab" tabindex="0">
		<p>Search Primo for almost everything:</p>		
	<form name="searchFormEv" class="psul-search-search-all input-group input-group-lg" role="search" id="all-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="searchPrimoEv();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="Everything">
		<input type="hidden" name="search_scope" value="MyInst_and_CI">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryEv">

	<div class="psul-search-search-all input-group input-group-lg">
			<input class="focus form-text form-control"  aria-label="Input search terms here" type="text" id="primoQueryEvTemp" placeholder="Search for articles, books, and more" maxlength="256" size="auto" value="">	
	</div>	<!-- col-md-10 -->	
	<div class="edit-actions">
			<button id="go1" type="submit" class="search-submit search-submit-icon button js-form-submit form-submit btn btn-primary" value="Search"  title="Search" onclick="searchPrimoEv()" />Search</button>
	</div>
			</form> 					
<p class="library-links"><a href = "/library/journals-and-magazines">Journal A-Z list</a> | <a href = "https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></p>
	
	</div> <!-- tab-1 --> 


<div id="tab-2" class="tab-pane fade show" id="databases-search-tab-pane" role="tabpanel" aria-labelledby="databases-search-tab" tabindex="0">	
		<p>Search Primo for articles:</p>	
	<form name="searchFormArt" class="psul-search-search-all input-group input-group-lg" role="search" id="article-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryArt();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="CentralIndex">
		<input type="hidden" name="search_scope" value="CentralIndex">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryArt">

			<div class="psul-search-search-all input-group input-group-lg">
			<input  class="focus form-text form-control" aria-label="Input search terms here" type="text" id="primoQueryArtTemp" placeholder="Search for articles" maxlength="256" size="auto" value="" >
		</div>	<!-- col-md-10 -->
		<div class="edit-actions">	
			<button id="go2" type="submit" class="search-submit search-submit-icon button js-form-submit form-submit btn btn-primary" value="Search"  title="Search" onclick="searchPrimoArt()" />Search</button>
		</div>
	</form> 
	<div class="library-links"><a href="/library/databases">Search for articles by topic area</a> | <a href = "/library/journals-and-magazines">Journal A-Z list</a> | <a href = "https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></div>
							
	</div><!-- tab-2-->
	
	<div id="tab-3" class="tab-pane fade show">
	<form name="searchFormCat" class="psul-search-search-all input-group input-group-lg" role="search" id="book-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryCat();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="LibraryCatalog">
		<input type="hidden" name="search_scope" value="MyInstitution">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryCat">

			<div class="psul-search-search-all input-group input-group-lg">	
			<input  class="form-control" aria-label="Input search terms here" type="text" id="primoQueryCatTemp" placeholder="Search for books and media" value="">	
			</div>	<!-- col-md-10 -->
			<div class="col-md-2">
			<input  type="submit" class="btn btn-info"  value="Search" id="go3" title="Search" onclick="searchPrimoCat()"   />
			</div>
		</form> 
			
		<div class="library-links"><a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?&tab=eBooks&search_scope=eBooks&vid=01SUNY_BCC:01SUNY_BCC&offset=0">Search for ebooks</a>, <a href = "https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></div>								
	
	</div><!-- tab-3-->
		
	<div id="tab-4" class="tab-pane fade show">
	<form name="searchFormCR" class="psul-search-search-all input-group input-group-lg" role="search" id="reserves-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryCR();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="CourseReserves">
		<input type="hidden" name="search_scope" value="CourseReserves">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryCR">

		<div class="col-md-3">
			<label class="sr-only" for="primoSelectCR">Select:</label>
				<select class="form-control" id="primoSelectCR" >
				<option selected="selected" value="any,contains,">All Fields</option>
				<option value="course_code,contains,">Course No.</option>
				<option value="course_instructor,contains,">Instructor</option>
			</select>
			</div>	<!-- col-md-3 -->
			<div class="col-md-7">
			<input  class="form-control" aria-label="Input search terms here" type="text" id="primoQueryCRTemp" placeholder="Search for Reserves" value="" />	
				</div>	<!-- col-md-7 -->
				<div class="col-md-2">
				<input type="submit" class="btn btn-info" value="Search" id="go4" title="Search" onclick="searchPrimoCR()"   />
			</div>
			</form> 					

	</div><!--tab-4 -->
	
	
	<div id="tab-5" class="tab-pane fade show">
		
		<form name="searchFormILL" class="psul-search-search-all input-group input-group-lg" role="search" id="other-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryILL();" enctype="application/x-www-form-urlencoded; charset=utf-8">

			<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
			<input type="hidden" name="tab" value="OtherLibraries">
			<input type="hidden" name="search_scope" value="OtherLibraries">
			<!-- Fixed parameters -->
			<input type="hidden" name="query" id="primoQueryILL">

				<div class="psul-search-search-all input-group input-group-lg">
				<input  class="form-control" aria-label="Input search terms here" type="text" id="primoQueryILLTemp" placeholder="Search for books in other libraries" value="" >	
				</div>	<!-- col-md-10 -->
				<div class="col-md-2">
				<input type="submit" class="btn btn-info" value="Search" id="go6" title="Search" onclick="searchPrimoILL()"   />
			</div>
				</form> 					
	</div><!-- tab 5-->
	
</div><!-- tab-content -->
</div>
</div><!--frontdecor -->

