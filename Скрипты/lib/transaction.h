

void open_home_page(){
/*Correlation comment - Do not change!  Original value='140359.08999595HcVQHcApzQVzzzzHtDDVipDctVf' Name ='userSession' Type ='ResponseBased'*/
		
	web_reg_find("Text=Welcome to the Web Tours site.",
		LAST);


	web_reg_save_param_attrib(
		"ParamName=userSession",
		"TagName=input",
		"Extract=value",
		"Name=userSession",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		LAST);
}

void login(){
	
	web_reg_find("Text=User password was correct",LAST);
	
	web_reg_find("Text=<blockquote>Welcome, <b>{login}</b>, to the Web Tours",LAST);
	
	web_submit_data("login.pl",
		"Action=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t75.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={login}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		"Name=login.x", "Value=49", ENDITEM,
		"Name=login.y", "Value=8", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);	
}

void flights_page(){
		web_reg_find("Text=Find Flight",
		LAST);
	
	random();
	
		web_reg_save_param("DepartCity", 
	   "LB=\">",
	   "RB=</option>",
	   "Ordinal=all",
	   LAST
	);
	web_reg_save_param("ArriveCity", 
	   "LB=\">",
	   "RB=</option>",
	   "Ordinal=all",
	   LAST
	);

	
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
    
	city();
}

void find_flight(){

	web_reg_find("Text=<B>{departCity}</B> to <B>{returnCity}</B>",LAST);
	
	web_reg_save_param("outboundFlight",
        "LB/IC=name=\"outboundFlight\" value=\"",
        "RB/IC=\"",
        "Ordinal=all",
        LAST);

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
		"Name=depart", "Value={departCity}", ENDITEM, 
		"Name=departDate", "Value={departDate}", ENDITEM, 
		"Name=arrive", "Value={returnCity}", ENDITEM, 
		"Name=returnDate", "Value={returnDate}", ENDITEM, 
		"Name=numPassengers", "Value={randNumber}", ENDITEM, 
		"Name=seatPref", "Value={seatPref}", ENDITEM, 
		"Name=seatType", "Value={seatType}", ENDITEM, 
		"Name=findFlights.x", "Value=66", ENDITEM, 
		"Name=findFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);
	
	lr_save_string(lr_paramarr_random("outboundFlight"),("outboundFlight"));

}

void select_ticket(){
	web_reg_find("Text=Payment Details",LAST);
	
	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM, 
		"Name=numPassengers", "Value={randNumber}", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value={seatType}", ENDITEM, 
		"Name=seatPref", "Value={seatPref}", ENDITEM, 
		"Name=reserveFlights.x", "Value=49", ENDITEM, 
		"Name=reserveFlights.y", "Value=6", ENDITEM, 
		LAST);

}

void itinerary_page(){
	web_reg_find("Text=Itinerary",
		LAST);
			
	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);
}