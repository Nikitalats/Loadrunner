Action()
{  
	lr_start_transaction("UC03_BuyTicket");

	lr_start_transaction("open_home_page");

	open_home_page();
	lr_think_time(3);
	  	                  
	lr_end_transaction("open_home_page",LR_AUTO);

	lr_start_transaction("login");
	
	login();
	lr_think_time(5);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("flights_page");
	
	flights_page();
	lr_think_time(3);
	
	lr_end_transaction("flights_page",LR_AUTO);

	lr_start_transaction("find_flight");
	
	find_flight();
	lr_think_time(5);
	
	lr_end_transaction("find_flight",LR_AUTO);

	lr_start_transaction("select_ticket");
		
	select_ticket();
	lr_think_time(5);
	
	lr_end_transaction("select_ticket",LR_AUTO);

	lr_start_transaction("buy_ticket");
	
	web_reg_find("Text=Thank you for booking through Web Tours",
		LAST);
	
	web_reg_find("Text=from {departCity} to {returnCity}",
		LAST);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value={firstName}", ENDITEM, 
		"Name=lastName", "Value={lastName}", ENDITEM, 
		"Name=address1", "Value={street}", ENDITEM, 
		"Name=address2", "Value={city}", ENDITEM, 
		"Name=pass1", "Value={firstName} {lastName}", ENDITEM, 
		"Name=creditCard", "Value={creditCard}", ENDITEM, 
		"Name=expDate", "Value={expDate}", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value={randNumber}", ENDITEM, 
		"Name=seatType", "Value={seatType}", ENDITEM, 
		"Name=seatPref", "Value={seatPref}", ENDITEM, 
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=46", ENDITEM, 
		"Name=buyFlights.y", "Value=5", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);
	
	lr_think_time(5);
	
	lr_end_transaction("buy_ticket",LR_AUTO);
	
	
	lr_start_transaction("sign_off");

	sign_off();

	lr_end_transaction("sign_off",LR_AUTO);
	
	lr_end_transaction("UC03_BuyTicket", LR_AUTO);

	
	return 0;
}