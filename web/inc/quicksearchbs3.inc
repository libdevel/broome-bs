<div class="frontdecor">
<div class="homepagesearch tabs">
<ul class="nav nav-tabs responsive" >
	<li class="active"><a href="#tab-1" data-toggle="tab">Everything</a></li>
	<li><a href="#tab-2" data-toggle="tab">Articles</a></li>
	<li><a href="#tab-3" data-toggle="tab">Books & Media</a></li>
	<li><a href="#tab-4" data-toggle="tab">Reserves</a></li>
	<li><a href="#tab-5" data-toggle="tab">Other Libraries</a></li>
</ul>	

<div class="tab-content responsive">

	<div id="tab-1" class="tab-pane fade active in">
		<p>Search Primo for almost everything:</p>		
	<form name="searchFormEv" role="search" id="all-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="searchPrimoEv();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="Everything">
		<input type="hidden" name="search_scope" value="MyInst_and_CI">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryEv">

	<div class="col-md-10">
			<input class="focus form-control"  aria-label="Input search terms here" type="text" id="primoQueryEvTemp" placeholder="Search for articles, books, and more" value="">	
	</div>	<!-- col-md-10 -->	
	<div class="col-md-2">
			<input type="submit" class="btn btn-info" value="Search" id="go1" title="Search" onclick="searchPrimoEv()" />
	</div>
			</form> 					
<p class="library-links"><a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></p>
	
	</div> <!-- tab-1 --> 


<div id="tab-2" class="tab-pane fade">	
		<p>Search Primo for articles:</p>	
	<form name="searchFormArt" role="search" id="article-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryArt();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="CentralIndex">
		<input type="hidden" name="search_scope" value="CentralIndex">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryArt">

			<div class="col-md-10">
			<input  class="form-control" aria-label="Input search terms here" type="text" id="primoQueryArtTemp" placeholder="Search for articles" value="" >
		</div>	<!-- col-md-10 -->
		<div class="col-md-2">
			<input type="submit" class="btn btn-info" value="Search" id="go2" title="Search" onclick="searchPrimoArt()"   />	
		</div>
	</form> 
	<div class="library-links"><a href="/library/databases">Search for articles by topic area</a> | <a href="/library/journals-and-magazines">Journal A-Z list</a> | <a href = "https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></div>
							
	</div><!-- tab-2-->
	
	<div id="tab-3" class="tab-pane fade">
	<form name="searchFormCat" role="search" id="book-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryCat();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="LibraryCatalog">
		<input type="hidden" name="search_scope" value="MyInstitution">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryCat">

			<div class="col-md-10">	
			<input  class="form-control" aria-label="Input search terms here" type="text" id="primoQueryCatTemp" placeholder="Search for books and media" value="">	
			</div>	<!-- col-md-10 -->
			<div class="col-md-2">
			<input  type="submit" class="btn btn-info"  value="Search" id="go3" title="Search" onclick="searchPrimoCat()"   />
			</div>
		</form> 
			
		<div class="library-links"><a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?&tab=eBooks&search_scope=eBooks&vid=01SUNY_BCC:01SUNY_BCC&offset=0">Search for ebooks</a>, <a href = "https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></div>								
	
	</div><!-- tab-3-->
		
	<div id="tab-4" class="tab-pane fade">
	<form name="searchFormCR" role="search" id="reserves-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryCR();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

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
	
	
	<div id="tab-5" class="tab-pane fade">
				<p>Search for books in other libraries:</p>	
		<form name="searchFormILL" role="search" id="other-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryILL();" enctype="application/x-www-form-urlencoded; charset=utf-8">

			<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
			<input type="hidden" name="tab" value="OtherLibraries">
			<input type="hidden" name="search_scope" value="OtherLibraries">
			<!-- Fixed parameters -->
			<input type="hidden" name="query" id="primoQueryILL">

				<div class="col-md-10">
				<input  class="form-control" aria-label="Input search terms here" type="text" id="primoQueryILLTemp" placeholder="Search for books in other libraries" value="" >	
				</div>	<!-- col-md-10 -->
				<div class="col-md-2">
				<input type="submit" class="btn btn-info" value="Search" id="go6" title="Search" onclick="searchPrimoILL()"   />
			</div>
				</form> 					

	</div><!--tab-5 -->

</div><!-- tab-content -->

</div><!--homepagesearch -->

</div><!--frontdecor -->
