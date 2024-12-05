Action()
{

	lr_start_transaction("sign_up");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_header("DNT", 
		"1");

	web_add_header("Sec-GPC", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(251);

	web_url("login.pl", 
		"URL=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/home.html", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_up",LR_AUTO);

	web_revert_auto_header("Priority");

	lr_think_time(14);

	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("registration");

	web_add_header("DNT", 
		"1");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Priority", 
		"u=4");

	web_add_header("Sec-GPC", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(73);

	web_submit_data("login.pl_2", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=test", ENDITEM, 
		"Name=password", "Value=1234", ENDITEM, 
		"Name=passwordConfirm", "Value=1234", ENDITEM, 
		"Name=firstName", "Value=first", ENDITEM, 
		"Name=lastName", "Value=last", ENDITEM, 
		"Name=address1", "Value=street", ENDITEM, 
		"Name=address2", "Value=city", ENDITEM, 
		"Name=register.x", "Value=55", ENDITEM, 
		"Name=register.y", "Value=10", ENDITEM, 
		LAST);

	lr_end_transaction("registration",LR_AUTO);

	return 0;
}