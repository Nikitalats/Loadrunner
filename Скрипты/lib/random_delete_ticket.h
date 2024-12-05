del(){	

	int count_flight=atoi(lr_eval_string("{flightID_count}"));

	if (3 > count_flight) {
	      	int random_number = rand() % count_flight + 1;
	      	lr_save_int(random_number, "random_del");
	      }
	      else {
	      	int	random_number=rand() % 3 + 1;
	      	lr_save_int(random_number, "random_del");
	  	}	  	
}