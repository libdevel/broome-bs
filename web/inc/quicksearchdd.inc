<div class="frontdecor">
<div class="homepagesearch tabs">
<h3>Quicksearch  Dropdown</h3>

	<!--AllSearch Form-->
	<form class="form-inline text-center" id="simple" role="search" name="searchForm2" method="get" target="_self" action="https://suny-bsc.primo.exlibrisgroup.com/discovery/search" enctype="application/x-www-form-urlencoded; charset=utf-8" onsubmit="searchPrimo()">
		<div class="row">
			<div class="col-xs-12 col-md-12">
				<!-- Customizable Parameters -->
				<input type="hidden" name="vid" value="01SUNY_BCC:01SUNY_BCC">
				<input id="primoTab" type="hidden" name="tab" value="Everything">
				<input id="primoScope" type="hidden" name="search_scope" value="MyInst_and_CI">
				<!-- Fixed parameters -->
				<input type="hidden" name="query" id="primoQuery2">
				<!-- Enable this if "Expand My Results" is enabled by default in Views Wizard -->
				<input type="hidden" name="pcAvailabilty" value="true">
				<!-- Select Statement with values from case Fires onchange -->
				<select class="input-lg form-control form-select" id="scopeSelecter" name="scopeSelecter" onchange="primoScopeSwitch(this)">
					<option value="Everything">Everything</option>
					<option value="Articles">Articles</option>
					<option value="LibraryCatalog">Books & Media</option>
					<option value="CourseReserves">Reserves</option>
					<option value="OtherLibraries">Other SUNYs</option>
				</select>
				<input class="input-lg form-control" aria-label="Input search terms here" type="text" id="primoQueryTemp" value="" size="35">

				<!-- Search Button -->
				<input class="btn btn-default btn-outline-dark input-lg" id="go" title="Search" onclick="searchPrimo()" type="button" value="SEARCH" alt="Search">
			</div><!--col -->
			</div><!--row -->
 <div class="library-links"><a href="/library/databases">Search for articles by subject</a> | <a href="/library/journals-and-magazines">Journal A-Z list</a> | <a href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&sortby=rank&mode=advanced">Advanced Search</a></p>
         </div>
	</form>
	</div>  <!--homepagesearch -->
</div>
<!--frontdecor -->
<script>
	function searchPrimo() {
	    event.preventDefault();
	    document.getElementById("primoQuery").value = "any,contains," + document.getElementById("primoQueryTemp").value;
	    document.forms["searchForm"].submit();
	}
	
	function primoScopeSwitch(scope) {
	    const tab = document.getElementById("primoTab");
	    const primoScope = document.getElementById("primoScope");
	    const queryTemp = document.getElementById("primoQueryTemp");
	    
	    switch(scope.value) {
	        case "Everything":
	            tab.value = "Everything";
	            primoScope.value = "MyInst_and_CI";
	            queryTemp.placeholder = "Search all library resources";
	            break;

	        case "Articles":
	            tab.value = "Articles";
	            primoScope.value = "CentralIndex";
	            queryTemp.placeholder = "Search for Articles";
	            break;
	
	        case "LibraryCatalog":
	            tab.value = "LibraryCatalog";
	            primoScope.value = "MyInstitution";
	            queryTemp.placeholder = "Search for Books & Movies";
	            break;
	
	        case "CourseReserves":
	            tab.value = "CourseReserves";
	            primoScope.value = "CourseReserves";
	            queryTemp.placeholder = "Find items on course reserve";
	            break;
	
	        case "OtherLibraries":
	            tab.value = "OtherLibraries";
	            primoScope.value = "NewDiscoveryNetwork";
	            queryTemp.placeholder = "Search the SUNY Libraries";
	            break;
	    }
	}
	
	window.addEventListener('load', function() {
	    const scope = document.getElementById("scopeSelecter");
	    primoScopeSwitch(scope);
	});
</script>

