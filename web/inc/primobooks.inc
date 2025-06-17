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

.homepage-feature--find .library-links, .homepage-feature--find .library-links a {color:#fff;}



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
<h2>Find Books</h2>



	<form name="searchFormCat" class="psul-search-search-all input-group input-group-lg" role="search" id="book-search" method="get" action="https://suny-bcc.primo.exlibrisgroup.com/discovery/search" onsubmit="PrimoQueryCat();" enctype="application/x-www-form-urlencoded; charset=utf-8" >

		<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
		<input type="hidden" name="tab" value="LibraryCatalog">
		<input type="hidden" name="search_scope" value="MyInstitution">
		<!-- Fixed parameters -->
		<input type="hidden" name="query" id="primoQueryCat">

			<div class="psul-search-search-all input-group input-group-lg">	
			<input  class="form-control" aria-label="Input search terms here" type="text" id="primoQueryCatTemp" placeholder="Search for books and media" value="">	
			</div>	<!-- col-md-10 -->
			<div class="edit-actions">
			<input  type="submit" class="btn btn-info"  value="Search" id="go3" title="Search" onclick="searchPrimoCat()"   />
			</div> <!-- /edit-actions -->
		</form> 
			
		<div class="library-links"><a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?&tab=eBooks&search_scope=eBooks&vid=01SUNY_BCC:01SUNY_BCC&offset=0">Search for ebooks</a>, <a href = "https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></div>								
	
	
	

</div><!-- tab-content -->
</div><!--homepage-feature -->

<h3>
    Browse for:
</h3>
<ul>
    <li>
        <a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?query=any,contains,%3F&amp;tab=LibraryCatalog&amp;search_scope=MyInstitution&amp;sortby=date_d&amp;vid=01SUNY_BCC:01SUNY_BCC&amp;facet=location_code,include,4811%E2%80%93160972480004811%E2%80%93jcirc,lk&amp;offset=0&amp;came_from=sort">Children's books</a>
    </li>
    <li>
        <a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?query=sub,contains,Films,AND&amp;pfilter=rtype,exact,videos,AND&amp;tab=LibraryCatalog&amp;search_scope=MyInstitution&amp;sortby=rank&amp;vid=01SUNY_BCC:01SUNY_BCC&amp;mode=advanced&amp;offset=0">Films and Movies</a>
    </li>
    <li>
        <a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?query=sub,exact,fiction,AND&amp;pfilter=rtype,exact,books,AND&amp;tab=LibraryCatalog&amp;search_scope=MyInstitution&amp;sortby=date_d&amp;vid=01SUNY_BCC:01SUNY_BCC&amp;lang=en&amp;mode=advanced&amp;offset=0">Fiction</a>
    </li>
    <li>
        <a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?query=any,contains,%3F&amp;tab=LibraryCatalog&amp;search_scope=MyInstitution&amp;sortby=date_d&amp;vid=01SUNY_BCC:01SUNY_BCC&amp;mfacet=location_code,include,4811%E2%80%93160972480004811%E2%80%93newbk,1&amp;lang=en&amp;offset=0&amp;came_from=sort">New books</a>
    </li>
    <li>
        <a href="https://sunybroome.info/library/news/overdrive-ebooks-and-audio-books-available-now">Overdrive ebooks and audiobooks</a>
    </li>
    <li>
        <a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/jsearch?vid=01SUNY_BCC:01SUNY_BCC">Print and Electronic Journals and Magazines</a>
    </li>
</ul>
<h3>
    Look for books at other libraries
</h3>
<ul>
    <li>
        <a href="https://suny-bin.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BIN:01SUNY_BIN&amp;lang=en&amp;sortby=rank">Binghamton University Library Catalog</a>
    </li>
    <li>
        <a href="https://www.thebcpl.org/">Broome County Public Library</a>
    </li>
    <li>
        <a href="https://fcls.ent.sirsi.net/client/en_US/fcls">Four County Library System (4CLS)</a>
    </li>
    <li>
        WorldCat
        <ul>
            <li>
                <a href="http://webster.sunybroome.edu:2048/login?url=http://firstsearch.oclc.org/dbname=WorldCat;done=referer;FSIP">FirstSearch</a>
            </li>
            <li>
                <a href="https://sunybroome.on.worldcat.org/discovery">WorldCat Discovery</a>
            </li>
        </ul>
    </li>
</ul>

