Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Priority", 
		"u=2");

	lr_think_time(5);

	web_custom_request("r10.o.lencr.org", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\xAC+h\\xD4\\x0E\\x1D\\\\N\n\\xBE\\xD89\\xB8Y\\xDB\\x82k", 
		LAST);

	web_custom_request("r11.o.lencr.org", 
		"URL=http://r11.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03g\\x1C\\xE3=\\x8A\\x89\\x190Y8y|.'\\x0B\\x94c", 
		LAST);

	web_custom_request("r10.o.lencr.org_2", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\xAC+h\\xD4\\x0E\\x1D\\\\N\n\\xBE\\xD89\\xB8Y\\xDB\\x82k", 
		LAST);

	web_revert_auto_header("Priority");

	web_url("v1", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=2");

	web_custom_request("r11.o.lencr.org_2", 
		"URL=http://r11.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04&\\xD3\\x07\\xFE\\xB5\\xB1X\\xC2Z\\xEF\\x81|K\\xC6!v\\xB6", 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_custom_request("cfr-v1-ru", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-ru", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("cfr-v1-ru_2", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-ru", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("cfr-v1-ru_3", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-ru", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Priority", 
		"u=2");

	web_custom_request("llA", 
		"URL=http://o.pki.goog/s/we1/llA", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\x96P\\x0F*\\x80\\xF8\"\\x90\\x0EU\\x87Q\\xC0U\\x82.", 
		LAST);

	web_custom_request("llA_2", 
		"URL=http://o.pki.goog/s/we1/llA", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\x96P\\x0F*\\x80\\xF8\"\\x90\\x0EU\\x87Q\\xC0U\\x82.", 
		LAST);

	web_custom_request("llA_3", 
		"URL=http://o.pki.goog/s/we1/llA", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\x96P\\x0F*\\x80\\xF8\"\\x90\\x0EU\\x87Q\\xC0U\\x82.", 
		LAST);

	web_custom_request("r10.o.lencr.org_3", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\xB7\\x02\\x9C\\x18D.\\xC5$I\\xE9d\\xED\\xED`!\\x8D\\xB3", 
		LAST);

	lr_think_time(5);

	web_custom_request("we2", 
		"URL=http://o.pki.goog/we2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x100\\x01\\xD4}\\x9A\\x9C\\xD0]\na\\xA2\\x85E\\xBE@|", 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03\\x9A\\xBF\\xFD\\xB0\\xF0\\xAE#\\x1F9\\x939\\xA4\\xF3Y3", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$ct=application/x-protobuf&key=AIzaSyC7jsptDS3am4tPx4r3nxis7IMjBc5Dovo&$httpMethod=POST&$req=ChUKE25hdmNsaWVudC1hdXRvLWZmb3gaJwgFEAEaGwoNCAUQBhgBIgMwMDEwARCswBkaAhgM0xF3IyICIAIoARonCAEQARobCg0IARAGGAEiAzAwMTABEKjFDxoCGAx4xdbSIgIgAigBGicIAxABGhsKDQgDEAYYASIDMDAxMAEQzbwPGgIYDOSdeoIiAiACKAEaJwgHEAEaGwoNCAcQBhgBIgMwMDEwARCrixAaAhgM3i7AcCICIAIoARolCAkQARoZCg0ICRAGGAEiAzAwMTABECMaAhgMUj2mGCICIAIoAQ==", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("r11.o.lencr.org_3", 
		"URL=http://r11.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04I\\x11Xd\\x06\\xBA\\xED\\xC6\\xB0\\xDE\\xC09\\xF8\\xB1\\x83*\\x92", 
		LAST);

	web_custom_request("r11.o.lencr.org_4", 
		"URL=http://r11.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04I\\x11Xd\\x06\\xBA\\xED\\xC6\\xB0\\xDE\\xC09\\xF8\\xB1\\x83*\\x92", 
		LAST);

	web_revert_auto_header("Priority");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"websocket");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1732734806758\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/133.0/20241121140525/WINNT_x86_64-msvc-x64/ru/release/Windows_NT%252010.0.0.0.22631.4541%2520(x64)/ISET%3ASSE4_2%2CMEM%3A16221/default/default/update.xml?force=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://easylist-downloads.adblockplus.org/abp-filters-anti-cv.txt?addonName=adblockfirefox&addonVersion=6.11.1&application=firefox&applicationVersion=133.0&platform=gecko&platformVersion=133.0&lastVersion=202411271811&downloadCount=4%2B&disabled=false&manifestVersion=2&firstVersion=202403", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("x-telemetry-agent", 
		"Glean/61.2.0 (Rust on Windows)");

	web_custom_request("dd0304fc-4e17-4dc0-a96a-69a6959a8832", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/dd0304fc-4e17-4dc0-a96a-69a6959a8832", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":80,\"start_time\":\"2024-11-27T23:42:07.000+05:00\",\"end_time\":\"2024-11-28T00:20:20.667+05:00\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-ads-startup-cache\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"windows_build_number\":22631,\"first_run_date\":\"2024-03-01+05:00\",\"build_date\":\"1970-01-01T00:00"
		":00+00:00\",\"os\":\"Windows\",\"app_display_version\":\"133.0\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"locale\":\"ru\",\"app_channel\":\"release\",\"app_build\":\"20241121140525\",\"client_id\":\"4691bf69-838a-4a5f-8495-dd6b7e5add4b\"},\"metrics\":{\"counter\":{\"use.counter.css.doc.css_font_weight\":3,\"use.counter.top_level_content_documents_destroyed\":1,\"use.counter.css.doc.css_font_size\":6,\"use.counter.css.page.css_color\":1,\"use.counter.content_documents_destroyed\":21,\""
		"use.counter.css.doc.css_height\":2,\"use.counter.css.page.css_font_weight\":1,\"use.counter.css.doc.css_color\":6,\"use.counter.css.doc.css_text_decoration\":3,\"use.counter.css.doc.css_font_family\":6,\"use.counter.css.doc.css_fill_opacity\":2,\"use.counter.css.doc.css_width\":2,\"use.counter.css.doc.css_fill\":2,\"use.counter.css.page.css_text_decoration\":1,\"use.counter.dedicated_workers_destroyed\":1,\"use.counter.css.page.css_font_size\":1,\"use.counter.css.page.css_font_family\":1}}}", 
		LAST);

	web_custom_request("dns-query", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07example\\x03com\\x00\\x00\\x02\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00X\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00L\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_add_header("Priority", 
		"u=2");

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06\\xBA\\xAD\\x9A4\\xCC\\x06O\\x8C\\xD0`k\\x99]\\x9C$", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("tiles", 
		"URL=https://contile.services.mozilla.com/v1/tiles", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=2");

	web_custom_request("we2_2", 
		"URL=http://o.pki.goog/we2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\xEE0\\x9C@OkkbV\\xB4\\x8E&\\xBF\\xE4E\\x12\\x98\\xBA\\xE4\\xDD\\x04\\x14u\\xBE\\xC4w\\xAE\\x89\\xF6D7}\\xCF\\xB1h\\x1F\\x1D\\x1A\\xEB\\xDC4Y\\x02\\x100\\x01\\xD4}\\x9A\\x9C\\xD0]\na\\xA2\\x85E\\xBE@|", 
		LAST);

	web_url("changeset", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/monitor/collections/changes/changeset?_expected=%221732784230074%22", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Priority", 
		"u=2");

	web_custom_request("r10.o.lencr.org_4", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14i\\x0F\\xE4\\x15g\\xEDo\\x7F\\xB54Dd\\x06\\x06o\tg\\x07qr\\x04\\x14t\\xA4v)\\x17\\x18T\\x8517\\xBEg\\xE6\\x06X\\xC0\\xBC\\xC5\\x05r\\x02\\x12\\x03\\xB7\\x02\\x9C\\x18D.\\xC5$I\\xE9d\\xED\\xED`!\\x8D\\xB3", 
		LAST);

	web_custom_request("r11.o.lencr.org_5", 
		"URL=http://r11.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x1AR\\xB9\\xB4Y\\xE4\\xC33\\x98!~\\x86mK\\xBD\\x8A;\\xD6g\\xCE\\x04\\x14\\x08\\xB9\\x11;\\xA5\\xD0\\x85\\x18\\xB4\\xEA\\x0F\\xA0\\xAD\\x9F\\x86\\x1E\\x8E\\xFC8'\\x02\\x12\\x04&\\xD3\\x07\\xFE\\xB5\\xB1X\\xC2Z\\xEF\\x81|K\\xC6!v\\xB6", 
		LAST);

	web_revert_auto_header("Priority");

	web_add_header("Priority", 
		"u=4");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("x-telemetry-agent", 
		"Glean/61.2.0 (Rust on Windows)");

	web_custom_request("21e38971-cac6-4e64-9266-ee78f6a2e438", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/21e38971-cac6-4e64-9266-ee78f6a2e438", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":112,\"start_time\":\"2024-11-27T23:42:13.000+05:00\",\"end_time\":\"2024-11-28T18:16:13.980+05:00\",\"reason\":\"startup\",\"experiments\":{\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-ads-startup-cache\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"client_id\":\"4691bf69-838a-4a5f-8495-dd6b7e5add4b\",\"windows_build_number\":22631,\"app_build"
		"\":\"20241121140525\",\"app_channel\":\"release\",\"app_display_version\":\"133.0\",\"architecture\":\"x86_64\",\"locale\":\"ru\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-03-01+05:00\"},\"metrics\":{\"uuid\":{\"legacy.telemetry.profile_group_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\",\"legacy.telemetry.client_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\"},\"boolean\":{\"urlbar.pref_suggest_data_collection\":false,\""
		"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_topsites\":true},\"quantity\":{\"urlbar.pref_max_results\":10}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"path_key\":\"clean\",\"can_load\":\"true\",\"glean_timestamp\":\"1732732932121\",\"loadfail_reason\":\"N/A\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\""
		"extra\":{\"path_key\":\"clean\",\"can_load\":\"true\",\"loadfail_reason\":\"N/A\",\"glean_timestamp\":\"1732732932121\"}},{\"timestamp\":1,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"shutdown_reason\":\"N/A\",\"shutdown_ok\":\"false\",\"glean_timestamp\":\"1732732932122\"}},{\"timestamp\":669,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"setting\":\"required\",\"glean_timestamp\":\"1732732932790\"}},{\"timestamp\":1329"
		",\"category\":\"doh\",\"name\":\"state_enabled\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1732732933450\"}},{\"timestamp\":1329,\"category\":\"doh\",\"name\":\"evaluate_v2_heuristics\",\"extra\":{\"networkID\":\"Iqb3wVAgDCZs3PlzsmnJJ3K4yp5B5kJWmW13Tf7eZMo=\",\"canaries\":\"\",\"captiveState\":\"unknown\",\"glean_timestamp\":\"1732732933451\",\"filtering\":\"\",\"steeredProvider\":\"\",\"platform\":\"\",\"value\":\"enable_doh\",\"enterprise\":\"\",\"evaluateReason\":\"startup\"}},{\""
		"timestamp\":1525,\"category\":\"normandy\",\"name\":\"validation_failed_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1732732933646\",\"feature\":\"addAnImageInPDF\",\"reason\":\"invalid-feature\",\"value\":\"add-an-image-to-pdf-with-alt-text-rollout\"}},{\"timestamp\":1525,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"reason\":\"invalid-feature\",\"glean_timestamp\":\"1732732933646\",\"feature\":\"addAnImageInPDF\",\"experiment\":\""
		"add-an-image-to-pdf-with-alt-text-rollout\"}},{\"timestamp\":1525,\"category\":\"normandy\",\"name\":\"validation_failed_nimbus_experiment\",\"extra\":{\"feature\":\"tabPreview\",\"reason\":\"invalid-feature\",\"glean_timestamp\":\"1732732933646\",\"value\":\"tab-hover-preview-release-rollout\"}},{\"timestamp\":1525,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"feature\":\"tabPreview\",\"experiment\":\"tab-hover-preview-release-rollout\",\"glean_timestamp\":\""
		"1732732933646\",\"reason\":\"invalid-feature\"}},{\"timestamp\":1526,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1732732933647\"}},{\"timestamp\":1599,\"category\":\"jsonfile\",\"name\":\"load_logins\",\"extra\":{\"value\":\"\",\"glean_timestamp\":\"1732732933720\"}},{\"timestamp\":1618,\"category\":\"upgrade_dialog\",\"name\":\"trigger_reason\",\"extra\":{\"value\":\"not-major\",\"glean_timestamp\":\"1732732933740\"}},{\"timestamp\":9061,\"category\":\""
		"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"trigger\":\"pref-change\",\"contextReason\":\"pref-change\",\"results\":\"+\",\"attemptCount\":\"1\",\"value\":\"2\",\"time\":\"7978.493200\",\"captivePortal\":\"1\",\"glean_timestamp\":\"1732732941183\",\"networkID\":\"Bdz3TGIhEyGNiN5RVc1mUbbIU3A=\"}},{\"timestamp\":16458,\"category\":\"doh\",\"name\":\"state_enabled\",\"extra\":{\"glean_timestamp\":\"1732732948580\",\"value\":\"null\"}},{\"timestamp\":16458,\"category\":\"doh\",\""
		"name\":\"evaluate_v2_heuristics\",\"extra\":{\"steeredProvider\":\"\",\"value\":\"enable_doh\",\"enterprise\":\"\",\"glean_timestamp\":\"1732732948580\",\"networkID\":\"Iqb3wVAgDCZs3PlzsmnJJ3K4yp5B5kJWmW13Tf7eZMo=\",\"platform\":\"\",\"filtering\":\"\",\"evaluateReason\":\"throttled\",\"captiveState\":\"not_captive\",\"canaries\":\"\"}},{\"timestamp\":39213,\"category\":\"form_autocomplete\",\"name\":\"show_logins\",\"extra\":{\"typeWasPassword\":\"0\",\"fieldType\":\"text\",\"loginsFooter\":\"1\""
		",\"acFieldName\":\"\",\"glean_timestamp\":\"1732732971335\",\"value\":\"40\",\"hadPrevious\":\"0\",\"stringLength\":\"0\",\"insecureWarning\":\"1\"}},{\"timestamp\":41370,\"category\":\"form_autocomplete\",\"name\":\"show_logins\",\"extra\":{\"stringLength\":\"1\",\"value\":\"9\",\"acFieldName\":\"\",\"glean_timestamp\":\"1732732973492\",\"loginsFooter\":\"1\",\"insecureWarning\":\"1\",\"hadPrevious\":\"0\",\"typeWasPassword\":\"0\",\"fieldType\":\"text\"}},{\"timestamp\":820361,\"category\":\""
		"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"trigger\":\"retry-trr\",\"networkID\":\"Bdz3TGIhEyGNiN5RVc1mUbbIU3A=\",\"time\":\"797.797700\",\"attemptCount\":\"1\",\"glean_timestamp\":\"1732733752482\",\"captivePortal\":\"1\",\"results\":\"+\",\"contextReason\":\"success\",\"value\":\"2\"}},{\"timestamp\":1578342,\"category\":\"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"time\":\"800.476900\",\"trigger\":\"retry-trr\",\"glean_timestamp\":\"1732734510463\",\""
		"contextReason\":\"success\",\"networkID\":\"Bdz3TGIhEyGNiN5RVc1mUbbIU3A=\",\"results\":\"+\",\"value\":\"2\",\"attemptCount\":\"1\",\"captivePortal\":\"1\"}},{\"timestamp\":2288625,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"glean_timestamp\":\"1732735220746\",\"value\":\"null\"}}]}", 
		LAST);

	web_custom_request("changeset_2", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/normandy-recipes-capabilities/changeset?_expected=1732752063960&_since=%221732579263602%22", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("dns-query_2", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07example\\x03com\\x00\\x00\\x02\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00X\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00L\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("x-telemetry-agent", 
		"Glean/61.2.0 (Rust on Windows)");

	web_custom_request("e053b1da-f14d-4fbc-bbc5-153967603e1b", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/metrics/1/e053b1da-f14d-4fbc-bbc5-153967603e1b", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		body_variable_1, 
		LAST);

	web_custom_request("changeset_3", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/nimbus-desktop-experiments/changeset?_expected=1732743423121&_since=%221732732783896%22", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("dns-query_3", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07mozilla\\x0Ecloudflare-dns\\x03com\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00I\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00="
		"\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("x-telemetry-agent", 
		"Glean/61.2.0 (Rust on Windows)");

	web_custom_request("30c1c467-b9f4-4efa-b36b-f500e0618478", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/pageload/1/30c1c467-b9f4-4efa-b36b-f500e0618478", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":83,\"start_time\":\"2024-11-27T23:42:14.000+05:00\",\"end_time\":\"2024-11-28T18:16:14.012+05:00\",\"reason\":\"startup\"},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"windows_build_number\":22631,\"app_display_version\":\"133.0\",\"first_run_date\":\"2024-03-01+05:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"app_build\":\"20241121140525\",\"locale\":\"ru"
		"\"},\"events\":[{\"timestamp\":0,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"load_type\":\"NORMAL\",\"load_time\":\"13009\",\"dns_lookup_time\":\"12\",\"response_time\":\"12652\",\"http_ver\":\"1\",\"glean_timestamp\":\"1732732966646\",\"time_to_request_start\":\"12636\",\"features\":\"0\",\"using_webdriver\":\"false\"}}]}", 
		LAST);

	web_custom_request("dns-query_4", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07mozilla\\x0Ecloudflare-dns\\x03com\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00I\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00="
		"\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("x-telemetry-agent", 
		"Glean/61.2.0 (Rust on Windows)");

	web_custom_request("9a205dd4-a5a4-419e-90bb-a1e3f562f2ed", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/9a205dd4-a5a4-419e-90bb-a1e3f562f2ed", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":316,\"start_time\":\"2024-11-27T23:42:14.000+05:00\",\"end_time\":\"2024-11-28T18:16:14.053+05:00\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-03-01+05:00\",\"client_id\":\"4691bf69-838a-4a5f-8495-dd6b7e5add4b\",\"windows_build_number\":22631,\"locale\":\"ru\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"app_display_version\":\"133.0\",\"architecture"
		"\":\"x86_64\",\"os\":\"Windows\",\"app_build\":\"20241121140525\"},\"metrics\":{\"quantity\":{\"topsites.rows\":1},\"boolean\":{\"newtab.weather_enabled\":true,\"pocket.is_signed_in\":false,\"newtab.search.enabled\":true,\"pocket.enabled\":true,\"pocket.sponsored_stories_enabled\":true,\"topsites.enabled\":true,\"topsites.sponsored_enabled\":true},\"string_list\":{\"newtab.blocked_sponsors\":[]},\"string\":{\"newtab.locale\":\"ru\",\"newtab.newtab_category\":\"enabled\",\"newtab.homepage_category"
		"\":\"enabled\"}}}", 
		LAST);

	web_custom_request("2f61eb5d-e91c-4870-8d42-296ef432fef7", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/2f61eb5d-e91c-4870-8d42-296ef432fef7", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":296,\"start_time\":\"2024-11-28T00:20:19.000+05:00\",\"end_time\":\"2024-11-28T18:16:14.110+05:00\",\"reason\":\"active\",\"experiments\":{\"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-ads-startup-cache\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}"
		"},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\""
		"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"windows_build_number\":22631,\"app_build\":\"20241121140525\",\"locale\":\"ru\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"architecture\":\""
		"x86_64\",\"app_channel\":\"release\",\"app_display_version\":\"133.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-03-01+05:00\",\"client_id\":\"4691bf69-838a-4a5f-8495-dd6b7e5add4b\"},\"metrics\":{\"uuid\":{\"legacy.telemetry.profile_group_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\",\"legacy.telemetry.client_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\"},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"dau-reporting\":1,\"events\":1,\""
		"metrics\":1,\"newtab\":1,\"pageload\":1,\"use-counters\":1},\"glean.error.invalid_state\":{\"glean.baseline.duration\":1}}}}", 
		LAST);

	web_custom_request("c1020b82-59ef-4244-b32a-3e12b5030139", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/dau-reporting/1/c1020b82-59ef-4244-b32a-3e12b5030139", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":26,\"start_time\":\"2024-11-28T00:20:19.000+05:00\",\"end_time\":\"2024-11-28T18:16:14.116+05:00\",\"reason\":\"active\",\"experiments\":{\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-ads-startup-cache\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-03-01+05:00\",\"windows_build_number\":22631,\""
		"app_display_version\":\"133.0\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_build\":\"20241121140525\",\"locale\":\"ru\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"client_id\":\"4691bf69-838a-4a5f-8495-dd6b7e5add4b\"},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\",\"legacy.telemetry.profile_group_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\"}}}", 
		LAST);

	web_custom_request("f307a01f-ecc1-44b8-bf92-92430945ff25", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/f307a01f-ecc1-44b8-bf92-92430945ff25", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":81,\"start_time\":\"2024-11-28T00:20:20.000+05:00\",\"end_time\":\"2024-11-28T18:16:26.419+05:00\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-ads-startup-cache\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{"
		"\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-03-01+"
		"05:00\",\"windows_build_number\":22631,\"client_id\":\"4691bf69-838a-4a5f-8495-dd6b7e5add4b\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"locale\":\"ru\",\"app_display_version\":\"133.0\",\"architecture\":\"x86_64\",\"app_build\":\"20241121140525\",\"app_channel\":\"release\"},\"metrics\":{\"counter\":{\"use.counter.css.doc.css_font_size\":2,\"use.counter.css.doc.css_font_weight\":1,\"use.counter.css.doc.css_height\":2,\"use.counter.css.doc.css_text_decoration\":1,\"use.counter.css.doc.css_width"
		"\":2,\"use.counter.css.doc.css_font_family\":2,\"use.counter.css.doc.css_fill\":2,\"use.counter.css.doc.css_color\":2,\"use.counter.css.doc.css_fill_opacity\":2,\"use.counter.content_documents_destroyed\":7}}}", 
		LAST);

	web_custom_request("d8d0923f-e7fc-4419-9a28-a8f8840be86f", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/d8d0923f-e7fc-4419-9a28-a8f8840be86f", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":42,\"start_time\":\"2024-11-27T19:38:35.000+05:00\",\"end_time\":\"2024-11-28T18:16:28.378+05:00\",\"experiments\":{\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":"
		"{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"disable-ads-startup-cache\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-03-01+05:00\",\"windows_build_number\":22631,\""
		"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"app_build\":\"20241121140525\",\"app_channel\":\"release\",\"locale\":\"ru\",\"os\":\"Windows\",\"app_display_version\":\"133.0\"},\"metrics\":{\"text\":{\"messaging_system.event_context\":\"\\\"cfr\\\"\",\"messaging_system.message_id\":\"n/a\"},\"uuid\":{\"messaging_system.impression_id\":\"3a94baee-c267-4156-be5e-288007d0eb59\"},\"string\":{\"messaging_system.locale\":\"ru\",\"messaging_system.addon_version\":\"20241121140525\",\""
		"messaging_system.ping_type\":\"undesired-events\",\"messaging_system.event\":\"ASR_RS_ERROR\"}}}", 
		LAST);

	web_custom_request("42800172-e1ac-4924-a8fc-8cc579b0a19b", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/42800172-e1ac-4924-a8fc-8cc579b0a19b", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":43,\"start_time\":\"2024-11-28T18:16:28.000+05:00\",\"end_time\":\"2024-11-28T18:16:28.387+05:00\",\"experiments\":{\"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"disable-ads-startup-cache\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\""
		":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"locale\":\"ru\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"os\":\"Windows\",\"app_build\":\""
		"20241121140525\",\"app_display_version\":\"133.0\",\"architecture\":\"x86_64\",\"first_run_date\":\"2024-03-01+05:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":22631},\"metrics\":{\"text\":{\"messaging_system.event_context\":\"\\\"cfr\\\"\",\"messaging_system.message_id\":\"n/a\"},\"string\":{\"messaging_system.ping_type\":\"undesired-events\",\"messaging_system.locale\":\"ru\",\"messaging_system.event\":\"ASR_RS_ERROR\",\"messaging_system.addon_version\":\""
		"20241121140525\"},\"uuid\":{\"messaging_system.impression_id\":\"3a94baee-c267-4156-be5e-288007d0eb59\"}}}", 
		LAST);

	web_custom_request("d6d32af7-c3cb-4687-83e4-2e63ed2d9d5c", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/d6d32af7-c3cb-4687-83e4-2e63ed2d9d5c", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":44,\"start_time\":\"2024-11-28T18:16:28.000+05:00\",\"end_time\":\"2024-11-28T18:16:28.395+05:00\",\"experiments\":{\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-ads-startup-cache\":{\"branch\":\"control\",\"extra"
		"\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-03-01+05:00\",\""
		"windows_build_number\":22631,\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"locale\":\"ru\",\"app_display_version\":\"133.0\",\"architecture\":\"x86_64\",\"app_build\":\"20241121140525\"},\"metrics\":{\"text\":{\"messaging_system.message_id\":\"n/a\",\"messaging_system.event_context\":\"\\\"cfr\\\"\"},\"string\":{\"messaging_system.addon_version\":\"20241121140525\",\"messaging_system.event\":\"ASR_RS_ERROR\",\"messaging_system.ping_type\":\"undesired-events\",\""
		"messaging_system.locale\":\"ru\"},\"uuid\":{\"messaging_system.impression_id\":\"3a94baee-c267-4156-be5e-288007d0eb59\"}}}", 
		LAST);

	web_custom_request("a0ac90bd-5a28-4057-8f1c-54eafec44554", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/a0ac90bd-5a28-4057-8f1c-54eafec44554", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":317,\"start_time\":\"2024-11-28T18:16:14.000+05:00\",\"end_time\":\"2024-11-28T18:20:03.497+05:00\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"windows_build_number\":22631,\"os_version\":\"10.0\",\"app_display_version\":\"133.0\",\"locale\":\"ru\",\"os\":\"Windows\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"app_build\":\"20241121140525\",\"client_id\":\"4691bf69-838a-4a5f-8495-dd6b7e5add4b\",\"build_date\":\""
		"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-03-01+05:00\"},\"metrics\":{\"quantity\":{\"topsites.rows\":1},\"string\":{\"newtab.locale\":\"ru\",\"newtab.newtab_category\":\"enabled\",\"newtab.homepage_category\":\"enabled\"},\"boolean\":{\"topsites.enabled\":true,\"pocket.enabled\":true,\"topsites.sponsored_enabled\":true,\"pocket.sponsored_stories_enabled\":true,\"newtab.search.enabled\":true,\"newtab.weather_enabled\":true,\"pocket.is_signed_in\":false},\"string_list\":{\""
		"newtab.blocked_sponsors\":[]}}}", 
		LAST);

	web_custom_request("02dcb698-8da5-4eaa-918b-3e4dcab7bb82", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/02dcb698-8da5-4eaa-918b-3e4dcab7bb82", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":297,\"start_time\":\"2024-11-28T18:16:14.000+05:00\",\"end_time\":\"2024-11-28T18:20:03.566+05:00\",\"reason\":\"active\",\"experiments\":{\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-ads-startup-cache\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":"
		"{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"app_build\":\"20241121140525\",\"os\":\"Windows\",\"app_channel\":\""
		"release\",\"app_display_version\":\"133.0\",\"locale\":\"ru\",\"first_run_date\":\"2024-03-01+05:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"client_id\":\"4691bf69-838a-4a5f-8495-dd6b7e5add4b\",\"windows_build_number\":22631},\"metrics\":{\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"dau-reporting\":1,\"events\":1,\"messaging-system\":3,\"newtab\":1,\"use-counters\":1}},\"counter\":{\"browser.engagement.active_ticks\":4},\"uuid\":{\"legacy.telemetry.client_id"
		"\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\",\"legacy.telemetry.profile_group_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\"}}}", 
		LAST);

	web_custom_request("aaac48a7-90be-48c1-9938-d5faac47c72d", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/dau-reporting/1/aaac48a7-90be-48c1-9938-d5faac47c72d", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":27,\"start_time\":\"2024-11-28T18:16:14.000+05:00\",\"end_time\":\"2024-11-28T18:20:03.573+05:00\",\"reason\":\"active\",\"experiments\":{\"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-ads-startup-cache\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch"
		"\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"client_id\":\"4691bf69-838a-4a5f-8495-dd6b7e5add4b\",\"app_display_version\":\"133.0\",\"os_version\":\"10.0"
		"\",\"app_channel\":\"release\",\"app_build\":\"20241121140525\",\"architecture\":\"x86_64\",\"locale\":\"ru\",\"os\":\"Windows\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-03-01+05:00\",\"windows_build_number\":22631},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\",\"legacy.telemetry.profile_group_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\"},\"counter\":{\"browser.engagement.active_ticks\":4}}}", 
		LAST);

	web_revert_auto_header("Priority");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("x-telemetry-agent");

	lr_think_time(6);

	web_custom_request("dns-query_5", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x08normandy\\x03cdn\\x07mozilla\\x03net\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00K\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00?"
		"\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("dns-query_6", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x08normandy\\x03cdn\\x07mozilla\\x03net\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00K\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00?"
		"\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_url("changeset_4", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/monitor/collections/changes/changeset?_expected=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("dns-query_7", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x08services\\x06addons\\x07mozilla\\x03org\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00H\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00"
		"<\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("dns-query_8", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x08services\\x06addons\\x07mozilla\\x03org\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00H\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00"
		"<\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_url("update.xml_2", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/133.0/20241121140525/WINNT_x86_64-msvc-x64/ru/release/Windows_NT%252010.0.0.0.22631.4541%2520(x64)/ISET%3ASSE4_2%2CMEM%3A16221/default/default/update.xml", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("changeset_5", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/security-state/collections/cert-revocations/changeset?_expected=1732784230074&_since=%221732719430285%22", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_add_header("Priority", 
		"u=2");

	web_custom_request("r10.o.lencr.org_5", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03'=\\xE3\\xB1\\xD0\\xF9{?\\x19\\x83/\\xD7x\\x08\\x88\\x87\\x03", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	lr_think_time(5);

	web_url("v1_2", 
		"URL=https://normandy.cdn.mozilla.net/api/v1/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("dns-query_9", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x0Fclassify-client\\x08services\\x07mozilla\\x03com\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00?"
		"\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x003\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("dns-query_10", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x0Fclassify-client\\x08services\\x07mozilla\\x03com\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00?"
		"\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x003\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		EXTRARES, 
		"Url=https://content-signature-2.cdn.mozilla.net/chains/onecrl.content-signature.mozilla.org-2024-12-27-18-19-45.chain", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Priority", 
		"u=2");

	web_custom_request("r11.o.lencr.org_6", 
		"URL=http://r11.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03d7y\\xB9\\x19p\\xCD\\xA7FXkxl\\xE5*\\xE0\\x81", 
		LAST);

	web_custom_request("ocsp.digicert.com_3", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x07\n\\xED\\xD4\\xBB:9\\x0E9ea\\x16\\xBF\\xAA\\xC3\\xBE", 
		LAST);

	web_custom_request("ocsp.digicert.com_4", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x07\n\\xED\\xD4\\xBB:9\\x0E9ea\\x16\\xBF\\xAA\\xC3\\xBE", 
		LAST);

	web_revert_auto_header("Priority");

	web_url("search", 
		"URL=https://services.addons.mozilla.org/api/v4/addons/search/?guid=jid1-NIfFY2CA8fy1tg%40jetpack%2Cdefault-theme%40mozilla.org%2Cgoogle%40search.mozilla.org%2Cwikipedia%40search.mozilla.org%2Cddg%40search.mozilla.org%2Caddons-search-detection%40mozilla.com%2Cfirefox-compact-light%40mozilla.org%2Cfirefox-compact-dark%40mozilla.org%2Cfirefox-alpenglow%40mozilla.org&lang=ru", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("classify_client", 
		"URL=https://classify-client.services.mozilla.com/api/v1/classify_client/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("dns-query_11", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x0Fversioncheck-bg\\x06addons\\x07mozilla\\x03org\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00A\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x005\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("dns-query_12", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x0Fversioncheck-bg\\x06addons\\x07mozilla\\x03org\\x00\\x00\\x01\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00A\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x005\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_url("VersionCheck.php", 
		"URL=https://versioncheck-bg.addons.mozilla.org/update/VersionCheck.php?reqVersion=2&id=jid1-NIfFY2CA8fy1tg@jetpack&version=6.11.1&maxAppVersion=*&status=userEnabled&appID={ec8030f7-c20a-464f-9b0e-13a3a9e97384}&appVersion=133.0&appOS=WINNT&appABI=x86_64-msvc&locale=ru&currentAppVersion=133.0&updateType=112&compatMode=normal", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-signature-2.cdn.mozilla.net/chains/202402/normandy.content-signature.mozilla.org-2025-01-01-20-48-28.chain?cachebust=2017-06-13-21-06", "Referer=", ENDITEM, 
		LAST);

	web_url("update.xml_3", 
		"URL=https://aus5.mozilla.org/update/3/SystemAddons/133.0/20241121140525/WINNT_x86_64-msvc-x64/ru/release/Windows_NT%252010.0.0.0.22631.4541%2520(x64)/default/default/update.xml", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=2");

	web_custom_request("ocsp.digicert.com_5", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\xE4\\xE3\\x95\\xA2)\\xD3\\xD4\\xC1\\xC3\\x1F\\xF0\\x98\\x0C\\x0BN\\xC0\t\\x8A\\xAB\\xD8\\x04\\x14\\xB7k\\xA2\\xEA\\xA8\\xAA\\x84\\x8Cy\\xEA\\xB4\\xDA\\x0F\\x98\\xB2\\xC5\\x95v\\xB9\\xF4\\x02\\x10\\x07\n\\xED\\xD4\\xBB:9\\x0E9ea\\x16\\xBF\\xAA\\xC3\\xBE", 
		LAST);

	lr_think_time(20);

	web_custom_request("20241121140525", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/78a83fc1-92f5-4799-b665-619abf4e7d39/main/Firefox/133.0/release/20241121140525?v=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t68.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"BodyBinary={\"type\":\"main\",\"id\":\"78a83fc1-92f5-4799-b665-619abf4e7d39\",\"creationDate\":\"2024-11-27T19:03:19.964Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20241121140525\",\"name\":\"Firefox\",\"version\":\"133.0\",\"displayVersion\":\"133.0\",\"vendor\":\"Mozilla\",\"platformVersion\":\"133.0\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"ver\":4,\"simpleMeasurements\":{\"totalTime\":1269,\"start\":121,\"main\":215,\"selectProfile"
		"\":234,\"afterProfileLocked\":235,\"startupCrashDetectionBegin\":787,\"startupCrashDetectionEnd\":32796,\"firstPaint\":5072,\"firstPaint2\":1632,\"sessionRestoreInit\":906,\"sessionRestored\":1705,\"createTopLevelWindow\":293,\"blankWindowShown\":788,\"AMI_startup_begin\":794,\"XPI_startup_begin\":801,\"XPI_bootstrap_addons_begin\":807,\"XPI_bootstrap_addons_end\":829,\"XPI_startup_end\":830,\"AMI_startup_end\":830,\"XPI_finalUIStartup\":907,\"sessionRestoreInitialized\":910,\""
		"delayedStartupStarted\":1645,\"delayedStartupFinished\":1667,\"debuggerAttached\":0,\"startupWindowVisibleReadBytes\":4570848,\"startupWindowVisibleWriteBytes\":86113,\"startupSessionRestoreReadBytes\":4577380,\"startupSessionRestoreWriteBytes\":116145,\"activeTicks\":11},\"processes\":{\"parent\":{\"scalars\":{\"contentblocking.cryptomining_blocking_enabled\":true,\"places.pages_need_frecency_recalculation\":0,\"os.environment.is_admin_without_uac\":false,\""
		"browser.searchinit.secure_opensearch_engine_count\":0,\"timestamps.first_paint\":5072,\"browser.searchinit.insecure_opensearch_engine_count\":0,\"browser.backup.storage_sync_size\":0,\"power.total_cpu_time_ms\":37298,\"browser.engagement.max_concurrent_tab_count\":2,\"browser.backup.preferences_size\":394,\"security.https_only_mode_enabled\":0,\"contentblocking.category\":0,\"pictureinpicture.toggle_enabled\":true,\"networking.nss_initialization\":20,\"browser.backup.security_data_size\":231,\""
		"browser.backup.session_store_size\":1290,\"dom.contentprocess.os_priority_raised\":6,\"gfx.tmp_writable\":true,\"dom.parentprocess.private_window_used\":true,\"browser.engagement.bookmarks_toolbar_bookmark_opened\":1,\"browser.backup.cookies_size\":1050,\"security.global_privacy_control_enabled\":0,\"browser.engagement.tab_open_event_count\":1,\"browser.engagement.total_uri_count_normal_and_private_mode\":1,\"networking.loading_certs_task\":23,\"gfx.supports_hdr\":false,\""
		"startup.seconds_since_last_os_restart\":9331,\"browser.engagement.session_time_including_suspend\":1268804,\"browser.backup.prof_d_disk_space\":466070000,\"browser.backup.misc_data_size\":19708,\"browser.backup.browser_extension_data_size\":0,\"os.environment.allowed_app_sources\":\"Anywhere\",\"formautofill.availability\":false,\"dom.contentprocess.os_priority_lowered\":7,\"browser.engagement.active_ticks\":11,\"browser.backup.form_history_size\":260,\"os.environment.launch_method\":\"Other\",\""
		"networking.http3_enabled\":true,\"browser.backup.places_size\":5240,\"gfx.os_compositor\":true,\"dom.contentprocess.os_priority_change_considered\":25,\"browser.engagement.profile_count\":1,\"a11y.use_system_colors\":true,\"browser.backup.favicons_size\":5240,\"browser.backup.session_store_backups_directory_size\":1020,\"browser.searchinit.insecure_opensearch_update_count\":0,\"policies.is_enterprise\":false,\"os.environment.is_taskbar_pinned_private\":false,\"networking.doh_heuristics_result\":1,"
		"\"browser.backup.credentials_data_size\":300,\"browser.backup.extensions_json_size\":71,\"browser.engagement.max_concurrent_window_count\":1,\"startup.profile_selection_reason\":\"default\",\"browser.backup.extensions_xpi_directory_size\":5360,\"a11y.backplate\":true,\"policies.count\":0,\"os.environment.is_taskbar_pinned\":true,\"networking.doh_heuristics_pass_count\":2,\"browser.engagement.session_time_excluding_suspend\":1268804,\"widget.dark_mode\":true,\""
		"browser.backup.extensions_storage_size\":1673,\"a11y.always_underline_links\":false,\"power.total_thread_wakeups\":126921,\"startup.profile_database_version\":\"2\",\"networking.doh_heuristics_attempts\":2,\"startup.profile_count\":2,\"contentblocking.fingerprinting_blocking_enabled\":true,\"places.previousday_visits\":2,\"browser.searchinit.secure_opensearch_update_count\":0,\"timestamps.first_paint_two\":1632,\"browser.engagement.max_concurrent_tab_pinned_count\":0,\"startup.is_cold\":false,\""
		"security.https_only_mode_enabled_pbm\":0,\"datasanitization.session_permission_exceptions\":0},\"keyedScalars\":{\"networking.speculative_connect_outcome\":{\"aborted_socket_limit\":21,\"successful\":56},\"networking.data_transferred_v3_kb\":{\"Y0_N1Sys\":5,\"Y13_P1\":22},\"telemetry.event_counts\":{\"doh#evaluate_v2#heuristics\":2,\"upgrade_dialog#trigger#reason\":1,\"network.dns#trrConfirmation#context\":2,\"normandy#validationFailed#nimbus_experiment\":2,\""
		"session_restore#backup_can_be_loaded#session_file\":2,\"doh#state#enabled\":2,\"form_autocomplete#show#logins\":2,\"session_restore#shutdown_success#session_startup\":1},\"media.device_hardware_decoding_support\":{\"h264\":true,\"av1\":false,\"hevc\":true,\"vp8\":true,\"vp9\":true},\"power.cpu_time_per_process_type_ms\":{\"parent.inactive\":19339,\"parent.active\":17959},\"browser.engagement.sessionrestore_interstitial\":{\"deferred_restore\":1},\"a11y.theme\":{\"default\":false},\""
		"browser.ui.toolbar_widgets\":{\"bookmark_pinned_pageaction-urlbar\":true,\"import-button_pinned_bookmarks-bar\":true,\"save-to-pocket-button_pinned_nav-bar-end\":true,\"fxa-toolbar-menu-button_pinned_nav-bar-end\":true,\"stop-reload-button_pinned_nav-bar-start\":true,\"firefox-view-button_pinned_tabs-bar\":true,\"downloads-button_pinned_nav-bar-end\":true,\"personal-bookmarks_pinned_bookmarks-bar\":true,\"menu-toolbar_pinned_off\":true,\"tabbrowser-tabs_pinned_tabs-bar\":true,\""
		"titlebar_pinned_off\":true,\"bookmarks-bar_pinned_on\":true,\"alltabs-button_pinned_tabs-bar\":true,\"new-tab-button_pinned_tabs-bar\":true,\"forward-button_pinned_nav-bar-start\":true,\"menubar-items_pinned_menu-bar\":true,\"back-button_pinned_nav-bar-start\":true,\"jid1-niffy2ca8fy1tg-jetpack_pinned_unified-extensions-area\":true,\"unified-extensions-button_pinned_nav-bar-end\":true},\"os.environment.is_default_handler\":{\"mailto\":false,\".pdf\":false},\"browser.ui.interaction.bookmarks_bar\":"
		"{\"bookmark-item\":1},\"power.wakeups_per_process_type\":{\"parent.inactive\":65926,\"parent.active\":60995},\"networking.doh_heuristic_ever_tripped\":{\"zscalerCanary\":false,\"policy\":false,\"proxy\":false,\"vpn\":false,\"nrpt\":false,\"youtube\":false,\"thirdPartyRoots\":false,\"canary\":false,\"google\":false,\"browserParent\":false},\"browser.ui.interaction.tabs_bar\":{\"tabs-newtab-button\":1,\"browser-window-minimize-button\":1,\"tab-close-button\":1},\""
		"networking.trr_connection_cycle_count\":{\"mozilla.cloudflare-dns.com\":4}}},\"content\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":20,\"range\":[1,10000],\"values\":{\"0\":11,\"1\":3,\"3\":2,\"5\":1,\"6\":1,\"7\":0}},\"GC_ZONE_COUNT\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":54,\"range\":[1,100],\"values\":{\"2\":0,\"3\":11,\"4\":3,\"9\":1,\"11\":0}},\"GC_ZONES_COLLECTED\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":43,\"range\""
		":[1,100],\"values\":{\"0\":0,\"1\":3,\"2\":4,\"3\":5,\"4\":2,\"9\":1,\"11\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":62,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":3,\"2\":1,\"3\":2,\"4\":3,\"5\":5,\"14\":1,\"17\":0}},\"GC_IN_PROGRESS_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1328,\"range\":[1,10000],\"values\":{\"48\":0,\"57\":2,\"68\":3,\"81\":8,\"96\":1,\"114\":1,\"135\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\""
		"range\":[1,2],\"values\":{\"0\":67,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":67,\"1\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":49,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":4,\"2\":3,\"3\":1,\"4\":1,\"5\":5,\"7\":1,\"8\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":15,\"1\":0}},\"GC_MARK_MS\":{\"bucket_count\":50,\""
		"histogram_type\":0,\"sum\":20,\"range\":[1,10000],\"values\":{\"0\":7,\"1\":1,\"2\":3,\"3\":3,\"4\":1,\"5\":0}},\"GC_SWEEP_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":24,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":10,\"2\":2,\"3\":1,\"7\":1,\"8\":0}},\"GC_COMPACT_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":3,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"2\":1,\"3\":0}},\"GC_SLICE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":58,\"range\":[1,10000],\"values\":{"
		"\"0\":47,\"1\":7,\"2\":4,\"3\":1,\"4\":2,\"5\":5,\"7\":1,\"8\":0}},\"GC_MMU_50\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":1355,\"range\":[1,100],\"values\":{\"62\":0,\"67\":1,\"84\":2,\"89\":9,\"95\":3,\"100\":0}},\"GC_MINOR_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":10044,\"range\":[1,1000000],\"values\":{\"0\":0,\"1\":5,\"2\":5,\"8\":1,\"9\":1,\"17\":1,\"19\":2,\"22\":1,\"28\":1,\"36\":1,\"47\":2,\"60\":1,\"148\":1,\"191\":1,\"217\":1,\"247\":1,\"281\":1,\"320\":1,\"364\":3"
		",\"471\":1,\"610\":1,\"695\":2,\"1514\":1,\"2545\":1,\"2898\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1236,\"range\":[1,2000],\"values\":{\"0\":7,\"1\":1,\"15\":4,\"17\":1,\"22\":1,\"25\":13,\"29\":24,\"57\":1,\"65\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":67,\"range\":[1,200],\"values\":{\"2\":0,\"3\":1,\"4\":9,\"5\":2,\"6\":3,\"7\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1149104,\""
		"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":116,\"23\":76,\"34\":11,\"41\":8,\"74\":11,\"90\":3,\"109\":6,\"132\":1,\"160\":28,\"284\":6,\"344\":8,\"503\":22,\"609\":12,\"737\":120,\"892\":38,\"1080\":7,\"1307\":2,\"1582\":3,\"1915\":1,\"2318\":1,\"2805\":1,\"3395\":5,\"4973\":7,\"6019\":1,\"7284\":5,\"8815\":2,\"18910\":1,\"27698\":4,\"40569\":1,\"49098\":1,\"71914\":1,\"87033\":5,\"105331\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":37014,\"range\":[1,"
		"2147483646],\"values\":{\"0\":0,\"1\":192,\"3\":19,\"5\":20,\"8\":34,\"12\":10,\"19\":28,\"30\":162,\"47\":19,\"73\":2,\"113\":6,\"176\":1,\"274\":6,\"426\":3,\"1029\":6,\"1599\":1,\"2485\":5,\"3862\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":12146,\"range\":[1,150000000],\"values\":{\"0\":61,\"1\":54,\"2\":40,\"3\":29,\"4\":20,\"5\":14,\"6\":12,\"7\":21,\"8\":29,\"10\":28,\"12\":53,\"14\":44,\"17\":21,\"20\":18,\"24\":12,\"29\":9,\"35\":8,\"42\":7,\"50\":7,\"60\":5"
		",\"87\":2,\"105\":3,\"126\":4,\"151\":4,\"263\":1,\"316\":2,\"380\":2,\"457\":2,\"549\":1,\"1657\":1,\"1992\":0}},\"GEOLOCATION_ERROR\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"MEMORY_RESIDENT_FAST\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":5053420,\"range\":[32768,16777216],\"values\":{\"0\":62,\"66000\":4,\"70338\":34,\"74961\":3,\"79888\":1,\"85139\":0}},\"MEMORY_UNIQUE\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\""
		":1465580,\"range\":[32768,16777216],\"values\":{\"0\":104,\"32768\":0}},\"MEMORY_JS_GC_HEAP\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":300032,\"range\":[1024,16777216],\"values\":{\"0\":0,\"1024\":62,\"4040\":21,\"6925\":21,\"7273\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":104,\"1\":0}},\"MEMORY_PHC_SLOP\":{\"bucket_count\":48,\"histogram_type\":0,\"sum\":1285792,\"range\":[4096,8388608],\"values\":{\"0\":62,\"25361\""
		":40,\"35329\":1,\"41698\":1,\"49216\":0}},\"MEMORY_PHC_SLOTS_ALLOCATED\":{\"bucket_count\":64,\"histogram_type\":0,\"sum\":320,\"range\":[1,16384],\"values\":{\"0\":42,\"1\":20,\"7\":40,\"9\":1,\"11\":1,\"13\":0}},\"MEMORY_PHC_SLOTS_FREED\":{\"bucket_count\":64,\"histogram_type\":0,\"sum\":1499,\"range\":[1,16384],\"values\":{\"0\":41,\"1\":18,\"2\":3,\"23\":1,\"26\":12,\"30\":9,\"40\":20,\"46\":0}},\"TOTAL_CONTENT_PAGE_LOAD_TIME\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":14667,\"range\""
		":[100,30000],\"values\":{\"0\":2,\"100\":1,\"142\":1,\"151\":1,\"160\":1,\"180\":1,\"202\":1,\"270\":1,\"303\":1,\"12534\":1,\"13285\":0}},\"HTTP_PAGE_DNS_ISSUE_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":28,\"range\":[1,30000],\"values\":{\"1\":0,\"2\":2,\"9\":1,\"13\":1,\"16\":0}},\"HTTP_PAGE_DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":51,\"range\":[1,30000],\"values\":{\"0\":2,\"2\":1,\"4\":1,\"11\":1,\"29\":1,\"35\":0}},\"HTTP_PAGE_TCP_CONNECTION_2\":{\""
		"bucket_count\":50,\"histogram_type\":0,\"sum\":12766,\"range\":[1,30000],\"values\":{\"2\":0,\"3\":1,\"4\":1,\"5\":1,\"7\":1,\"9\":1,\"11106\":1,\"13548\":0}},\"HTTP_SUB_DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":3,\"range\":[1,30000],\"values\":{\"0\":1,\"3\":1,\"4\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":88,\"range\":[1,50],\"values\":{\"0\":85,\"2\":44,\"3\":0}},\"FX_ABOUTHOME_CACHE_CONSTRUCTION\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":144,\"range\":[1,10000],\"values\":{\"7\":0,\"8\":2,\"9\":1,\"11\":1,\"25\":1,\"80\":1,\"86\":0}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":26539,\"range\":[1,10000],\"values\":{\"0\":105,\"1\":34,\"2\":87,\"3\":106,\"4\":126,\"5\":129,\"6\":166,\"7\":148,\"8\":376,\"10\":268,\"12\":346,\"14\":481,\"17\":213,\"20\":39,\"24\":12,\"29\":1,\"160\":2,\"190\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\""
		":0,\"sum\":8437,\"range\":[1,10000],\"values\":{\"0\":47,\"1\":5,\"2\":1,\"3\":3,\"4\":6,\"5\":1,\"6\":8,\"7\":5,\"8\":17,\"10\":48,\"12\":119,\"14\":39,\"17\":12,\"20\":5,\"24\":19,\"29\":51,\"34\":4,\"40\":40,\"48\":1,\"57\":8,\"68\":3,\"81\":4,\"160\":1,\"190\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"PWMGR_FORM_AUTOFILL_RESULT\":{\"bucket_count\":21,\"histogram_type\":1,\"sum\":8,\"range\":[1,20],\""
		"values\":{\"3\":0,\"4\":2,\"5\":0}},\"PWMGR_LOGIN_PAGE_SAFETY\":{\"bucket_count\":9,\"histogram_type\":1,\"sum\":8,\"range\":[1,8],\"values\":{\"3\":0,\"4\":2,\"5\":0}},\"PWMGR_IS_USERNAME_ONLY_FORM\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":2,\"1\":0}},\"PWMGR_SIGNUP_FORM_DETECTION_MS\":{\"bucket_count\":70,\"histogram_type\":0,\"sum\":9,\"range\":[1,10000],\"values\":{\"3\":0,\"4\":1,\"5\":1,\"6\":0}},\"JS_PAGELOAD_PARSE_MS\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":3,\"1\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":14,\"range\":[1,1000],\"values\":{\"0\":99,\"1\":7,\"2\":2,\"3\":1,\"4\":0}},\"TIME_TO_NON_BLANK_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":12980,\"range\":[1,100000],\"values\":{\"211\":0,\"234\":1,\"12377\":1,\"13740\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1128,\"range\":[1"
		",100000],\"values\":{\"61\":0,\"68\":2,\"102\":1,\"113\":1,\"125\":1,\"171\":1,\"190\":1,\"234\":1,\"260\":0}},\"INPUT_EVENT_QUEUED_CLICK_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":136,\"range\":[1,5000],\"values\":{\"4\":0,\"5\":1,\"8\":1,\"14\":1,\"16\":1,\"18\":1,\"23\":2,\"27\":1,\"29\":0}},\"INPUT_EVENT_QUEUED_KEYBOARD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":297,\"range\":[1,5000],\"values\":{\"2\":0,\"3\":1,\"5\":1,\"6\":2,\"7\":4,\"8\":3,\"9\":1,\"11\":2,\"12\""
		":2,\"13\":4,\"15\":1,\"16\":2,\"17\":2,\"18\":1,\"19\":1,\"20\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":12792,\"range\":[1,50000],\"values\":{\"1\":0,\"2\":1,\"4\":1,\"119\":1,\"11846\":1,\"13040\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":12930,\"range\":[1,50000],\"values\":{\"23\":0,\"25\":1,\"31\":1,\"144\":1,\"11846\":1,\"13040\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":12943,\"range\":[1,50000],\"values\":{\"25\":0,\"28\":1,\"31\":1,\"144\":1,\"11846\":1,\"13040\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":12952,\"range\":[1,50000],\"values\":{\"28\":0,\"31\":1,\"34\":1,\"144\":1,\"11846\":1,\"13040\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":13313,\"range\":[1,50000],\"values\":{\"28\":0,\"31\":1,\"34\":1,\"232\":1,\"11846\":1,\"13040\":0}},\""
		"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":13313,\"range\":[1,50000],\"values\":{\"28\":0,\"31\":1,\"34\":1,\"232\":1,\"11846\":1,\"13040\":0}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":13313,\"range\":[1,50000],\"values\":{\"28\":0,\"31\":1,\"34\":1,\"232\":1,\"11846\":1,\"13040\":0}},\"PERF_PAGE_LOAD_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":13009,\"range\":[1,50000],\"values\":{\"10762\":0,\"11846\""
		":1,\"13040\":0}},\"PERF_PAGE_LOAD_TIME_FROM_RESPONSESTART_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":357,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}},\"WEBEXT_CONTENT_SCRIPT_INJECTION_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":65,\"range\":[1,50000],\"values\":{\"0\":22,\"3\":1,\"4\":2,\"5\":4,\"6\":2,\"7\":1,\"15\":1,\"17\":0}},\"APZ_ZOOM_ACTIVITY\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":2,\"1\":0}},\""
		"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":20,\"range\":[1,50],\"values\":{\"0\":6,\"2\":10,\"3\":0}}},\"keyedHistograms\":{\"NETWORK_ASYNC_OPEN_CHILD_TO_TRANSACTION_PENDING_EXP_MS\":{\"0\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":226,\"range\":[1,2000],\"values\":{\"3\":0,\"4\":1,\"7\":1,\"9\":1,\"15\":1,\"19\":3,\"22\":2,\"25\":1,\"50\":1,\"57\":0}}},\"NETWORK_RESPONSE_START_PARENT_TO_CONTENT_EXP_MS\":{\"0\":{\"bucket_count\":50,\"histogram_type\":0,\""
		"sum\":255,\"range\":[1,2000],\"values\":{\"2\":0,\"3\":2,\"6\":3,\"7\":1,\"8\":2,\"11\":2,\"13\":1,\"15\":1,\"19\":2,\"25\":1,\"38\":1,\"44\":1,\"50\":0}},\"40\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":13,\"range\":[1,2000],\"values\":{\"11\":0,\"13\":1,\"15\":0}},\"120\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":14,\"range\":[1,2000],\"values\":{\"11\":0,\"13\":1,\"15\":0}}},\"NETWORK_RESPONSE_END_PARENT_TO_CONTENT_MS\":{\"0\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\""
		":374,\"range\":[1,2000],\"values\":{\"3\":0,\"4\":1,\"13\":5,\"15\":2,\"17\":1,\"19\":3,\"22\":2,\"33\":1,\"50\":1,\"57\":1,\"65\":0}},\"40\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":28,\"range\":[1,2000],\"values\":{\"22\":0,\"25\":1,\"29\":0}},\"120\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":19,\"range\":[1,2000],\"values\":{\"17\":0,\"19\":1,\"22\":0}}},\"DNS_PERF_FIRST_BYTE_MS\":{\"Native\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":12652,\"range\":[1,30000],\"values"
		"\":{\"11135\":0,\"12185\":1,\"13334\":0}}},\"WEBEXT_CONTENT_SCRIPT_INJECTION_MS_BY_ADDONID\":{\"jid1-NIfFY2CA8fy1tg@jetpack\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":65,\"range\":[1,50000],\"values\":{\"0\":22,\"3\":1,\"4\":2,\"5\":4,\"6\":2,\"7\":1,\"15\":1,\"17\":0}}}},\"scalars\":{\"power.total_cpu_time_ms\":3298,\"script.preloader.mainthread_recompile\":5,\"power.total_thread_wakeups\":20890},\"keyedScalars\":{\"power.cpu_time_per_process_type_ms\":{\"web.background\":119,\""
		"web.foreground\":1043,\"prealloc\":1222,\"privilegedabout\":914},\"power.wakeups_per_process_type\":{\"web.background\":780,\"web.foreground\":10787,\"prealloc\":1807,\"privilegedabout\":7516}}},\"extension\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2,\"range\":[1,10000],\"values\":{\"0\":12,\"2\":1,\"3\":0}},\"GC_ZONE_COUNT\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":52,\"range\":[1,100],\"values\":{\"6\":0,\"7\":4,\"11\":2,\"14\":0}"
		"},\"GC_ZONES_COLLECTED\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":39,\"range\":[1,100],\"values\":{\"0\":0,\"1\":1,\"2\":1,\"7\":2,\"9\":1,\"11\":1,\"14\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":155,\"range\":[1,10000],\"values\":{\"3\":0,\"4\":1,\"24\":3,\"29\":1,\"34\":1,\"40\":0}},\"GC_IN_PROGRESS_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1063,\"range\":[1,10000],\"values\":{\"57\":0,\"68\":1,\"81\":2,\"96\":1,\"114\":1,\"533\":1,\"633\":0}},\""
		"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":28,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":28,\"1\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":135,\"range\":[1,10000],\"values\":{\"1\":0,\"2\":1,\"10\":1,\"24\":2,\"29\":1,\"34\":1,\"40\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000"
		"],\"values\":{\"0\":6,\"1\":0}},\"GC_MARK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":123,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"20\":1,\"24\":4,\"29\":0}},\"GC_SWEEP_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":26,\"range\":[1,10000],\"values\":{\"0\":1,\"2\":1,\"4\":1,\"5\":2,\"10\":1,\"12\":0}},\"GC_COMPACT_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"GC_SLICE_MS\":{\"bucket_count\":50,\""
		"histogram_type\":0,\"sum\":153,\"range\":[1,10000],\"values\":{\"0\":17,\"1\":1,\"2\":1,\"3\":1,\"4\":1,\"5\":2,\"10\":1,\"24\":2,\"29\":1,\"34\":1,\"40\":0}},\"GC_MMU_50\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":303,\"range\":[1,100],\"values\":{\"12\":0,\"18\":1,\"34\":1,\"40\":1,\"45\":1,\"62\":1,\"89\":1,\"95\":0}},\"GC_MINOR_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":220874,\"range\":[1,1000000],\"values\":{\"1\":0,\"2\":1,\"4\":1,\"9\":2,\"10\":1,\"11\":1,\"13\":1,\""
		"41\":1,\"47\":2,\"53\":2,\"68\":1,\"88\":1,\"100\":2,\"114\":1,\"130\":1,\"148\":2,\"168\":1,\"191\":3,\"247\":1,\"281\":2,\"320\":2,\"364\":3,\"414\":4,\"471\":3,\"536\":3,\"610\":1,\"695\":1,\"791\":1,\"901\":2,\"1026\":1,\"1514\":2,\"1724\":1,\"2235\":1,\"2898\":1,\"3300\":1,\"3758\":2,\"4279\":3,\"4872\":2,\"5548\":4,\"6317\":3,\"7193\":3,\"8190\":1,\"9326\":2,\"10619\":3,\"12092\":1,\"15678\":1,\"17852\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":897,"
		"\"range\":[1,2000],\"values\":{\"0\":4,\"8\":1,\"11\":1,\"15\":2,\"17\":1,\"19\":1,\"22\":1,\"25\":1,\"29\":8,\"225\":1,\"258\":1,\"296\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":28,\"range\":[1,200],\"values\":{\"3\":0,\"4\":4,\"5\":1,\"7\":1,\"8\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":5534072,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":585,\"23\":42,\"28\":1,\"34\":266,\"41\":23,\"50\":6,\"61\":68,\"74\":5,\"90\":20,"
		"\"109\":29,\"132\":9,\"160\":5,\"194\":7,\"235\":74,\"284\":21,\"344\":35,\"416\":10,\"503\":218,\"609\":98,\"737\":90,\"892\":142,\"1080\":72,\"1307\":22,\"1582\":66,\"1915\":52,\"2318\":25,\"2805\":12,\"3395\":12,\"4109\":10,\"4973\":19,\"6019\":11,\"7284\":10,\"8815\":19,\"10668\":12,\"12911\":3,\"15625\":1,\"18910\":3,\"27698\":2,\"40569\":1,\"49098\":1,\"186713\":1,\"400557\":1,\"2700166\":1,\"3267857\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":73795,\"range"
		"\":[1,2147483646],\"values\":{\"0\":0,\"1\":629,\"2\":1,\"3\":353,\"5\":72,\"8\":33,\"12\":416,\"19\":215,\"30\":78,\"47\":127,\"73\":61,\"113\":66,\"176\":11,\"274\":13,\"426\":22,\"662\":6,\"1029\":4,\"1599\":1,\"2485\":2,\"3862\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":21844,\"range\":[1,150000000],\"values\":{\"0\":420,\"1\":299,\"2\":209,\"3\":146,\"4\":111,\"5\":76,\"6\":76,\"7\":54,\"8\":79,\"10\":100,\"12\":99,\"14\":123,\"17\":65,\"20\":53,\"24\":59,\"29"
		"\":44,\"35\":20,\"42\":18,\"50\":17,\"60\":16,\"72\":5,\"87\":5,\"105\":5,\"126\":3,\"151\":1,\"182\":3,\"316\":1,\"549\":1,\"793\":1,\"953\":1,\"1146\":0}},\"GEOLOCATION_ERROR\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"MEMORY_RESIDENT_FAST\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2910420,\"range\":[32768,16777216],\"values\":{\"132939\":0,\"141677\":19,\"182760\":1,\"194772\":0}},\"MEMORY_UNIQUE\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":1974352,\"range\":[32768,16777216],\"values\":{\"85139\":0,\"90735\":6,\"96699\":13,\"124740\":1,\"132939\":0}},\"MEMORY_JS_GC_HEAP\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":717824,\"range\":[1024,16777216],\"values\":{\"31641\":0,\"33230\":18,\"36652\":1,\"54249\":1,\"56974\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":20,\"1\":0}},\"MEMORY_PHC_SLOP\":{\"bucket_count\":48,\"histogram_type\":0,"
		"\"sum\":5849616,\"range\":[4096,8388608],\"values\":{\"218771\":0,\"258212\":19,\"304763\":1,\"359707\":0}},\"MEMORY_PHC_SLOTS_ALLOCATED\":{\"bucket_count\":64,\"histogram_type\":0,\"sum\":1460,\"range\":[1,16384],\"values\":{\"61\":0,\"70\":20,\"81\":0}},\"MEMORY_PHC_SLOTS_FREED\":{\"bucket_count\":64,\"histogram_type\":0,\"sum\":827,\"range\":[1,16384],\"values\":{\"26\":0,\"30\":1,\"40\":19,\"46\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":36,\"range\":"
		"[1,50],\"values\":{\"0\":15,\"2\":18,\"3\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"JS_PAGELOAD_PARSE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":4,\"1\":1,\"2\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":17,\"1\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0"
		",\"sum\":219,\"range\":[1,50000],\"values\":{\"19\":0,\"21\":1,\"23\":1,\"45\":1,\"50\":1,\"67\":1,\"74\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":960,\"range\":[1,50000],\"values\":{\"89\":0,\"98\":2,\"119\":1,\"144\":1,\"454\":1,\"500\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":999,\"range\":[1,50000],\"values\":{\"98\":0,\"108\":2,\"144\":2,\"454\":1,\"500\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS"
		"\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1000,\"range\":[1,50000],\"values\":{\"98\":0,\"108\":2,\"144\":2,\"454\":1,\"500\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1001,\"range\":[1,50000],\"values\":{\"98\":0,\"108\":2,\"144\":2,\"454\":1,\"500\":0}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1001,\"range\":[1,50000],\"values\":{\"98\":0,\"108\":2,\"144\":2,\"454\":1,\"500\":0}},\""
		"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1001,\"range\":[1,50000],\"values\":{\"98\":0,\"108\":2,\"144\":2,\"454\":1,\"500\":0}},\"WEBEXT_STORAGE_LOCAL_IDB_GET_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":567,\"range\":[1,50000],\"values\":{\"0\":3,\"1\":8,\"2\":6,\"3\":3,\"4\":2,\"5\":1,\"6\":1,\"8\":1,\"10\":2,\"11\":2,\"15\":2,\"17\":1,\"19\":1,\"28\":2,\"158\":2,\"174\":0}},\"WEBEXT_STORAGE_LOCAL_IDB_SET_MS\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":166,\"range\":[1,50000],\"values\":{\"1\":0,\"2\":2,\"7\":1,\"12\":1,\"15\":6,\"17\":3,\"19\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":23,\"1\":0}}},\"keyedHistograms\":{\"WEBEXT_STORAGE_LOCAL_IDB_GET_MS_BY_ADDONID\":{\"jid1-NIfFY2CA8fy1tg@jetpack\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":567,\"range\":[1,50000],\"values\":{\"0\":3,\"1\":8,\"2\":6,\"3\":3,\"4\":2,\"5\":1,\"6\":1,\"8\""
		":1,\"10\":2,\"11\":2,\"15\":2,\"17\":1,\"19\":1,\"28\":2,\"158\":2,\"174\":0}}},\"WEBEXT_STORAGE_LOCAL_IDB_SET_MS_BY_ADDONID\":{\"jid1-NIfFY2CA8fy1tg@jetpack\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":167,\"range\":[1,50000],\"values\":{\"1\":0,\"2\":2,\"7\":1,\"12\":1,\"15\":6,\"17\":3,\"19\":0}}}},\"scalars\":{\"power.total_cpu_time_ms\":2685,\"script.preloader.mainthread_recompile\":1,\"power.total_thread_wakeups\":5190},\"keyedScalars\":{\"power.cpu_time_per_process_type_ms\":{\""
		"extension\":2685},\"power.wakeups_per_process_type\":{\"extension\":5190}}},\"dynamic\":{\"scalars\":{},\"keyedScalars\":{}},\"gpu\":{\"histograms\":{\"COMPOSITE_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2181,\"range\":[1,1000],\"values\":{\"0\":1563,\"1\":483,\"2\":374,\"3\":112,\"4\":43,\"5\":16,\"6\":9,\"7\":4,\"8\":3,\"9\":3,\"23\":1,\"95\":2,\"107\":0}},\"COMPOSITE_SWAP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":3698,\"range\":[1,1000],\"values\":{\"0\":78,\"1\":6"
		",\"2\":399,\"3\":280,\"4\":98,\"5\":56,\"6\":33,\"7\":27,\"8\":27,\"9\":7,\"10\":5,\"11\":7,\"12\":11,\"14\":5,\"16\":1,\"18\":2,\"20\":2,\"42\":1,\"75\":2,\"84\":1,\"95\":0}},\"GPU_PROCESS_INITIALIZATION_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":602,\"range\":[1,64000],\"values\":{\"499\":0,\"551\":1,\"608\":0}},\"KEYPRESS_PRESENT_LATENCY\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":162,\"range\":[1,200000],\"values\":{\"10\":0,\"13\":1,\"17\":4,\"22\":3,\"28\":0}},\""
		"MOUSEUP_FOLLOWED_BY_CLICK_PRESENT_LATENCY\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":208,\"range\":[1,200000],\"values\":{\"13\":0,\"17\":2,\"22\":4,\"28\":1,\"36\":1,\"46\":0}},\"CONTENT_FULL_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":42,\"range\":[1,1000],\"values\":{\"0\":80,\"1\":23,\"2\":8,\"3\":1,\"4\":0}},\"CONTENT_FRAME_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":9142795,\"range\":[1,5000],\"values\":{\"11\":0,\"13\":1,\"15\":3,\"18\":1,\"25\":9,\""
		"29\":7,\"34\":8,\"40\":6,\"47\":5,\"55\":7,\"64\":7,\"75\":3,\"88\":10,\"103\":13,\"120\":9,\"140\":8,\"164\":2,\"224\":3,\"487\":1,\"777\":1,\"1059\":1,\"1445\":2,\"1688\":1,\"5000\":3}},\"CONTENT_FRAME_TIME_VSYNC\":{\"bucket_count\":100,\"histogram_type\":1,\"sum\":10159,\"range\":[8,792],\"values\":{\"24\":0,\"32\":1,\"40\":1,\"104\":2,\"112\":3,\"120\":2,\"128\":13,\"136\":2,\"144\":3,\"152\":3,\"160\":5,\"168\":3,\"184\":1,\"232\":5,\"240\":1,\"792\":2}},\"WR_RENDERER_TIME\":{\"bucket_count\""
		":50,\"histogram_type\":0,\"sum\":935,\"range\":[1,1000],\"values\":{\"0\":420,\"1\":575,\"2\":104,\"3\":29,\"4\":6,\"5\":2,\"6\":2,\"18\":1,\"20\":0}},\"WR_RENDERER_TIME_NO_SC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":899,\"range\":[1,1000],\"values\":{\"0\":420,\"1\":574,\"2\":103,\"3\":29,\"4\":5,\"6\":2,\"7\":0}}},\"keyedHistograms\":{},\"scalars\":{\"power.total_cpu_time_ms\":5422,\"power.total_thread_wakeups\":50316,\"power.total_gpu_time_ms\":335},\"keyedScalars\":{\""
		"power.gpu_time_per_process_type_ms\":{\"gpu\":335},\"power.cpu_time_per_process_type_ms\":{\"gpu\":5422},\"power.wakeups_per_process_type\":{\"gpu\":50316}}},\"socket\":{\"histograms\":{},\"keyedHistograms\":{},\"scalars\":{},\"keyedScalars\":{}},\"utility\":{\"histograms\":{},\"keyedHistograms\":{},\"scalars\":{\"power.total_cpu_time_ms\":233,\"power.total_thread_wakeups\":141},\"keyedScalars\":{\"power.cpu_time_per_process_type_ms\":{\"utility\":233},\"power.wakeups_per_process_type\":{\""
		"utility\":141}}}},\"histograms\":{\"A11Y_INSTANTIATED_FLAG\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"CHILD_PROCESS_LAUNCH_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":4469,\"range\":[1,64000],\"values\":{\"92\":0,\"102\":1,\"138\":1,\"152\":1,\"168\":2,\"741\":1,\"818\":1,\"997\":2,\"1101\":0}},\"CONTENT_PROCESS_LAUNCH_MAINTHREAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":8,\"range\":[1,64000],\"values\":{\"0\":0,\""
		"1\":2,\"3\":2,\"4\":0}},\"CONTENT_PROCESS_LAUNCH_TOTAL_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":3091,\"range\":[1,64000],\"values\":{\"152\":0,\"168\":1,\"741\":1,\"997\":2,\"1101\":0}},\"CONTENT_PROCESS_SYNC_LAUNCH_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":298,\"range\":[1,64000],\"values\":{\"92\":0,\"102\":1,\"185\":1,\"204\":0}},\"CONTENT_PROCESS_LAUNCH_IS_SYNC\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":4,\"1\":2,\"2\":0}"
		"},\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":115,\"range\":[1,10000],\"values\":{\"1\":0,\"2\":6,\"3\":6,\"4\":3,\"5\":1,\"8\":1,\"10\":1,\"12\":1,\"34\":1,\"40\":0}},\"GC_ZONE_COUNT\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":21,\"range\":[1,100],\"values\":{\"1\":0,\"2\":9,\"3\":1,\"4\":0}},\"GC_ZONES_COLLECTED\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":18,\"range\":[1,100],\"values\":{\"0\":0,\"1\":3,\"2\":6,\"3\":1,\"4\":0}},\"GC_MS\":{\""
		"bucket_count\":50,\"histogram_type\":0,\"sum\":193,\"range\":[1,10000],\"values\":{\"8\":0,\"10\":2,\"12\":2,\"14\":1,\"17\":1,\"20\":2,\"29\":1,\"40\":1,\"48\":0}},\"GC_IN_PROGRESS_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":852,\"range\":[1,10000],\"values\":{\"34\":0,\"40\":1,\"57\":1,\"68\":3,\"81\":2,\"96\":3,\"114\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":44,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":44,\"1\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":169,\"range\":[1,10000],\"values\":{\"8\":0,\"10\":2,\"12\":3,\"14\":2,\"17\":1,\"20\":1,\"40\":1,\"48\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4,\"range\":[1,1000],\"values\":{\"0\":7,\"1\":2,\"2\":1,\"3\":0}},\"GC_MARK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":112,\"range\":[1,10000],\""
		"values\":{\"7\":0,\"8\":3,\"10\":4,\"14\":3,\"17\":0}},\"GC_SWEEP_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":58,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"2\":2,\"3\":1,\"4\":1,\"5\":2,\"6\":2,\"24\":1,\"29\":0}},\"GC_COMPACT_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":13,\"range\":[1,10000],\"values\":{\"10\":0,\"12\":1,\"14\":0}},\"GC_SLICE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":186,\"range\":[1,10000],\"values\":{\"0\":31,\"1\":1,\"3\":1,\"10\":2,\""
		"12\":4,\"14\":2,\"17\":1,\"20\":1,\"40\":1,\"48\":0}},\"GC_MMU_50\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":603,\"range\":[1,100],\"values\":{\"7\":0,\"12\":1,\"40\":1,\"56\":2,\"62\":1,\"67\":1,\"73\":4,\"78\":0}},\"GC_MINOR_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":39748,\"range\":[1,1000000],\"values\":{\"0\":0,\"1\":1,\"2\":2,\"7\":2,\"8\":1,\"22\":3,\"28\":1,\"32\":1,\"36\":1,\"47\":3,\"53\":1,\"60\":1,\"77\":1,\"100\":1,\"130\":5,\"148\":2,\"168\":6,\"191\":4,\"217\""
		":2,\"247\":4,\"281\":1,\"414\":2,\"536\":1,\"610\":1,\"695\":1,\"901\":1,\"1026\":2,\"1168\":3,\"1330\":1,\"1514\":1,\"1963\":1,\"2235\":1,\"2898\":1,\"3758\":1,\"4279\":1,\"4872\":1,\"5548\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":642,\"range\":[1,2000],\"values\":{\"0\":6,\"1\":1,\"15\":6,\"17\":5,\"19\":2,\"25\":1,\"29\":13,\"33\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":44,\"range\":[1,200],\"values\":{\"2\":0,\"3\":3,"
		"\"4\":4,\"5\":2,\"9\":1,\"10\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":7358080,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":1148,\"23\":30,\"28\":1,\"34\":33,\"41\":19,\"50\":23,\"61\":6,\"74\":45,\"90\":30,\"109\":12,\"132\":6,\"160\":5,\"194\":11,\"235\":283,\"284\":1780,\"344\":270,\"416\":282,\"503\":119,\"609\":176,\"737\":433,\"892\":144,\"1080\":130,\"1307\":38,\"1582\":21,\"1915\":48,\"2318\":56,\"2805\":14,\"3395\":16,\"4109\":18,\"4973\":20,\""
		"6019\":12,\"7284\":11,\"8815\":15,\"10668\":111,\"12911\":13,\"15625\":3,\"18910\":9,\"22886\":2,\"27698\":5,\"33521\":3,\"40569\":3,\"49098\":15,\"105331\":3,\"127476\":1,\"154277\":1,\"186713\":1,\"710039\":1,\"859320\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":324927,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":1188,\"3\":71,\"5\":102,\"8\":2009,\"12\":287,\"19\":535,\"30\":554,\"47\":276,\"73\":102,\"113\":51,\"176\":38,\"274\":20,\"426\":131,\"662\":23,"
		"\"1029\":10,\"1599\":21,\"2485\":1,\"3862\":2,\"6002\":2,\"9328\":3,\"14498\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":67712,\"range\":[1,150000000],\"values\":{\"0\":293,\"1\":889,\"2\":1008,\"3\":657,\"4\":376,\"5\":282,\"6\":303,\"7\":263,\"8\":287,\"10\":179,\"12\":132,\"14\":150,\"17\":108,\"20\":73,\"24\":66,\"29\":46,\"35\":41,\"42\":41,\"50\":34,\"60\":43,\"72\":33,\"87\":28,\"105\":35,\"126\":14,\"151\":10,\"182\":8,\"219\":6,\"263\":4,\"316\":1,\"380\":3,"
		"\"457\":4,\"660\":1,\"953\":2,\"1146\":3,\"1657\":1,\"1992\":1,\"2395\":1,\"2879\":0}},\"GEOLOCATION_ERROR\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"GPU_PROCESS_LAUNCH_TIME_MS_2\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":849,\"range\":[1,64000],\"values\":{\"741\":0,\"818\":1,\"903\":0}},\"MEMORY_RESIDENT_FAST\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":5268604,\"range\":[32768,16777216],\"values\":{\"235757\":0,\""
		"251252\":19,\"267766\":1,\"285365\":0}},\"MEMORY_TOTAL\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":8612648,\"range\":[32768,16777216],\"values\":{\"392310\":0,\"418095\":19,\"445575\":1,\"474861\":0}},\"MEMORY_UNIQUE\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2731252,\"range\":[32768,16777216],\"values\":{\"117047\":0,\"124740\":2,\"132939\":17,\"141677\":1,\"150989\":0}},\"MEMORY_JS_GC_HEAP\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":495616,\"range\":[1024,16777216],\""
		"values\":{\"22453\":0,\"23581\":19,\"27315\":1,\"28687\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":20,\"1\":0}},\"MEMORY_PHC_SLOP\":{\"bucket_count\":48,\"histogram_type\":0,\"sum\":1950352,\"range\":[4096,8388608],\"values\":{\"68562\":0,\"80923\":6,\"95512\":14,\"112731\":0}},\"MEMORY_PHC_SLOTS_ALLOCATED\":{\"bucket_count\":64,\"histogram_type\":0,\"sum\":498,\"range\":[1,16384],\"values\":{\"17\":0,\"20\":2,\"23\":10,\"26\":8,"
		"\"30\":0}},\"MEMORY_PHC_SLOTS_FREED\":{\"bucket_count\":64,\"histogram_type\":0,\"sum\":2447,\"range\":[1,16384],\"values\":{\"81\":0,\"93\":1,\"107\":12,\"123\":7,\"141\":0}},\"SHUTDOWN_OK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"HTTP_KBREAD_PER_CONN2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":21,\"range\":[1,100000],\"values\":{\"0\":23,\"1\":7,\"2\":2,\"3\":1,\"6\":1,\"8\":0}},\"HTTP_TRANSACTION_IS_SSL\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":46,\"1\":13,\"2\":0}},\"HTTP_PAGELOAD_IS_SSL\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":3,\"1\":0}},\"TLS_EARLY_DATA_NEGOTIATED\":{\"bucket_count\":4,\"histogram_type\":1,\"sum\":0,\"range\":[1,3],\"values\":{\"0\":19,\"1\":0}},\"SSL_HANDSHAKE_VERSION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":89,\"range\":[1,16],\"values\":{\"2\":0,\"3\":3,\"4\":20,\"5\":0}},\""
		"SSL_HANDSHAKE_PRIVACY\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":39,\"range\":[1,16],\"values\":{\"0\":2,\"1\":3,\"3\":12,\"4\":0}},\"SSL_HANDSHAKE_RESULT\":{\"bucket_count\":673,\"histogram_type\":1,\"sum\":24,\"range\":[1,672],\"values\":{\"0\":17,\"12\":2,\"13\":0}},\"SSL_HANDSHAKE_RESULT_FIRST_TRY\":{\"bucket_count\":673,\"histogram_type\":1,\"sum\":24,\"range\":[1,672],\"values\":{\"0\":17,\"12\":2,\"13\":0}},\"SSL_HANDSHAKE_RESULT_CONSERVATIVE\":{\"bucket_count\":673,\""
		"histogram_type\":1,\"sum\":0,\"range\":[1,672],\"values\":{\"0\":2,\"1\":0}},\"SSL_HANDSHAKE_RESULT_ECH_GREASE\":{\"bucket_count\":673,\"histogram_type\":1,\"sum\":24,\"range\":[1,672],\"values\":{\"0\":15,\"12\":2,\"13\":0}},\"SSL_TIME_UNTIL_READY\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":52568,\"range\":[1,60000],\"values\":{\"100\":0,\"105\":1,\"126\":1,\"132\":1,\"173\":1,\"259\":1,\"271\":1,\"310\":1,\"324\":1,\"371\":1,\"406\":1,\"425\":1,\"486\":1,\"636\":1,\"998\":1,\"1875\":1,"
		"\"1961\":1,\"2455\":1,\"2568\":1,\"2686\":1,\"8656\":3,\"9055\":1,\"9472\":0}},\"SSL_TIME_UNTIL_READY_FIRST_TRY\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":52568,\"range\":[1,60000],\"values\":{\"100\":0,\"105\":1,\"126\":1,\"132\":1,\"173\":1,\"259\":1,\"271\":1,\"310\":1,\"324\":1,\"371\":1,\"406\":1,\"425\":1,\"486\":1,\"636\":1,\"998\":1,\"1875\":1,\"1961\":1,\"2455\":1,\"2568\":1,\"2686\":1,\"8656\":3,\"9055\":1,\"9472\":0}},\"SSL_TIME_UNTIL_READY_CONSERVATIVE\":{\"bucket_count\":200"
		",\"histogram_type\":0,\"sum\":20688,\"range\":[1,60000],\"values\":{\"2568\":0,\"2686\":1,\"8656\":1,\"9055\":1,\"9472\":0}},\"SSL_TIME_UNTIL_READY_ECH_GREASE\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":31880,\"range\":[1,60000],\"values\":{\"100\":0,\"105\":1,\"126\":1,\"132\":1,\"173\":1,\"259\":1,\"271\":1,\"310\":1,\"324\":1,\"371\":1,\"406\":1,\"425\":1,\"486\":1,\"636\":1,\"998\":1,\"1875\":1,\"1961\":1,\"2455\":1,\"2568\":1,\"8656\":2,\"9055\":0}},\"SSL_BYTES_BEFORE_CERT_CALLBACK\""
		":{\"bucket_count\":64,\"histogram_type\":0,\"sum\":52330,\"range\":[1,32000],\"values\":{\"1338\":0,\"1556\":3,\"1810\":22,\"2105\":3,\"2449\":0}},\"SSL_RESUMED_SESSION\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":15,\"1\":8,\"2\":0}},\"CERT_VALIDATION_HTTP_REQUEST_RESULT\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":6,\"range\":[1,16],\"values\":{\"0\":12,\"1\":6,\"2\":0}},\"SSL_KEY_EXCHANGE_ALGORITHM_FULL\":{\"bucket_count\":17,\"histogram_type\":1"
		",\"sum\":60,\"range\":[1,16],\"values\":{\"3\":0,\"4\":15,\"5\":0}},\"SSL_KEY_EXCHANGE_ALGORITHM_RESUMED\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":32,\"range\":[1,16],\"values\":{\"3\":0,\"4\":8,\"5\":0}},\"HTTP_CHANNEL_DISPOSITION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":294,\"range\":[1,16],\"values\":{\"0\":1,\"2\":46,\"3\":5,\"8\":1,\"9\":3,\"10\":13,\"11\":2,\"12\":0}},\"HTTP_CHANNEL_ONSTART_SUCCESS\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":65,\"range\":[1,2],\""
		"values\":{\"0\":9,\"1\":65,\"2\":0}},\"DNS_LOOKUP_METHOD2\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":722,\"range\":[1,16],\"values\":{\"0\":0,\"1\":202,\"2\":1,\"3\":10,\"6\":79,\"7\":2,\"8\":0}},\"DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":537,\"range\":[1,60000],\"values\":{\"0\":0,\"1\":1,\"2\":1,\"3\":3,\"9\":1,\"11\":5,\"14\":2,\"21\":4,\"26\":1,\"32\":2,\"40\":2,\"62\":2,\"77\":0}},\"DNS_TRR_PROCESSING_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\""
		":12,\"range\":[1,1000],\"values\":{\"0\":32,\"1\":3,\"3\":1,\"6\":1,\"7\":0}},\"DNS_NATIVE_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1505,\"range\":[1,60000],\"values\":{\"0\":0,\"1\":3,\"2\":2,\"3\":2,\"4\":3,\"6\":1,\"7\":18,\"9\":11,\"11\":8,\"14\":8,\"17\":10,\"21\":7,\"26\":6,\"32\":4,\"40\":2,\"50\":2,\"62\":1,\"77\":1,\"95\":0}},\"DNS_BY_TYPE_FAILED_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1520,\"range\":[1,60000],\"values\":{\"0\":2,\"1255\":1,"
		"\"1556\":0}},\"DNS_BY_TYPE_SUCCEEDED_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":135,\"range\":[1,60000],\"values\":{\"95\":0,\"118\":1,\"146\":0}},\"DNS_NATIVE_QUEUING\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":7,\"range\":[1,60000],\"values\":{\"0\":98,\"1\":5,\"2\":1,\"3\":0}},\"DNS_FAILED_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":66,\"range\":[1,60000],\"values\":{\"0\":1,\"1\":3,\"2\":2,\"3\":1,\"4\":1,\"7\":3,\"9\":1,\"17\":1,\"21\":0}},\""
		"DNS_BLACKLIST_COUNT\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":0,\"range\":[1,21],\"values\":{\"0\":2,\"1\":0}},\"TAB_COUNT\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,1000],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"LOADED_TAB_COUNT\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,1000],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"STARTUP_CACHE_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":535,\"range\":[1,50],\"values\":{\"0\":2,\"1\":7,"
		"\"2\":264,\"3\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":535,\"range\":[1,50],\"values\":{\"0\":331,\"1\":19,\"2\":258,\"3\":0}},\"NETWORK_ID_ONLINE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":5,\"range\":[1,50],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"URLCLASSIFIER_LOOKUP_TIME_2\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":0,\"range\":[1,5000],\"values\":{\"0\":19,\"1\":0}},\"URLCLASSIFIER_CL_CHECK_TIME\":{\"bucket_count\":10,\""
		"histogram_type\":0,\"sum\":0,\"range\":[1,500],\"values\":{\"0\":19,\"1\":0}},\"URLCLASSIFIER_VLPS_FILELOAD_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":87,\"range\":[1,1000],\"values\":{\"0\":15,\"1\":3,\"2\":2,\"5\":1,\"29\":2,\"70\":0}},\"URLCLASSIFIER_VLPS_FALLOCATE_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":4,\"1\":0}},\"URLCLASSIFIER_VLPS_CONSTRUCT_TIME\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":48,\"range\":[1,5000],"
		"\"values\":{\"0\":2,\"2\":1,\"29\":1,\"55\":0}},\"URLCLASSIFIER_VLPS_METADATA_CORRUPT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":5,\"1\":0}},\"PLACES_PAGES_COUNT\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":1008,\"range\":[1000,150000],\"values\":{\"0\":0,\"1000\":1,\"1321\":0}},\"PLACES_BOOKMARKS_COUNT\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":7,\"range\":[100,8000],\"values\":{\"0\":1,\"100\":0}},\"PLACES_DATABASE_FILESIZE_MB\":{\""
		"bucket_count\":10,\"histogram_type\":0,\"sum\":5,\"range\":[5,200],\"values\":{\"0\":0,\"5\":1,\"8\":0}},\"PLACES_DATABASE_FAVICONS_FILESIZE_MB\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":5,\"range\":[5,100],\"values\":{\"0\":0,\"5\":1,\"7\":0}},\"FX_TAB_CLOSE_TIME_ANIM_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":104,\"range\":[1,10000],\"values\":{\"81\":0,\"96\":1,\"114\":0}},\"FX_TAB_SWITCH_UPDATE_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":5,\"range\":[1,1000],\""
		"values\":{\"3\":0,\"4\":1,\"6\":0}},\"FX_TAB_SWITCH_TOTAL_E10S_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":1,\"range\":[1,1000],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"FX_PAGE_LOAD_MS_2\":{\"bucket_count\":200,\"histogram_type\":1,\"sum\":12996,\"range\":[1,10000],\"values\":{\"9950\":0,\"10000\":1}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":77297,\"range\":[1,10000],\"values\":{\"0\":174,\"1\":332,\"2\":524,\"3\":532,\"4\":611,\"5\":528,\"6\":547,\""
		"7\":561,\"8\":1129,\"10\":1146,\"12\":1116,\"14\":1479,\"17\":125,\"20\":14,\"24\":12,\"29\":4,\"48\":2,\"57\":1,\"160\":3,\"226\":1,\"533\":1,\"633\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":13007,\"range\":[1,10000],\"values\":{\"0\":54,\"1\":3,\"2\":6,\"3\":7,\"4\":8,\"5\":5,\"6\":9,\"7\":16,\"8\":24,\"10\":32,\"12\":62,\"14\":179,\"17\":10,\"20\":11,\"24\":15,\"29\":45,\"34\":5,\"40\":36,\"48\":5,\"57\":34,\"68\":10,\"81\":4,\"96\":1,\"114\":1"
		",\"160\":2,\"226\":1,\"533\":1,\"633\":0}},\"FX_SESSION_RESTORE_STARTUP_INIT_SESSION_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":3,\"range\":[1,30000],\"values\":{\"1\":0,\"2\":1,\"4\":0}},\"FX_SESSION_RESTORE_STARTUP_ONLOAD_INITIAL_WINDOW_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":34,\"range\":[1,30000],\"values\":{\"12\":0,\"21\":1,\"37\":0}},\"FX_SESSION_RESTORE_ALL_FILES_CORRUPT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1"
		"\":0}},\"MS_MESSAGE_REQUEST_TIME_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":49,\"range\":[1,2000],\"values\":{\"0\":8,\"1\":2,\"3\":2,\"5\":3,\"23\":1,\"35\":0}},\"SEARCH_SERVICE_INIT2_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":202,\"range\":[1,10000],\"values\":{\"160\":0,\"190\":1,\"226\":0}},\"TOUCH_ENABLED_DEVICE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT\":{\"bucket_count\":3,\""
		"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT_ERROR\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_SET_DEFAULT_DIALOG_PROMPT_RAWCOUNT\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":24,\"range\":[1,250],\"values\":{\"14\":0,\"21\":1,\"32\":0}},\"BROWSER_SET_DEFAULT_ALWAYS_CHECK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\""
		":0}},\"BROWSER_SET_DEFAULT_RESULT\":{\"bucket_count\":5,\"histogram_type\":1,\"sum\":3,\"range\":[1,4],\"values\":{\"2\":0,\"3\":1,\"4\":0}},\"MIXED_CONTENT_IMAGES\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":14,\"range\":[1,50],\"values\":{\"1\":0,\"2\":7,\"3\":0}},\"CONTENT_SIGNATURE_VERIFICATION_STATUS\":{\"bucket_count\":21,\"histogram_type\":1,\"sum\":0,\"range\":[1,20],\"values\":{\"0\":2,\"1\":0}},\"NETWORK_CACHE_V2_MISS_TIME_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,"
		"\"range\":[1,10000],\"values\":{\"0\":2,\"1\":0}},\"NETWORK_CACHE_V2_HIT_TIME_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":3,\"1\":0}},\"TLS_CIPHER_SUITE\":{\"bucket_count\":65,\"histogram_type\":1,\"sum\":402,\"range\":[1,64],\"values\":{\"13\":0,\"14\":3,\"18\":20,\"19\":0}},\"SSL_KEA_ECDHE_CURVE_FULL\":{\"bucket_count\":37,\"histogram_type\":1,\"sum\":435,\"range\":[1,36],\"values\":{\"28\":0,\"29\":15,\"30\":0}},\"SSL_AUTH_ALGORITHM_FULL\":{\""
		"bucket_count\":17,\"histogram_type\":1,\"sum\":105,\"range\":[1,16],\"values\":{\"6\":0,\"7\":15,\"8\":0}},\"SSL_AUTH_RSA_KEY_SIZE_FULL\":{\"bucket_count\":25,\"histogram_type\":1,\"sum\":180,\"range\":[1,24],\"values\":{\"11\":0,\"12\":15,\"13\":0}},\"SSL_HANDSHAKE_TYPE\":{\"bucket_count\":9,\"histogram_type\":1,\"sum\":68,\"range\":[1,8],\"values\":{\"0\":0,\"1\":8,\"4\":15,\"5\":0}},\"SSL_OCSP_STAPLING\":{\"bucket_count\":9,\"histogram_type\":1,\"sum\":66,\"range\":[1,8],\"values\":{\"1\":0,\""
		"2\":33,\"3\":0}},\"SSL_CERT_ERROR_OVERRIDES\":{\"bucket_count\":25,\"histogram_type\":1,\"sum\":31,\"range\":[1,24],\"values\":{\"0\":0,\"1\":31,\"2\":0}},\"SSL_CERT_VERIFICATION_ERRORS\":{\"bucket_count\":101,\"histogram_type\":1,\"sum\":84,\"range\":[1,100],\"values\":{\"41\":0,\"42\":2,\"43\":0}},\"SSL_PERMANENT_CERT_ERROR_OVERRIDES\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":0,\"range\":[1,1024],\"values\":{\"0\":1,\"1\":0}},\"CERT_EV_STATUS\":{\"bucket_count\":11,\"histogram_type\":1,"
		"\"sum\":31,\"range\":[1,10],\"values\":{\"0\":2,\"1\":31,\"2\":0}},\"CERT_VALIDATION_SUCCESS_BY_CA_2\":{\"bucket_count\":257,\"histogram_type\":1,\"sum\":351,\"range\":[1,256],\"values\":{\"2\":0,\"3\":28,\"89\":3,\"90\":0}},\"CERT_PINNING_MOZ_RESULTS_BY_HOST\":{\"bucket_count\":513,\"histogram_type\":1,\"sum\":39,\"range\":[1,512],\"values\":{\"12\":0,\"13\":3,\"14\":0}},\"CERT_CHAIN_KEY_SIZE_STATUS\":{\"bucket_count\":5,\"histogram_type\":1,\"sum\":33,\"range\":[1,4],\"values\":{\"0\":0,\"1\":33"
		",\"2\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"COOKIE_BEHAVIOR\":{\"bucket_count\":16,\"histogram_type\":1,\"sum\":5,\"range\":[1,15],\"values\":{\"4\":0,\"5\":1,\"6\":0}},\"TRACKING_PROTECTION_ENABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"TRACKING_PROTECTION_PBM_DISABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\""
		"values\":{\"0\":1,\"1\":0}},\"FINGERPRINTERS_BLOCKED_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"CRYPTOMINERS_BLOCKED_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"QUERY_STRIPPING_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":9,\"1\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum"
		"\":787,\"range\":[1,100000],\"values\":{\"75\":0,\"83\":1,\"665\":1,\"738\":0}},\"INPUT_EVENT_QUEUED_CLICK_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":260,\"range\":[1,5000],\"values\":{\"4\":0,\"5\":2,\"6\":1,\"8\":1,\"11\":1,\"13\":1,\"14\":1,\"15\":4,\"16\":2,\"18\":1,\"19\":1,\"23\":3,\"25\":0}},\"INPUT_EVENT_QUEUED_KEYBOARD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":285,\"range\":[1,5000],\"values\":{\"2\":0,\"3\":1,\"4\":1,\"5\":2,\"6\":2,\"7\":4,\"8\":1,\"9\":1,\""
		"11\":2,\"12\":3,\"13\":3,\"15\":2,\"16\":3,\"18\":2,\"19\":0}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":3514,\"range\":[1,60000],\"values\":{\"535\":0,\"590\":2,\"651\":2,\"964\":1,\"1064\":0}},\"WEBEXT_EXTENSION_STARTUP_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2294,\"range\":[1,50000],\"values\":{\"211\":0,\"232\":4,\"255\":5,\"281\":0}},\"BFCACHE_COMBO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":11,\"range\":[1,50],\"values\":{"
		"\"10\":0,\"11\":1,\"12\":0}},\"REFERRER_POLICY_COUNT\":{\"bucket_count\":19,\"histogram_type\":1,\"sum\":9,\"range\":[1,18],\"values\":{\"0\":10,\"9\":1,\"10\":0}},\"ORB_DID_EVER_BLOCK_RESPONSE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":12,\"1\":0}}},\"keyedHistograms\":{\"NETWORK_DNS_END_TO_CONNECT_START_EXP_MS\":{\"http/1.1_0\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":38,\"range\":[1,2000],\"values\":{\"3\":0,\"4\":2,\"5\":1,\"6\":2,\"13\":1,"
		"\"15\":0}},\"http/1.1_120\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":7,\"range\":[1,2000],\"values\":{\"6\":0,\"7\":1,\"8\":0}},\"http/1.1_40\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":6374,\"range\":[1,2000],\"values\":{\"1745\":0,\"2000\":1}}},\"SSL_TIME_UNTIL_HANDSHAKE_FINISHED_KEYED_BY_KA\":{\"x25519\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":52568,\"range\":[1,60000],\"values\":{\"100\":0,\"105\":1,\"126\":1,\"132\":1,\"173\":1,\"259\":1,\"271\":1,\"310\":1,\"324\""
		":1,\"371\":1,\"406\":1,\"425\":1,\"486\":1,\"636\":1,\"998\":1,\"1875\":1,\"1961\":1,\"2455\":1,\"2568\":1,\"2686\":1,\"8656\":3,\"9055\":1,\"9472\":0}}},\"HTTP3_ECH_OUTCOME\":{\"GREASE\":{\"bucket_count\":33,\"histogram_type\":1,\"sum\":2,\"range\":[1,32],\"values\":{\"0\":4,\"1\":2,\"2\":0}}},\"HTTP_CHANNEL_DISPOSITION_UPGRADE\":{\"enabledNoReason\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":35,\"range\":[1,50],\"values\":{\"0\":1,\"1\":3,\"2\":13,\"3\":2,\"4\":0}},\"enabledWont\":{\""
		"bucket_count\":51,\"histogram_type\":5,\"sum\":107,\"range\":[1,50],\"values\":{\"0\":1,\"2\":46,\"3\":5,\"4\":0}}},\"HTTP_CHANNEL_PAGE_ONSTART_SUCCESS_TRR3\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":0,\"range\":[1,16],\"values\":{\"0\":12,\"1\":0}}},\"HTTP_CHANNEL_SUB_ONSTART_SUCCESS_TRR3\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":9,\"range\":[1,16],\"values\":{\"0\":44,\"1\":3,\"2\":3,\"3\":0}}},\""
		"HTTP3_CONNECTION_CLOSE_CODE_3\":{\"transport_closed\":{\"bucket_count\":101,\"histogram_type\":1,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":4,\"1\":0}},\"app_closing\":{\"bucket_count\":101,\"histogram_type\":1,\"sum\":84,\"range\":[1,100],\"values\":{\"41\":0,\"42\":2,\"43\":0}}},\"HTTP3_CHANNEL_ONSTART_SUCCESS\":{\"http3\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"no_http3\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":57,\""
		"range\":[1,2],\"values\":{\"0\":9,\"1\":57,\"2\":0}}},\"DNS_TRR_LOOKUP_TIME3\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":9146,\"range\":[1,60000],\"values\":{\"40\":0,\"50\":2,\"62\":5,\"118\":2,\"146\":1,\"181\":1,\"278\":1,\"345\":1,\"428\":1,\"531\":1,\"658\":2,\"816\":1,\"1012\":1,\"1255\":2,\"1556\":0}}},\"DNS_TRR_HTTP_VERSION2\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":37,\""
		"1\":0}}},\"TRR_SKIP_REASON_TRR_FIRST2\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":678,\"range\":[1,50],\"values\":{\"0\":0,\"1\":23,\"5\":82,\"10\":5,\"11\":13,\"26\":2,\"27\":0}}},\"TRR_SKIP_REASON_NATIVE_SUCCESS\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":575,\"range\":[1,50],\"values\":{\"4\":0,\"5\":72,\"10\":2,\"11\":13,\"26\":2,\"27\":0}}},\"TRR_SKIP_REASON_NATIVE_FAILED\":{\"mozilla.cloudflare-dns.com\":{\""
		"bucket_count\":51,\"histogram_type\":1,\"sum\":80,\"range\":[1,50],\"values\":{\"4\":0,\"5\":10,\"10\":3,\"11\":0}}},\"TRR_RELEVANT_SKIP_REASON_TRR_FIRST\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":166,\"range\":[1,50],\"values\":{\"0\":0,\"1\":23,\"11\":13,\"12\":0}}},\"TRR_RELEVANT_SKIP_REASON_NATIVE_SUCCESS\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":143,\"range\":[1,50],\"values\":{\"10\":0,\"11\":13,\"12\":0}}},\""
		"TRR_SKIP_REASON_STRICT_MODE\":{\"mozilla.cloudflare-dns.com|11\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":147,\"range\":[1,50],\"values\":{\"0\":0,\"1\":4,\"11\":13,\"12\":0}},\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":531,\"range\":[1,50],\"values\":{\"0\":0,\"1\":19,\"5\":82,\"10\":5,\"26\":2,\"27\":0}}},\"TRR_SKIP_REASON_RETRY_SUCCESS\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":44,\"range\":[1,50],\"values\":"
		"{\"10\":0,\"11\":4,\"12\":0}}},\"TRR_SKIP_REASON_RETRY_FAILED\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":143,\"range\":[1,50],\"values\":{\"10\":0,\"11\":13,\"12\":0}}},\"TRR_RELEVANT_SKIP_REASON_TRR_FIRST_TYPE_REC\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":12,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"11\":1,\"12\":0}}},\"TRR_ATTEMPT_COUNT\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":11,\"histogram_type\""
		":1,\"sum\":25,\"range\":[1,10],\"values\":{\"0\":1,\"1\":17,\"2\":4,\"3\":0}}},\"DNS_TRR_FIRST4\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":16,\"range\":[1,50],\"values\":{\"0\":22,\"1\":13,\"3\":1,\"4\":0}}},\"DNS_TRR_DISABLED3\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":3,\"1\":2,\"2\":0}}},\"DNS_TRR_SUCCESS3\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\""
		":5,\"sum\":47,\"range\":[1,50],\"values\":{\"0\":40,\"1\":47,\"2\":0}}},\"DNS_LOOKUP_DISPOSITION3\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":902,\"range\":[1,50],\"values\":{\"0\":21,\"1\":14,\"2\":20,\"3\":20,\"4\":12,\"5\":23,\"6\":89,\"7\":13,\"8\":0}}},\"URLCLASSIFIER_CL_KEYED_UPDATE_TIME\":{\"google4\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":825,\"range\":[20,120000],\"values\":{\"601\":0,\"821\":1,\"1121\":0}}},\""
		"URLCLASSIFIER_UPDATE_REMOTE_NETWORK_ERROR\":{\"google4\":{\"bucket_count\":31,\"histogram_type\":1,\"sum\":0,\"range\":[1,30],\"values\":{\"0\":1,\"1\":0}}},\"URLCLASSIFIER_UPDATE_REMOTE_STATUS2\":{\"google4\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":1,\"range\":[1,16],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"URLCLASSIFIER_UPDATE_SERVER_RESPONSE_TIME\":{\"google4\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":5859,\"range\":[1,100000],\"values\":{\"3902\":0,\"5853\":1,\"8779\":0}}},"
		"\"URLCLASSIFIER_UPDATE_TIMEOUT\":{\"google4\":{\"bucket_count\":5,\"histogram_type\":1,\"sum\":0,\"range\":[1,4],\"values\":{\"0\":1,\"1\":0}}},\"URLCLASSIFIER_UPDATE_ERROR\":{\"google4\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":0,\"range\":[1,16],\"values\":{\"0\":1,\"1\":0}}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS_BY_ADDONID\":{\"pictureinpicture@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":652,\"range\":[1,60000],\"values\":{\"590\":0,\"651\":1,\"718\":0}},\""
		"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":652,\"range\":[1,60000],\"values\":{\"590\":0,\"651\":1,\"718\":0}},\"jid1-NIfFY2CA8fy1tg@jetpack\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1007,\"range\":[1,60000],\"values\":{\"874\":0,\"964\":1,\"1064\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":601,\"range\":[1,60000],\"values\":{\"535\":0,\"590\":1,\"651\":0}},\"addons-search-detection@mozilla.com\":{\"bucket_count\""
		":100,\"histogram_type\":0,\"sum\":602,\"range\":[1,60000],\"values\":{\"535\":0,\"590\":1,\"651\":0}}},\"WEBEXT_EXTENSION_STARTUP_MS_BY_ADDONID\":{\"default-theme@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":245,\"range\":[1,50000],\"values\":{\"211\":0,\"232\":1,\"255\":0}},\"google@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":244,\"range\":[1,50000],\"values\":{\"211\":0,\"232\":1,\"255\":0}},\"ddg@search.mozilla.org\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":245,\"range\":[1,50000],\"values\":{\"211\":0,\"232\":1,\"255\":0}},\"pictureinpicture@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":259,\"range\":[1,50000],\"values\":{\"232\":0,\"255\":1,\"281\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":259,\"range\":[1,50000],\"values\":{\"232\":0,\"255\":1,\"281\":0}},\"jid1-NIfFY2CA8fy1tg@jetpack\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":266,\"range\":[1,50000],\""
		"values\":{\"232\":0,\"255\":1,\"281\":0}},\"wikipedia@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":242,\"range\":[1,50000],\"values\":{\"211\":0,\"232\":1,\"255\":0}},\"addons-search-detection@mozilla.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":271,\"range\":[1,50000],\"values\":{\"232\":0,\"255\":1,\"281\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":263,\"range\":[1,50000],\"values\":{\"232\":0,\"255\":1,\"281\":0}}},"
		"\"QM_QUOTA_INFO_LOAD_TIME_V0\":{\"Normal\":{\"bucket_count\":60,\"histogram_type\":0,\"sum\":4,\"range\":[1,180000],\"values\":{\"3\":0,\"4\":1,\"5\":0}}},\"QM_FIRST_INITIALIZATION_ATTEMPT\":{\"TemporaryStorage\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"TemporaryGroup\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"Storage\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\""
		":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"PersistentOrigin\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"TemporaryOrigin\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}}},\"HTTP_TRAFFIC_ANALYSIS_3\":{\"Connection\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":104,\"range\":[1,50],\"values\":{\"0\":28,\"13\":8,\"14\":0}},\"Transaction\":{\"bucket_count\":51,"
		"\"histogram_type\":5,\"sum\":247,\"range\":[1,50],\"values\":{\"0\":43,\"13\":19,\"14\":0}}},\"SQLITE_STORE_OPEN\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}"
		"},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"indexedDB-1.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"domain_to_categories.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},"
		"\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"bounce-tracking-protection.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"indexedDB-2.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":12,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\""
		":{\"0\":7,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"ls-archive.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\""
		"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":8,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}}},\"SQLITE_STORE_QUERY\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":7,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\""
		"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":15,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":14,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":41,\"1\":0}},\"indexedDB-1.sqlite\":{\"bucket_count\":51,\""
		"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":65,\"1\":0}},\"domain_to_categories.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":10,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"bounce-tracking-protection.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":6,\"1\":0}},\"indexedDB-2.sqlite\":{\""
		"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":326,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":172,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":9,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":12,\"1\":0}},\"ls-archive.sqlite\":{\""
		"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":21,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":465,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":214,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":23,\"1\":0}}},\""
		"HTTP_CONNECTION_CLOSE_REASON\":{\"11_1_1_0_2\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":320,\"range\":[1,50],\"values\":{\"19\":0,\"20\":16,\"21\":0}},\"11_1_0_0_2\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":58,\"range\":[1,50],\"values\":{\"15\":0,\"16\":1,\"21\":2,\"22\":0}},\"30_1_0_0_2\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":16,\"range\":[1,50],\"values\":{\"7\":0,\"8\":2,\"9\":0}},\"30_1_0_0_4\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":4,\"range\":[1,50],"
		"\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"11_1_1_0_4\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":16,\"range\":[1,50],\"values\":{\"15\":0,\"16\":1,\"17\":0}},\"11_1_0_0_4\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":67,\"range\":[1,50],\"values\":{\"15\":0,\"16\":3,\"19\":1,\"20\":0}},\"11_0_0_7_4\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":384,\"range\":[1,50],\"values\":{\"15\":0,\"16\":24,\"17\":0}},\"11_0_0_0_1\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":96,\""
		"range\":[1,50],\"values\":{\"15\":0,\"16\":6,\"17\":0}},\"30_1_0_6_4\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":2,\"range\":[1,50],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"11_0_0_3_4\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":16,\"range\":[1,50],\"values\":{\"15\":0,\"16\":1,\"17\":0}},\"11_0_0_0_0\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":65,\"range\":[1,50],\"values\":{\"4\":0,\"5\":13,\"6\":0}},\"11_1_0_3_4\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":86,\""
		"range\":[1,50],\"values\":{\"15\":0,\"16\":3,\"19\":2,\"20\":0}},\"11_1_1_7_4\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":104,\"range\":[1,50],\"values\":{\"15\":0,\"16\":4,\"20\":2,\"21\":0}},\"11_1_0_7_4\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":16,\"range\":[1,50],\"values\":{\"15\":0,\"16\":1,\"17\":0}},\"30_1_0_6_2\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":2,\"range\":[1,50],\"values\":{\"1\":0,\"2\":1,\"3\":0}}}},\"info\":{\"reason\":\"daily\",\"revision\":\"https"
		"://hg.mozilla.org/releases/mozilla-release/rev/8141aab3ba856d7cbae6c851dd71f2e0cb69649c\",\"timezoneOffset\":300,\"previousBuildId\":null,\"sessionId\":\"74e33592-a082-419a-9506-16222bbf9faf\",\"subsessionId\":\"61c894a3-5990-4de8-9042-ec9fd88ae33c\",\"previousSessionId\":\"1f042b0f-d2ed-4298-9d89-cee84e9069da\",\"previousSubsessionId\":\"afa5c189-c9cc-47eb-ac8b-0e09b3424c43\",\"subsessionCounter\":1,\"profileSubsessionCounter\":155,\"sessionStartDate\":\"2024-11-27T23:00:00.0+05:00\",\""
		"subsessionStartDate\":\"2024-11-27T23:00:00.0+05:00\",\"sessionLength\":1268,\"subsessionLength\":1267,\"addons\":\"jid1-NIfFY2CA8fy1tg%40jetpack:6.11.1,formautofill%40mozilla.org:1.0.1,pictureinpicture%40mozilla.org:1.0.0,webcompat%40mozilla.org:133.4.0,default-theme%40mozilla.org:1.4.1,google%40search.mozilla.org:1.5,wikipedia%40search.mozilla.org:1.4,ddg%40search.mozilla.org:1.5,addons-search-detection%40mozilla.com:2.0.0\"}},\"clientId\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\",\""
		"profileGroupId\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20241121140525\",\"version\":\"133.0\",\"vendor\":\"Mozilla\",\"displayVersion\":\"133.0\",\"platformVersion\":\"133.0\",\"xpcomAbi\":\"x86_64-msvc\",\"updaterAvailable\":true},\"partner\":{\"distributionId\":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\""
		":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":16221,\"virtualMaxMB\":134217728,\"cpu\":{\"isWindowsSMode\":false,\"count\":8,\"cores\":4,\"pcount\":8,\"mcount\":0,\"ecount\":0,\"vendor\":\"GenuineIntel\",\"name\":\"Intel(R) Core(TM) i5-9300H CPU @ 2.40GHz\",\"family\":6,\"model\":158,\"stepping\":13,\"l2cacheKB\":256,\"l3cacheKB\":8192,\"speedMHz\":2400,\"extensions\":[\"hasMMX\",\"hasSSE\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX"
		"\",\"hasAVX2\",\"hasAES\"]},\"os\":{\"installYear\":2023,\"hasSuperfetch\":true,\"hasPrefetch\":true,\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"ru-RU\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":22631,\"windowsUBR\":4541},\"hdd\":{\"binary\":{\"model\":\"NVMe MSI M371 2TB\",\"revision\":\"F0.0\",\"type\":\"SSD\"},\"profile\":{\"model\":\"NVMe MSI M371 2TB\",\"revision\":\"F0.0\",\"type\":\"SSD\"},\"system\":{\"model\":\"NVMe MSI M371 2TB\",\"revision\":\""
		"F0.0\",\"type\":\"SSD\"}},\"gfx\":{\"D2DEnabled\":false,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,\"EmbeddedInFirefoxReality\":false,\"TargetFrameRate\":144,\"textScaleFactor\":1,\"adapters\":[{\"description\":\"NVIDIA GeForce GTX 1650 Ti\",\"vendorID\":\"0x10de\",\"deviceID\":\"0x1f95\",\"subsysID\":\"142f1025\",\"RAM\":4096,\"driver\":\"C"
		":\\\\\\\\Windows\\\\\\\\System32\\\\\\\\DriverStore\\\\\\\\FileRepository\\\\\\\\nvaci.inf_amd64_222c113b60c4c9db\\\\\\\\nvldumdx.dll,C:\\\\\\\\Windows\\\\\\\\System32\\\\\\\\DriverStore\\\\\\\\FileRepository\\\\\\\\nvaci.inf_amd64_222c113b60c4c9db\\\\\\\\nvldumdx.dll,C:\\\\\\\\Windows\\\\\\\\System32\\\\\\\\DriverStore\\\\\\\\FileRepository\\\\\\\\nvaci.inf_amd64_222c113b60c4c9db\\\\\\\\nvldumdx.dll,C"
		":\\\\\\\\Windows\\\\\\\\System32\\\\\\\\DriverStore\\\\\\\\FileRepository\\\\\\\\nvaci.inf_amd64_222c113b60c4c9db\\\\\\\\nvldumdx.dll C:\\\\\\\\Windows\\\\\\\\System32\\\\\\\\DriverStore\\\\\\\\FileRepository\\\\\\\\nvaci.inf_amd64_222c113b60c4c9db\\\\\\\\nvldumd.dll,C:\\\\\\\\Windows\\\\\\\\System32\\\\\\\\DriverStore\\\\\\\\FileRepository\\\\\\\\nvaci.inf_amd64_222c113b60c4c9db\\\\\\\\nvldumd.dll,C"
		":\\\\\\\\Windows\\\\\\\\System32\\\\\\\\DriverStore\\\\\\\\FileRepository\\\\\\\\nvaci.inf_amd64_222c113b60c4c9db\\\\\\\\nvldumd.dll,C:\\\\\\\\Windows\\\\\\\\System32\\\\\\\\DriverStore\\\\\\\\FileRepository\\\\\\\\nvaci.inf_amd64_222c113b60c4c9db\\\\\\\\nvldumd.dll\",\"driverVendor\":null,\"driverVersion\":\"32.0.15.6603\",\"driverDate\":\"10-15-2024\",\"GPUActive\":true},{\"description\":\"Intel(R) UHD Graphics 630\",\"vendorID\":\"0x8086\",\"deviceID\":\"0x3e9b\",\"subsysID\":\"142f1025\",\""
		"RAM\":0,\"driver\":\"igdumdim64 igd10iumd64 igd10iumd64 igd12umd64 igdumdim32 igd10iumd32 igd10iumd32 igd12umd32\",\"driverVendor\":null,\"driverVersion\":\"27.20.100.8280\",\"driverDate\":\"5-19-2020\",\"GPUActive\":false}],\"monitors\":[{\"screenWidth\":1920,\"screenHeight\":1080,\"defaultCSSScaleFactor\":1,\"contentsScaleFactor\":1,\"refreshRate\":144,\"pseudoDisplay\":false},{\"screenWidth\":1920,\"screenHeight\":1080,\"defaultCSSScaleFactor\":1,\"contentsScaleFactor\":1,\"refreshRate\":60,\""
		"pseudoDisplay\":false}],\"features\":{\"compositor\":\"webrender\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"available\"},\"webrender\":{\"status\":\"available\"},\"wrCompositor\":{\"status\":\"available\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"unused\"},\"d3d11\":{\"status\":\"available\",\"version\":45312,\"warp\":false,\"textureSharing\":true,\"blocklisted\":false},\"d2d\":{\"status\":\"disabled:FEATURE_FAILURE_DISABLED\",\"version"
		"\":\"1.1\"}}},\"appleModelId\":null,\"hasWinPackageId\":false,\"sec\":{\"antivirus\":[\"\\xD0\\x90\\xD0\\xBD\\xD1\\x82\\xD0\\xB8\\xD0\\xB2\\xD0\\xB8\\xD1\\x80\\xD1\\x83\\xD1\\x81\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F \\xD0\\xBF\\xD1\\x80\\xD0\\xBE\\xD0\\xB3\\xD1\\x80\\xD0\\xB0\\xD0\\xBC\\xD0\\xBC\\xD0\\xB0 Microsoft Defender\"],\"antispyware\":null,\"firewall\":[\"\\xD0\\x91\\xD1\\x80\\xD0\\xB0\\xD0\\xBD\\xD0\\xB4\\xD0\\xBC\\xD0\\xB0\\xD1\\x83\\xD1\\x8D\\xD1\\x80 Windows\"]},\"isWow64\":false,\""
		"isWowARM64\":false},\"settings\":{\"blocklistEnabled\":true,\"e10sEnabled\":true,\"e10sMultiProcesses\":8,\"fissionEnabled\":true,\"telemetryEnabled\":false,\"locale\":\"ru\",\"intl\":{\"requestedLocales\":[\"ru\"],\"availableLocales\":[\"ru\",\"en-US\"],\"appLocales\":[\"ru\",\"en-US\"],\"systemLocales\":[\"ru-RU\",\"en-US\"],\"regionalPrefsLocales\":[\"ru-RU\"],\"acceptLanguages\":[\"ru-RU\",\"ru\",\"en-US\",\"en\"]},\"update\":{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true,\""
		"background\":true},\"userPrefs\":{\"browser.search.region\":\"RU\",\"browser.urlbar.autoFill\":true,\"browser.urlbar.autoFill.adaptiveHistory.enabled\":false,\"browser.urlbar.dnsResolveSingleWordsAfterSearch\":0,\"browser.urlbar.quicksuggest.dataCollection.enabled\":false,\"browser.urlbar.suggest.quicksuggest.nonsponsored\":false,\"browser.urlbar.suggest.quicksuggest.sponsored\":false,\"media.gmp-gmpopenh264.lastInstallStart\":1715092988,\"media.gmp-gmpopenh264.lastDownload\":1709315195,\""
		"media.gmp-gmpopenh264.lastDownloadFailed\":1715092988,\"media.gmp-gmpopenh264.lastDownloadFailReason\":\"Error: Failed downloading via ServiceRequest, status: 0, channelStatus: 2152398878, errorCode: 2, reason: error\",\"media.gmp-gmpopenh264.lastUpdate\":1709315195,\"media.gmp-widevinecdm.lastInstallStart\":1726848359,\"media.gmp-widevinecdm.lastDownload\":1726582017,\"media.gmp-widevinecdm.lastDownloadFailed\":1726848359,\"media.gmp-widevinecdm.lastDownloadFailReason\":\"Error: Failed "
		"downloading via ServiceRequest, status: 0, channelStatus: 2152398878, errorCode: 2, reason: error\",\"media.gmp-widevinecdm.lastUpdate\":1726582017,\"media.gmp-manager.lastCheck\":1732717545,\"media.gmp-manager.lastEmptyCheck\":1732717545,\"network.http.microsoft-entra-sso.enabled\":false,\"network.proxy.http\":\"<user-set>\",\"network.trr.strict_native_fallback\":false,\"security.pki.mitm_detected\":true,\"widget.content.gtk-high-contrast.enabled\":true},\"sandbox\":{\""
		"effectiveContentProcessLevel\":7,\"contentWin32kLockdownState\":15},\"launcherProcessState\":0,\"addonCompatibilityCheckEnabled\":true,\"isDefaultBrowser\":false,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"dlsource\":\"mozorg\",\"dltoken\":\"c3065bef-899c-4eb9-b1af-3eb57ac20f4f\",\"experiment\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"yandex.ru\",\"ua\":\"chrome\",\"variation\":\"%2528not%2Bset%2529\"},\"defaultSearchEngine\":\""
		"google-com-nocodes\",\"defaultSearchEngineData\":{\"loadPath\":\"[app]google\",\"name\":\"Google\",\"origin\":\"default\",\"submissionURL\":\"https://www.google.com/search?q=\"}},\"profile\":{\"creationDate\":19783,\"firstUseDate\":19783},\"addons\":{\"activeAddons\":{\"jid1-NIfFY2CA8fy1tg@jetpack\":{\"version\":\"6.11.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":20052,\"isSystem\":false,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\""
		"\\xD0\\x91\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD1\\x83\\xD0\\xB9\\xD1\\x82\\xD0\\xB5 \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x83 \\xD0\\xBD\\xD0\\xB0 YouTube \\xD0\\xB8 \\xD0\\xB2\\xD0\\xB0\\xD1\\x88\\xD0\\xB8\\xD1\\x85 \\xD0\\xBB\\xD1\\x8E\\xD0\\xB1\\xD0\\xB8\\xD0\\xBC\\xD1\\x8B\\xD1\\x85 \\xD1\\x81\\xD0\\xB0\\xD0\\xB9\\xD1\\x82\\xD0\\xB0\\xD1\\x85 \\xD0\\xB1\\xD0\\xB5\\xD1\\x81\\xD0\\xBF\\xD0\\xBB\\xD0\\xB0\\xD1\\x82\\xD0\\xBD\\xD0\\xBE.\",\"name\":\""
		"AdBlock \\xE2\\x80\\x93 \\xD0\\xB1\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD0\\xBA\\xD0\\xB0 \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x8B \\xD0\\xB2 \\xD0\\x98\\xD0\\xBD\\xD1\\x82\\xD0\\xB5\\xD1\\x80\\xD0\\xBD\\xD0\\xB5\\xD1\\x82\\xD0\\xB5.\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19806,\"signedState\":2,\"signedTypes\":\"[2,1]\",\"quarantineIgnoredByApp\":false,\""
		"quarantineIgnoredByUser\":false},\"formautofill@mozilla.org\":{\"version\":\"1.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":20054,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19767,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false},\""
		"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":20026,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19767,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false},\""
		"webcompat@mozilla.org\":{\"version\":\"133.4.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":20054,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Urgent post-release fixes for web compatibility.\",\"name\":\"Web Compatibility Interventions\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19767,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false}}"
		",\"theme\":{\"id\":\"default-theme@mozilla.org\",\"blocklisted\":false,\"description\":\"\\xD0\\xA1\\xD0\\xBB\\xD0\\xB5\\xD0\\xB4\\xD0\\xBE\\xD0\\xB2\\xD0\\xB0\\xD1\\x82\\xD1\\x8C \\xD0\\xBD\\xD0\\xB0\\xD1\\x81\\xD1\\x82\\xD1\\x80\\xD0\\xBE\\xD0\\xB9\\xD0\\xBA\\xD0\\xB0\\xD0\\xBC \\xD0\\xBE\\xD0\\xBF\\xD0\\xB5\\xD1\\x80\\xD0\\xB0\\xD1\\x86\\xD0\\xB8\\xD0\\xBE\\xD0\\xBD\\xD0\\xBD\\xD0\\xBE\\xD0\\xB9 \\xD1\\x81\\xD0\\xB8\\xD1\\x81\\xD1\\x82\\xD0\\xB5\\xD0\\xBC\\xD1\\x8B "
		"\\xD0\\xB4\\xD0\\xBB\\xD1\\x8F \\xD0\\xBA\\xD0\\xBD\\xD0\\xBE\\xD0\\xBF\\xD0\\xBE\\xD0\\xBA, \\xD0\\xBC\\xD0\\xB5\\xD0\\xBD\\xD1\\x8E \\xD0\\xB8 \\xD0\\xBE\\xD0\\xBA\\xD0\\xBE\\xD0\\xBD.\",\"name\":\"\\xD0\\xA1\\xD0\\xB8\\xD1\\x81\\xD1\\x82\\xD0\\xB5\\xD0\\xBC\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F \\xD1\\x82\\xD0\\xB5\\xD0\\xBC\\xD0\\xB0 \\xE2\\x80\\x94 \\xD0\\xB0\\xD0\\xB2\\xD1\\x82\\xD0\\xBE\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.4.1\",\"scope\":4,\"foreignInstall\":false,\""
		"hasBinaryComponents\":false,\"installDay\":19783,\"updateDay\":19783},\"activeGMPlugins\":{\"gmp-gmpopenh264\":{\"version\":\"2.3.2\",\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-widevinecdm\":{\"version\":\"4.10.2830.0\",\"userDisabled\":false,\"applyBackgroundUpdates\":1}}},\"experiments\":{\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"type\":\"nimbus-nimbus\"},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled"
		"\",\"type\":\"nimbus-rollout\"},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"type\":\"nimbus-rollout\"},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"type\":\"nimbus-rollout\"},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"type\":\"nimbus-rollout\"},\"phc-rollout\":{\"branch\":\"rollout\",\"type\":\"nimbus-rollout\"},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"type\":\"nimbus-rollout\"},\""
		"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"type\":\"nimbus-rollout\"},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"type\":\"nimbus-rollout\"},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"type\":\"nimbus-rollout\"},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"type\":\"nimbus-rollout\"},\"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"type\":\"nimbus-rollout\"},"
		"\"disable-ads-startup-cache\":{\"branch\":\"control\",\"type\":\"nimbus-rollout\"},\"disabling-chips-for-v131\":{\"branch\":\"control\",\"type\":\"nimbus-rollout\"},\"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"type\":\"nimbus-rollout\"}}}}", 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("x-telemetry-agent", 
		"Glean/61.2.0 (Rust on Windows)");

	web_custom_request("796f4aa8-7d87-4fd1-9a5f-74ed0ef7cd88", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/796f4aa8-7d87-4fd1-9a5f-74ed0ef7cd88", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t70.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":113,\"start_time\":\"2024-11-28T18:16:13.000+05:00\",\"end_time\":\"2024-11-28T18:20:03.430+05:00\",\"reason\":\"startup\",\"experiments\":{\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-ads-startup-cache\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"windows_build_number\":22631,\"app_display_version\":\"133.0\",\"app_channel\":\"release\",\"architecture\":"
		"\"x86_64\",\"locale\":\"ru\",\"app_build\":\"20241121140525\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"client_id\":\"4691bf69-838a-4a5f-8495-dd6b7e5add4b\",\"first_run_date\":\"2024-03-01+05:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\"},\"metrics\":{\"quantity\":{\"urlbar.pref_max_results\":10},\"boolean\":{\"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_topsites\":true,\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_data_collection\":false},\"uuid\":{\""
		"legacy.telemetry.profile_group_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\",\"legacy.telemetry.client_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\"}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"can_load\":\"true\",\"loadfail_reason\":\"N/A\",\"glean_timestamp\":\"1732799763744\",\"path_key\":\"clean\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\""
		"glean_timestamp\":\"1732799763744\",\"can_load\":\"true\",\"path_key\":\"clean\",\"loadfail_reason\":\"N/A\"}},{\"timestamp\":1,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"glean_timestamp\":\"1732799763745\",\"shutdown_reason\":\"N/A\",\"shutdown_ok\":\"false\"}},{\"timestamp\":9260,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"glean_timestamp\":\"1732799773005\",\"setting\":\"required\"}},{\"timestamp\":9862,\""
		"category\":\"doh\",\"name\":\"state_enabled\",\"extra\":{\"glean_timestamp\":\"1732799773607\",\"value\":\"null\"}},{\"timestamp\":9862,\"category\":\"doh\",\"name\":\"evaluate_v2_heuristics\",\"extra\":{\"evaluateReason\":\"startup\",\"value\":\"enable_doh\",\"networkID\":\"+xm8SfM3OSaixowT5lmIV7eZArknGh9/WtmUEdXxe7s=\",\"platform\":\"\",\"captiveState\":\"unknown\",\"steeredProvider\":\"\",\"canaries\":\"\",\"glean_timestamp\":\"1732799773607\",\"filtering\":\"\",\"enterprise\":\"\"}},{\""
		"timestamp\":10015,\"category\":\"normandy\",\"name\":\"validation_failed_nimbus_experiment\",\"extra\":{\"reason\":\"invalid-feature\",\"glean_timestamp\":\"1732799773759\",\"value\":\"add-an-image-to-pdf-with-alt-text-rollout\",\"feature\":\"addAnImageInPDF\"}},{\"timestamp\":10015,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"experiment\":\"add-an-image-to-pdf-with-alt-text-rollout\",\"glean_timestamp\":\"1732799773759\",\"feature\":\"addAnImageInPDF\",\"reason\":\""
		"invalid-feature\"}},{\"timestamp\":10015,\"category\":\"normandy\",\"name\":\"validation_failed_nimbus_experiment\",\"extra\":{\"reason\":\"invalid-feature\",\"glean_timestamp\":\"1732799773759\",\"value\":\"tab-hover-preview-release-rollout\",\"feature\":\"tabPreview\"}},{\"timestamp\":10015,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"feature\":\"tabPreview\",\"glean_timestamp\":\"1732799773759\",\"reason\":\"invalid-feature\",\"experiment\":\""
		"tab-hover-preview-release-rollout\"}},{\"timestamp\":10015,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1732799773760\"}},{\"timestamp\":10107,\"category\":\"jsonfile\",\"name\":\"load_logins\",\"extra\":{\"value\":\"\",\"glean_timestamp\":\"1732799773851\"}},{\"timestamp\":10130,\"category\":\"upgrade_dialog\",\"name\":\"trigger_reason\",\"extra\":{\"glean_timestamp\":\"1732799773874\",\"value\":\"not-major\"}},{\"timestamp\":13212,\"category\":\""
		"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"time\":\"3541.529700\",\"attemptCount\":\"1\",\"value\":\"2\",\"captivePortal\":\"1\",\"glean_timestamp\":\"1732799776956\",\"results\":\"+\",\"trigger\":\"pref-change\",\"contextReason\":\"pref-change\",\"networkID\":\"Na74NCUk2Fb4YiLywHfe30MtMzE=\"}},{\"timestamp\":24663,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"glean_timestamp\":\"1732799788408\",\"value\":\"null\"}}]}", 
		LAST);

	lr_start_transaction("home");

	web_add_auto_header("Priority", 
		"u=0, i");

	web_add_header("DNT", 
		"1");

	web_add_header("Sec-GPC", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(20);

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");

	web_custom_request("dns-query_13", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x03www\\x06imatix\\x03com\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00U\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00I\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("dns-query_14", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x03www\\x06imatix\\x03com\\x00\\x00\\x01\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00U\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00I\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("dns-query_15", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x03www\\x06imatix\\x03com\\x00\\x00A\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00U\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00I\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	lr_end_transaction("home",LR_AUTO);

	lr_start_transaction("login");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(24);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=140364.526933981HccAAAApDftVzzzHtDDcApAAcVcf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=49", ENDITEM, 
		"Name=login.y", "Value=8", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("click flights");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(14);

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("click flights",LR_AUTO);

	lr_start_transaction("find_flight");

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(31);

	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=11/29/2024", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=11/30/2024", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=66", ENDITEM, 
		"Name=findFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_end_transaction("find_flight",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("select_ticket");

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=020;338;11/29/2024", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=49", ENDITEM, 
		"Name=reserveFlights.y", "Value=6", ENDITEM, 
		LAST);

	lr_end_transaction("select_ticket",LR_AUTO);

	return 0;
}