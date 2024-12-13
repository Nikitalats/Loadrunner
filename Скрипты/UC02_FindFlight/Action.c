Action()
{  
	lr_start_transaction("UC02_FindFlight");

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


	lr_end_transaction("find_flight",LR_AUTO);
	
	lr_start_transaction("select_ticket");

	select_ticket();
	lr_think_time(5);

	lr_end_transaction("select_ticket",LR_AUTO);
	

		
	lr_start_transaction("itinerary_page");

	itinerary_page();
	lr_think_time(3);
	
	lr_end_transaction("itinerary_page",LR_AUTO);
		
	lr_end_transaction("UC02_FindFlight", LR_AUTO);

	return 0;
}