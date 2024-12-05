Action()
{
	lr_start_transaction("UC01_Autorization");

	lr_start_transaction("open_home_page");

	open_home_page();
	lr_think_time(3);
	  	                  
	lr_end_transaction("open_home_page",LR_AUTO);

	lr_start_transaction("login");

	login();
	lr_think_time(5);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("sign_off");

	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(3);

	lr_end_transaction("sign_off",LR_AUTO);
	
	lr_end_transaction("UC01_Autorization", LR_AUTO);

	return 0;
}