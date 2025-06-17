<style>
.homepagesearch {--bs-nav-link-padding-x: 2rem; background-color:#fff; padding:1rem;  }
</style>

<h2>Quick Search</h2>

<div class="frontdecor">
   <div class="homepagesearch tabs">
      <form id="simple" method="get" name="PrimosearchForm" onsubmit="searchPrimo()" target="_blank" enctype="application/x-www-form-urlencoded; charset=utf-8">
         <div class="row">   
         <div class="col-md-4">
            <!-- Select Statement with values from case  Fires onchange --> 
            <label for="scopeSelecter">Search Within:</label>
            <select id="scopeSelecter" name="scopeSelecter" onchange="primoScopeSwitch(this)" >
               <option value="Everything">Everything</option>
               <option value="CentralIndex">Articles</option>
               <option value="LibraryCatalog">Books & Media</option>
               <option value="CourseReserves">Course Reserves</option>
               <option value="WorldCat">Other Libraries</option>
            </select>
         </div><!-- col-md-4 -->
         <!-- Customizable Parameters -->
         <input name="institution" type="hidden" value="01SUNY_BCC"> 
         <input name="vid" type="hidden" value="01SUNY_BCC:01SUNY_BCC"> 
         <input id="primoTab" name="tab" type="hidden" value="Everything"> 
         <input id="primoScope" name="search_scope" type="hidden" value="MyInst_and_CI"> 
         <input name="mode" type="hidden" value="Basic"> 
         <!-- Fixed parameters --> 
         <input name="displayMode" type="hidden" value="full"> 
         <input name="bulkSize" type="hidden" value="10"> 
         <input name="highlight" type="hidden" value="true"> 
         <input name="dum" type="hidden" value="true"> 
         <input id="primoQuery" name="query" type="hidden"> 
         <input name="displayField" type="hidden" value="all"> 
         <!-- Enable this if "Expand My Results" is enabled by default in Views Wizard --> 
         <input name="pcAvailabiltyMode" type="hidden" value="true">
        
         <div class="col-md-7">
            <label for="primoQueryTemp">Search terms:</label>
            <input id="primoQueryTemp" size="35" type="text" value="">  
         </div><!-- col-md-7 -->

         <!-- Search Button --> 
         <div class="col-md-1">
            <input alt="Search" id="go" onclick="searchPrimo()" title="Search" type="button" value="Go">
         </div><!-- col-md-1 -->
   </div><!-- row -->
   <div class="library-links">
   <a target="_blank" href="https://suny-bcc.primo.exlibrisgroup.com/discovery/search?vid=01SUNY_BCC:01SUNY_BCC&amp;lang=en&amp;sortby=rank&amp;mode=advanced">Advanced</a>
   </div><!-- library links -->
   </form>
</div>
<!--homepagesearch -->
</div>
<!--frontdecor -->

