Action()
{	
	lr_start_transaction("UC04_Itinerary");

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
	
	lr_end_transaction("UC04_Itinerary", LR_AUTO);

	return 0;
}