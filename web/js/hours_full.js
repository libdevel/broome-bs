! function (n) {
   n.LibCalHoursFull = function (t, s) {
      var e = {
            iid: 5196,
            months: 3,
            tabShowInfo: !0,
            tabHours: "Hours of Operation",
            tabInfo: "Location & Direction Info...",
            byApp: "By Appointment",
            systemTime: !1
         },
         i = this,
         e = (i.settings = {}, i.settings = n.extend({}, e, s), i.el = t, i.settings.id = "#" + i.el.prop("id"), "");
      0 == i.settings.iid ? i.el.text("IID is not setup!") : ((12 < i.settings.months || i.settings.months < 1) && (i.settings.months = 3), i.settings.systemTime && (e = "&systemTime=1"), s = n('script[src*="/hours_full.js"]').attr("src"), t = document.createElement("a"), t.href = s, s = "https://" + t.hostname, i.el.html("<div>Loading...</div>"), n.ajax({
         type: "get",
         dataType: "html",
         cache: !0,
         url: s + "https://sunybroome.libcal.com/api_hours_full.php?iid=" + i.settings.iid + "&months=" + i.settings.months + e
      }).done(function (t) {
         i.el.html(t), !1 === i.settings.tabShowInfo && jQuery(i.settings.id + " #s-lc-fhw-ltab").remove(), jQuery(i.settings.id + " #s-lc-fhw-hl").text(i.settings.tabHours), jQuery(i.settings.id + " #s-lc-fhw-loctab").text(i.settings.tabInfo)
      }))
   }
}(jQuery);
