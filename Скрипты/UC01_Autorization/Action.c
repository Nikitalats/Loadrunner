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
	
	lr_start_transaction("itinerary_page");	
	itinerary_page();
	lr_think_time(3);
	
	lr_end_transaction("itinerary_page",LR_AUTO);
	
	lr_start_transaction("flights_page");
	
	flights_page();
	lr_think_time(3);
	
	lr_end_transaction("flights_page",LR_AUTO);

	lr_start_transaction("find_flight");
	
	find_flight();
	lr_think_time(5);
	
	lr_end_transaction("find_flight",LR_AUTO);


	lr_start_transaction("sign_off");

	sign_off();

	lr_end_transaction("sign_off",LR_AUTO);
	
	lr_end_transaction("UC01_Autorization", LR_AUTO);

	return 0;
}