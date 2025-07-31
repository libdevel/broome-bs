<h2>Quick Search</h2>

<div class="frontdecor">
<div class="homepagesearch tabs">


<ul class="nav flex-column nav-tabs flex-sm-row" role="tablist">
	<li class="nav-item"><a class="nav-link active" href="#tab-1" data-bs-toggle="tab">Everything</a></li>
	<li class="nav-item"><a class="nav-link" href="#tab-2" data-bs-toggle="tab">Articles</a></li>
	<li class="nav-item"><a class="nav-link" href="#tab-3" data-bs-toggle="tab">Books & Media</a></li>
	<li class="nav-item"><a class="nav-link" href="#tab-4" data-bs-toggle="tab">Reserves</a></li>
	<li class="nav-item"><a class="nav-link" href="#tab-5" data-bs-toggle="tab">Other Libraries</a></li>
</ul>	

<div class="tab-content border border-top-0">

	<div id="tab-1" class="tab-pane fade active show">
		<p>Search for almost everything:</p>		
	<form name="searchFormEv" class="input-group input-group-lg" role="search" id="all-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="searchPrimoEv();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="Everything">
		<input type="hidden" name="search_scope" value="MyInst_and_CI">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryEv">

	<div class="input-group input-group-lg">
			<input class="focus form-control" aria-label="Input search terms here" type="text" id="primoQueryEvTemp" placeholder="Search for articles, books, and more" maxlength="256" size="auto" value="">	
	</div>	<!-- col-md-10 -->	
	<div class="edit-actions">
            <input type="submit" class="btn btn-info" value="Search" id="go1" title="Search" onclick="searchPrimoEv()"   />
	</div>
			</form> 					
<div class="library-links"><a href="https://sunybroome.libguides.com/az/databases">Database A-Z list</a> | <a href = "https://suny-bcc.primo.exlibrisgroup.com/discovery/jsearch?vid=01SUNY_BCC:01SUNY_BCC&lang=en">Journal A-Z list</a> | <a href = "https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></div>
	
	</div> <!-- tab-1 --> 


<div id="tab-2" class="tab-pane fade show">	
		<p>Search for articles:</p>	
	<form name="searchFormArt" class="input-group input-group-lg" role="search" id="article-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryArt();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="CentralIndex">
		<input type="hidden" name="search_scope" value="CentralIndex">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryArt">

			<div class="input-group input-group-lg">
			<input  class="focus form-control" aria-label="Input search terms here" type="text" id="primoQueryArtTemp" placeholder="Search for articles" maxlength="256" size="auto" value="" >
		</div>	<!-- col-md-10 -->
		<div class="edit-actions">
            <input type="submit" class="btn btn-info" value="Search" id="go2" title="Search" onclick="searchPrimoArt()"   />
		</div>
	</form> 
	<div class="library-links"><a href="https://sunybroome.libguides.com/az/databases">Database A-Z list</a> | <a href = "https://suny-bcc.primo.exlibrisgroup.com/discovery/jsearch?vid=01SUNY_BCC:01SUNY_BCC&lang=en">Journal A-Z list</a> | <a href = "https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></div>
							
	</div><!-- tab-2-->
	
	<div id="tab-3" class="tab-pane fade show">
    <p>Search for books and media:</p>
	<form name="searchFormCat" class="input-group input-group-lg" role="search" id="book-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryCat();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="LibraryCatalog">
		<input type="hidden" name="search_scope" value="MyInstitution">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryCat">

			<div class="input-group input-group-lg">	
			<input  class="form-control" aria-label="Input search terms here" type="text" id="primoQueryCatTemp" placeholder="Search for books and media" maxlength="256" size="auto" value="">	
			</div>	<!-- col-md-10 -->
			<div class="edit-actions">
			<input  type="submit" class="btn btn-info"  value="Search" id="go3" title="Search" onclick="searchPrimoCat()"   />
			</div>
		</form> 
			
		<div class="library-links"><a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?&tab=eBooks&search_scope=eBooks&vid=01SUNY_BCC:01SUNY_BCC&offset=0">Search for ebooks</a>, <a href = "https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></div>								
	
	</div><!-- tab-3-->
		
	<div id="tab-4" class="tab-pane fade show">
    <p>Search for books on reserve:</p>
	<form name="searchFormCR" class="input-group input-group-lg" role="search" id="reserves-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryCR();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="CourseReserves">
		<input type="hidden" name="search_scope" value="CourseReserves">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryCR">
    <div class="d-flex flex-column flex-xl-row flex-grow-1">
		<div class="js-form-item form-item js-form-type-select form-type-select js-form-item-s form-item-s form-no-label mb-2 mb-xl-0 me-0 me-xl-3">
			<label class="sr-only" for="primoSelectCR">Select:</label>
				<select class="form-control form-select" id="primoSelectCR" >
				<option selected="selected" value="any,contains,">All Fields</option>
				<option value="course_code,contains,">Course No.</option>
				<option value="course_instructor,contains,">Instructor</option>
			</select>
			</div>	<!-- col-md-3 -->
    <div class="input-group">
			<div class="find__search flex-grow-1">
			    <input  class="form-control" aria-label="Input search terms here" type="text" id="primoQueryCRTemp" maxlength="256" size="auto" placeholder="Search for Reserves" value="" />	
			</div>	<!-- col-md-7 -->
			<div class="form-actions js-form-wrapper form-wrapper">
				<input type="submit" class="btn btn-info" value="Search" id="go4" title="Search" onclick="searchPrimoCR()"   />
			</div>
		</div>
		</div>
			</form> 					

	</div><!--tab-4 -->
	
	
	<div id="tab-5" class="tab-pane fade show">
		<p>Search for books in other libraries:</p>
		<form name="searchFormILL" class="input-group input-group-lg" role="search" id="other-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryILL();" enctype="application/x-www-form-urlencoded; charset=utf-8">

			<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
			<input type="hidden" name="tab" value="OtherLibraries">
			<input type="hidden" name="search_scope" value="OtherLibraries">
			<!-- Fixed parameters -->
			<input type="hidden" name="query" id="primoQueryILL">

				<div class="input-group input-group-lg">
				<input  class="form-control" aria-label="Input search terms here" type="text" id="primoQueryILLTemp" placeholder="Search for books in other libraries" maxlength="256" size="auto" value="" >	
				</div>	<!-- col-md-10 -->
				<div class="edit-actions">
				<input type="submit" class="btn btn-info" value="Search" id="go6" title="Search" onclick="searchPrimoILL()"   />
			</div>
				</form> 					
	</div><!-- tab 5-->
	
</div><!-- tab-content -->

</div><!--homepagesearch -->

</div><!--frontdecor -->
