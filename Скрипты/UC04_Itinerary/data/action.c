Action()
{

	lr_think_time(17);

	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("itenerary");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_header("DNT", 
		"1");

	web_add_header("Sec-GPC", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("itenerary",LR_AUTO);

	return 0;
}