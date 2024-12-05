void random(){
int randNumber;
	randNumber = rand()%7 + 3; 
    lr_save_int(randNumber, "randNumber");
}

void city(){
char * flightVal;
char * flightVal1;
lr_save_string(lr_paramarr_random("DepartCity"),"departCity");
lr_save_string(lr_paramarr_random("ArriveCity"),"returnCity");	
flightVal=lr_eval_string("{returnCity}");
flightVal1=lr_eval_string("{departCity}");

	while (strcmp(flightVal, flightVal1) == 0) {
		lr_save_string(lr_paramarr_random("ArriveCity"),"returnCity");	
		flightVal=lr_eval_string("{returnCity}");	
		lr_save_string(flightVal, "flightVal");	
	}
}

void random_reg(char *username) {
    const char letters[] = "abcdefghijklmnopqrstuvwxyz";
    int length = 8; 
    int i;

    for (i = 0; i < length; i++) {
        username[i] = letters[rand() % 26];
    }

}

