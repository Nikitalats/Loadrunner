Action()
{
	lr_start_transaction("UC05_DeleteTicket");
	
	lr_start_transaction("open_home_page");
	
	open_home_page();
	lr_think_time(3);

	lr_end_transaction("open_home_page",LR_AUTO);

	lr_start_transaction("login");

	login();
	lr_think_time(5);
	
	lr_end_transaction("login",LR_AUTO);


	lr_start_transaction("itinerary_page");
	
	web_reg_save_param_ex(
		"ParamName=flightID",
		"LB=name=\"flightID\" value=\"",
		"RB=\"",
		"NotFound=error",
		"Ordinal=all",
		SEARCH_FILTERS,
		LAST);
	
	itinerary_page();
	lr_think_time(3);
	
	lr_end_transaction("itinerary_page",LR_AUTO);
	
	lr_start_transaction("delete_ticket");
	
	del();
	
if (atoi(lr_eval_string("{random_del}"))==3) {
		web_reg_find("Fail=Found",
		"Text=flightID_1",
		LAST);
		web_reg_find("Fail=Found",
		"Text=flightID_2",
		LAST);
			web_reg_find("Fail=Found",
		"Text=flightID_3",
		LAST);
		
		web_submit_form("itinerary.pl",
		"Snapshot=t131.inf", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=2", "Value=on", ENDITEM, 
		"Name=3", "Value=on", ENDITEM, 
		"Name=removeFlights.x", "Value=40", ENDITEM, 
		"Name=removeFlights.y", "Value=5", ENDITEM, 
		LAST);		
	}
	
else if (atoi(lr_eval_string("{random_del}"))==2) {
		
		web_reg_find("Fail=Found",
		"Text=flightID_1",
		LAST);
		web_reg_find("Fail=Found",
		"Text=flightID_2",
		LAST);
		
		web_submit_form("itinerary.pl",
		"Snapshot=t131.inf", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=2", "Value=on", ENDITEM, 
		"Name=removeFlights.x", "Value=40", ENDITEM, 
		"Name=removeFlights.y", "Value=5", ENDITEM, 
		LAST);
		
	
	}
	
else{
		
	web_reg_find("Fail=Found",
		"Text=flightID_1",
		LAST);

	web_submit_form("itinerary.pl", 
		"Snapshot=t131.inf", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=removeFlights.x", "Value=40", ENDITEM, 
		"Name=removeFlights.y", "Value=5", ENDITEM, 
		LAST);
		
	}
	
	lr_think_time(5);
	
	lr_end_transaction("delete_ticket",LR_AUTO);
	
	
	lr_start_transaction("sign_off");

	sign_off();

	lr_end_transaction("sign_off",LR_AUTO);
	
	lr_end_transaction("UC05_DeleteTicket", LR_AUTO);

	return 0;
}