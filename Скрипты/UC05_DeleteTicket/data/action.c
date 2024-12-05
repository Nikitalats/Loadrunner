Action()
{

	web_custom_request("dns-query_21", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x01o\\x03pki\\x04goog\\x00\\x00\\x01\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00Y\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00M\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_add_auto_header("Priority", 
		"u=2");

	web_custom_request("llA_4", 
		"URL=http://o.pki.goog/s/we1/llA", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\x96P\\x0F*\\x80\\xF8\"\\x90\\x0EU\\x87Q\\xC0U\\x82.", 
		LAST);

	web_custom_request("llA_5", 
		"URL=http://o.pki.goog/s/we1/llA", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\x96P\\x0F*\\x80\\xF8\"\\x90\\x0EU\\x87Q\\xC0U\\x82.", 
		LAST);

	web_custom_request("llA_6", 
		"URL=http://o.pki.goog/s/we1/llA", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\x96P\\x0F*\\x80\\xF8\"\\x90\\x0EU\\x87Q\\xC0U\\x82.", 
		LAST);

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

	lr_think_time(5);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=140383.17764277HccAQfQpHtDDcfpHfic", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=40", ENDITEM, 
		"Name=login.y", "Value=7", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t130.inf", 
		LAST);

	lr_start_transaction("dlete_ticket");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(14);

	web_submit_form("itinerary.pl", 
		"Snapshot=t131.inf", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		LAST);

	lr_end_transaction("dlete_ticket",LR_AUTO);

	return 0;
}