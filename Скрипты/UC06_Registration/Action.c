Action()
{
	char username[8];
	char lastname[8];
	char firstname[4];
	char password[7];
	char city[8]; 
	char street[8]; 
	
	lr_start_transaction("UC06_Registration");
	
	lr_start_transaction("open_home_page");

	open_home_page();
	lr_think_time(3);
	  	                  
	lr_end_transaction("open_home_page",LR_AUTO);

	lr_start_transaction("sign_up");
	
	web_reg_find("Text=Customer Profile",
	LAST);
		
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

	lr_start_transaction("registration");
	
    random_reg(username);    
    lr_save_string(username,"login");
    random_reg(password);    
    lr_save_string(password,"password"); 
    random_reg(lastname);    
    lr_save_string(lastname,"lastname"); 
    random_reg(firstname);    
    lr_save_string(firstname,"firstname"); 
    random_reg(street);    
    lr_save_string(street,"street");  
    random_reg(city);    
    lr_save_string(city,"city");         	
		
	web_reg_find("Text=Thank you, <b>{login}",
		LAST);
	
	web_submit_data("login.pl_2",
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=passwordConfirm", "Value={password}", ENDITEM, 
		"Name=firstName", "Value={firstname}", ENDITEM, 
		"Name=lastName", "Value={lastname}", ENDITEM, 
		"Name=address1", "Value={street}", ENDITEM, 
		"Name=address2", "Value={city}", ENDITEM, 
		"Name=register.x", "Value=55", ENDITEM, 
		"Name=register.y", "Value=10", ENDITEM, 
		LAST);
    
    lr_think_time(20);

	lr_end_transaction("registration",LR_AUTO);
		
	lr_end_transaction("UC06_Registration", LR_AUTO);

	return 0;
}