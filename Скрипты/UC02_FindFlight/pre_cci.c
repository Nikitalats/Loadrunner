# 1 "c:\\loadrunner_nt\\\361\352\360\350\357\362\373\\uc02_findflight\\\\combined_UC02_FindFlight.c"
# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\loadrunner_nt\\\361\352\360\350\357\362\373\\uc02_findflight\\\\combined_UC02_FindFlight.c" 2

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\loadrunner_nt\\\361\352\360\350\357\362\373\\uc02_findflight\\\\combined_UC02_FindFlight.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1



 
const char * const body_variable_1 = "Body={\"ping_info\":{\"seq\":76,\"start_time\":\"2024-11-27T19:17:01.000+05:00\",\"end_time\":\"2024-11-28T18:16:13.991+05:00\",\"reason\":\"overdue\",\"experiments\":{\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-and-tail-fox-2024-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disabling-chips-for-v131\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretrie"
		"s\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-ads-startup-cache\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-click-set-to-default-existing-profiles-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"extensions-migration-in-import-wizard-116-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"61.2.0\",\"client_id\":\"4691bf69-838a-4a5f-8495-dd6b7e5add4b\",\"first_run_date\":\"2024-03-01+05:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":22631,\"app_build\":\"20241"
		"121140525\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_display_version\":\"133.0\",\"locale\":\"ru\",\"app_channel\":\"release\",\"architecture\":\"x86_64\"},\"metrics\":{\"timing_distribution\":{\"networking.dns_renewal_time\":{\"values\":{\"15384774\":0,\"47453132\":1,\"21757357\":5,\"1617125\":0,\"30769549\":6,\"16777216\":1,\"6468501\":4,\"3234250\":0,\"1359834\":0,\"10878678\":2,\"23726566\":1,\"2097152\":0,\"1763487\":0,\"2719669\":0,\"61539099\":2,\"67108864\":0,\"1482910\":0,\"961548\":2,\"9975792\":1,\"4987896\":1,\"36591367\":0,\"1048576\":0,\"14107900\":7,\"9147841\":8,\"39903169\":0,\"19951584\":3,\"5931641\":1,\"28215801\":0,\"56431603\":2,\"1143480\":1,\"2965820\":0,\"51748008\":3,\"3526975\":0,\"7053950\":4,\"8388608\":10,\"12937002\":7,\"2286960\":0,\"2493948\":0,\"33554432\":0,\"1923096\":0,\"4194304\":0,\"7692387\":6,\"43514714\":5,\"18295683\":1,\"4573920\":1,\"1246974\":0,\"25874004\":3,\"3846193\":0,\"5439339\":1,\"11863283\":6},\"sum\":1789166300},\"network.sub_open_to_first_sent"
		"\":{\"values\":{\"3846193\":1,\"9975792\":1,\"33554432\":0,\"21757357\":0,\"16777216\":2,\"225726412\":0,\"112863206\":0,\"123078199\":0,\"3526975\":0,\"1617125\":1,\"6468501\":0,\"47453132\":4,\"189812531\":2,\"73182735\":0,\"174058858\":0,\"2719669\":0,\"4987896\":1,\"19951584\":0,\"7692387\":0,\"103496016\":2,\"43514714\":4,\"146365470\":0,\"39903169\":3,\"134217728\":0,\"268435456\":0,\"4194304\":2,\"379625062\":1,\"2286960\":1,\"67108864\":1,\"5439339\":1,\"79806338\":1,\"319225354\":0,\"292730940\":0,\"56431603\":0,\"413984066\":0,\"206992033\":0,\"11863283\":0,\"7053950\":1,\"12937002\":2,\"2097152\":0,\"23726566\":4,\"87029429\":3,\"5931641\":0,\"159612677\":0,\"348117717\":0,\"8388608\":0,\"1763487\":0,\"2493948\":0,\"1923096\":0,\"3234250\":0,\"36591367\":2,\"25874004\":7,\"94906265\":0,\"61539099\":2,\"246156398\":0,\"51748008\":0,\"28215801\":3,\"9147841\":0,\"15384774\":0,\"18295683\":1,\"2965820\":0,\"10878678\":0,\"30769549\":0,\"14107900\":0,\"4573920\":2},\"sum\":2636893900},\"performance.p"
		"ageload.async_sheet_load\":{\"values\":{\"1246974\":1,\"25874004\":1,\"33554432\":5,\"1763487\":2,\"87029429\":3,\"3234250\":0,\"174058858\":1,\"30769549\":5,\"67108864\":7,\"103496016\":8,\"23726566\":1,\"1143480\":2,\"1359834\":5,\"73182735\":5,\"6468501\":12,\"246156398\":0,\"5439339\":18,\"28215801\":4,\"11863283\":23,\"134217728\":3,\"8388608\":3,\"4573920\":7,\"21757357\":24,\"2719669\":3,\"79806338\":4,\"2493948\":2,\"9147841\":2,\"268435456\":1,\"61539099\":21,\"7053950\":6,\"9975792\":6,\"19951584\":15,\"51748008\":28,\"146365470\":0,\"7692387\":3,\"36591367\":36,\"18295683\":13,\"47453132\":34,\"189812531\":0,\"1048576\":1,\"39903169\":5,\"15384774\":5,\"94906265\":1,\"10878678\":7,\"961548\":14,\"159612677\":0,\"2097152\":1,\"12937002\":30,\"16777216\":1,\"225726412\":1,\"206992033\":2,\"1923096\":3,\"56431603\":33,\"2286960\":3,\"2965820\":0,\"3846193\":4,\"1617125\":3,\"1482910\":5,\"14107900\":23,\"5931641\":10,\"112863206\":10,\"123078199\":0,\"4987896\":5,\"4194304\":8,\"43514714\":47,\"3526"
		"975\":0,\"292730940\":0},\"sum\":18815821200},\"network.open_to_first_sent\":{\"values\":{\"3037000499\":0,\"123078199\":0,\"6623745058\":0,\"14107900\":3,\"585461880\":0,\"696235434\":0,\"23726566\":2,\"492312796\":0,\"2965820\":0,\"103496016\":0,\"1073741824\":0,\"94906265\":0,\"292730940\":0,\"51748008\":0,\"8388608\":4,\"12937002\":2,\"146365470\":0,\"536870912\":0,\"9367390095\":0,\"1170923761\":0,\"28215801\":3,\"2493948\":0,\"4294967296\":0,\"638450708\":0,\"3234250\":0,\"1276901416\":0,\"3526975\":0,\"112863206\":0,\"11139766950\":0,\"25874004\":1,\"1923096\":0,\"16777216\":1,\"12148001999\":3,\"36591367\":1,\"2341847523\":0,\"67108864\":0,\"2097152\":0,\"7053950\":1,\"18734780191\":1,\"2784941737\":0,\"1518500249\":0,\"3311872529\":0,\"379625062\":0,\"268435456\":0,\"4194304\":0,\"319225354\":0,\"2553802833\":0,\"174058858\":0,\"30769549\":3,\"984625593\":0,\"15754009503\":0,\"17179869184\":1,\"6468501\":1,\"1805811301\":0,\"189812531\":1,\"134217728\":0,\"19951584\":2,\"827968132\":0,\"413984066\""
		":0,\"20430422668\":0,\"4683695047\":0,\"2286960\":0,\"5931641\":1,\"79806338\":1,\"1655936264\":0,\"6074000999\":0,\"10878678\":0,\"61539099\":0,\"348117717\":0,\"1763487\":1,\"9975792\":2,\"14446490411\":0,\"206992033\":0,\"451452825\":0,\"43514714\":2,\"13247490117\":0,\"246156398\":1,\"21757357\":3,\"10215211334\":0,\"3938502375\":0,\"4987896\":2,\"7877004751\":0,\"11863283\":2,\"47453132\":0,\"5439339\":1,\"5569883475\":0,\"4573920\":1,\"73182735\":0,\"39903169\":2,\"15384774\":2,\"56431603\":1,\"9147841\":0,\"8589934592\":0,\"1969251187\":0,\"1392470868\":0,\"159612677\":0,\"2719669\":0,\"3846193\":0,\"87029429\":1,\"33554432\":0,\"18295683\":2,\"902905650\":0,\"3611622602\":0,\"7223245205\":0,\"2147483648\":0,\"7692387\":2,\"759250124\":0,\"5107605667\":0,\"225726412\":0},\"sum\":76428941000},\"network.cache_read_time\":{\"values\":{\"25874004\":0,\"4194304\":0,\"961548\":1,\"11863283\":0,\"2719669\":0,\"1763487\":0,\"1143480\":1,\"3846193\":0,\"2286960\":2,\"16777216\":0,\"14107900\":0,\"10878678\":0"
		",\"19951584\":0,\"1246974\":0,\"1482910\":0,\"1617125\":0,\"8388608\":0,\"3234250\":1,\"5931641\":0,\"7692387\":0,\"12937002\":0,\"4573920\":0,\"23726566\":1,\"2965820\":0,\"21757357\":0,\"15384774\":0,\"6468501\":1,\"2097152\":0,\"1048576\":0,\"3526975\":1,\"18295683\":1,\"2493948\":0,\"9975792\":0,\"7053950\":0,\"1923096\":1,\"4987896\":0,\"5439339\":1,\"1359834\":0,\"9147841\":0},\"sum\":72438800},\"networking.dns_lookup_time\":{\"values\":{\"4573920\":3,\"536870912\":0,\"5931641\":0,\"7053950\":0,\"61539099\":0,\"8388608\":4,\"3311872529\":0,\"146365470\":0,\"103496016\":0,\"9147841\":10,\"11863283\":16,\"1170923761\":0,\"4194304\":2,\"319225354\":1,\"33554432\":4,\"1655936264\":0,\"1392470868\":0,\"2147483648\":0,\"18295683\":4,\"2965820\":2,\"25874004\":6,\"1805811301\":0,\"1276901416\":0,\"21757357\":5,\"7692387\":4,\"206992033\":0,\"696235434\":0,\"3234250\":3,\"56431603\":8,\"12937002\":15,\"225726412\":0,\"413984066\":0,\"1359834\":1,\"30769549\":4,\"585461880\":0,\"2784941737\":0,\"2719669\":1,\""
		"2286960\":2,\"23726566\":2,\"123078199\":0,\"15384774\":3,\"14107900\":5,\"6468501\":4,\"451452825\":0,\"36591367\":1,\"2553802833\":0,\"47453132\":0,\"492312796\":0,\"73182735\":2,\"43514714\":2,\"159612677\":0,\"1073741824\":0,\"2493948\":2,\"112863206\":0,\"1518500249\":0,\"1246974\":1,\"1048576\":0,\"4987896\":3,\"3526975\":1,\"2341847523\":0,\"16777216\":2,\"1617125\":1,\"348117717\":0,\"79806338\":0,\"292730940\":0,\"759250124\":0,\"3846193\":3,\"10878678\":14,\"638450708\":0,\"67108864\":0,\"19951584\":2,\"268435456\":0,\"134217728\":0,\"1482910\":0,\"2097152\":3,\"3037000499\":1,\"5439339\":1,\"9975792\":14,\"984625593\":0,\"87029429\":2,\"39903169\":0,\"961548\":7,\"51748008\":1,\"28215801\":4,\"1969251187\":0,\"174058858\":0,\"379625062\":0,\"246156398\":0,\"902905650\":0,\"1763487\":1,\"827968132\":0,\"94906265\":0,\"1923096\":1,\"1143480\":0,\"189812531\":0},\"sum\":6397685300},\"ocsp_request_time.success\":{\"values\":{\"759250124\":1,\"123078199\":0,\"206992033\":3,\"67108864\":1,\"451452825\""
		":0,\"1170923761\":1,\"47453132\":0,\"1969251187\":0,\"174058858\":9,\"94906265\":1,\"268435456\":0,\"379625062\":0,\"1655936264\":3,\"827968132\":0,\"585461880\":0,\"43514714\":1,\"292730940\":0,\"319225354\":0,\"73182735\":0,\"146365470\":0,\"1276901416\":0,\"696235434\":2,\"638450708\":1,\"902905650\":0,\"189812531\":10,\"134217728\":0,\"112863206\":2,\"1805811301\":1,\"1392470868\":2,\"413984066\":1,\"246156398\":0,\"536870912\":0,\"348117717\":0,\"103496016\":0,\"492312796\":1,\"225726412\":0,\"87029429\":1,\"61539099\":2,\"1073741824\":2,\"1518500249\":0,\"56431603\":3,\"159612677\":1,\"79806338\":0,\"51748008\":1,\"984625593\":2},\"sum\":24743801500},\"performance.page.total_content_page_load\":{\"values\":{\"225726412\":3,\"268435456\":1,\"94906265\":3,\"451452825\":0,\"10215211334\":0,\"146365470\":4,\"696235434\":0,\"2784941737\":0,\"28215801\":1,\"5107605667\":0,\"51748008\":3,\"1518500249\":0,\"3037000499\":0,\"56431603\":0,\"1170923761\":0,\"5569883475\":0,\"159612677\":2,\"1969251187\":0,\"3355"
		"4432\":1,\"20430422668\":0,\"7877004751\":0,\"23726566\":1,\"79806338\":1,\"379625062\":0,\"4683695047\":0,\"536870912\":0,\"14107900\":0,\"16777216\":1,\"13247490117\":0,\"103496016\":1,\"61539099\":0,\"15754009503\":0,\"43514714\":0,\"413984066\":2,\"2553802833\":0,\"174058858\":4,\"14446490411\":0,\"9367390095\":0,\"123078199\":2,\"73182735\":2,\"492312796\":1,\"1805811301\":0,\"4294967296\":0,\"134217728\":5,\"827968132\":0,\"6623745058\":0,\"2341847523\":0,\"319225354\":1,\"21757357\":0,\"18734780191\":2,\"6074000999\":0,\"638450708\":0,\"189812531\":1,\"1392470868\":0,\"47453132\":2,\"25874004\":0,\"3311872529\":0,\"1276901416\":0,\"3611622602\":0,\"3938502375\":0,\"30769549\":0,\"36591367\":0,\"112863206\":1,\"67108864\":0,\"7223245205\":0,\"11863283\":1,\"585461880\":0,\"246156398\":1,\"17179869184\":1,\"1073741824\":0,\"2147483648\":0,\"759250124\":0,\"11139766950\":0,\"1655936264\":0,\"87029429\":4,\"292730940\":3,\"12148001999\":3,\"12937002\":1,\"902905650\":0,\"348117717\":1,\"39903169\":1,\"18"
		"295683\":0,\"15384774\":0,\"206992033\":2,\"984625593\":1,\"8589934592\":0,\"19951584\":0},\"sum\":105886385900},\"javascript.gc.slice_time\":{\"values\":{\"12937002\":10,\"5931641\":19,\"43514714\":0,\"2286960\":0,\"18295683\":1,\"39903169\":1,\"2719669\":0,\"23726566\":9,\"7053950\":0,\"6468501\":10,\"9147841\":0,\"19951584\":4,\"3526975\":0,\"2493948\":0,\"3846193\":18,\"5439339\":0,\"21757357\":4,\"28215801\":2,\"2965820\":28,\"4573920\":0,\"33554432\":0,\"30769549\":0,\"8388608\":5,\"25874004\":6,\"1048576\":0,\"1617125\":0,\"15384774\":3,\"16777216\":3,\"4194304\":0,\"1359834\":0,\"10878678\":11,\"1923096\":25,\"1143480\":0,\"1246974\":0,\"3234250\":0,\"961548\":581,\"4987896\":37,\"2097152\":0,\"7692387\":6,\"1482910\":0,\"11863283\":4,\"14107900\":4,\"9975792\":12,\"36591367\":1,\"1763487\":0},\"sum\":2549000000},\"performance.clone.deserialize.time\":{\"values\":{\"142935\":50,\"8192\":0,\"4870\":3011,\"1246974\":5,\"1722\":0,\"440871\":10,\"1878\":22342,\"939\":20073,\"4466\":0,\"741455\":5,\"1482"
		"910\":4,\"1024\":0,\"46340\":150,\"27554\":314,\"10623\":968,\"2493948\":1,\"19483\":489,\"8388608\":1,\"220435\":20,\"38967\":208,\"1617125\":0,\"5311\":0,\"524288\":7,\"881743\":5,\"8933\":1212,\"155871\":49,\"6468501\":1,\"30048\":178,\"6888\":1901,\"4096\":0,\"71467\":115,\"262144\":23,\"77935\":123,\"679917\":4,\"13777\":1116,\"370727\":14,\"4194304\":1,\"2048\":0,\"84989\":134,\"3756\":5105,\"1143480\":6,\"1048576\":2,\"5792\":2282,\"5931641\":0,\"55108\":179,\"32768\":250,\"1116\":0,\"2965820\":1,\"60096\":140,\"169979\":30,\"92681\":120,\"4573920\":1,\"2286960\":4,\"623487\":12,\"7692387\":0,\"2655\":0,\"240387\":22,\"3846193\":2,\"480774\":6,\"7512\":1500,\"12633\":695,\"2719669\":1,\"35733\":217,\"110217\":98,\"120193\":73,\"16384\":322,\"2896\":9366,\"1448\":0,\"17866\":585,\"1579\":0,\"2097152\":2,\"202140\":29,\"9147841\":0,\"7053950\":0,\"1327\":0,\"11585\":821,\"3158\":0,\"131072\":72,\"42494\":171,\"404281\":10,\"3526975\":0,\"2233\":0,\"2435\":0,\"101070\":107,\"1763487\":2,\"311743\":20,\""
		"1923096\":1,\"25267\":240,\"3444\":0,\"9741\":968,\"6316\":0,\"808562\":2,\"285870\":11,\"4987896\":2,\"5439339\":0,\"15024\":405,\"571740\":6,\"65536\":133,\"185363\":35,\"3234250\":1,\"21247\":416,\"1217\":0,\"1359834\":4,\"50535\":158,\"339958\":11,\"23170\":315,\"961548\":8},\"sum\":683815000},\"cert_verification_time.failure\":{\"values\":{\"10878678\":0,\"56431603\":0,\"36591367\":0,\"134217728\":0,\"984625593\":0,\"524288\":0,\"292730940\":0,\"1073741824\":0,\"623487\":1,\"492312796\":0,\"3234250\":0,\"79806338\":0,\"189812531\":0,\"5569883475\":0,\"1518500249\":0,\"1969251187\":1,\"43514714\":0,\"451452825\":0,\"123078199\":0,\"206992033\":1,\"696235434\":0,\"7053950\":0,\"1655936264\":1,\"30769549\":0,\"8589934592\":0,\"14107900\":0,\"39903169\":0,\"262144\":0,\"348117717\":0,\"741455\":0,\"146365470\":0,\"6074000999\":0,\"413984066\":1,\"902905650\":0,\"94906265\":0,\"4987896\":0,\"18295683\":0,\"1482910\":0,\"225726412\":0,\"174058858\":5,\"7692387\":0,\"202140\":0,\"51748008\":0,\"2286960\":0,\""
		"8388608\":0,\"5931641\":0,\"9975792\":0,\"4194304\":0,\"2493948\":0,\"3611622602\":0,\"33554432\":0,\"87029429\":0,\"638450708\":0,\"571740\":0,\"7223245205\":0,\"7877004751\":0,\"47453132\":0,\"19951584\":0,\"585461880\":0,\"370727\":0,\"103496016\":0,\"15384774\":0,\"67108864\":0,\"2965820\":0,\"379625062\":0,\"2784941737\":0,\"2341847523\":0,\"1276901416\":0,\"679917\":0,\"112863206\":1,\"2553802833\":0,\"3037000499\":0,\"961548\":0,\"1763487\":0,\"1923096\":0,\"3526975\":0,\"480774\":0,\"12937002\":0,\"1359834\":0,\"9367390095\":1,\"246156398\":0,\"6623745058\":0,\"9147841\":0,\"1048576\":0,\"311743\":0,\"1143480\":0,\"16777216\":0,\"185363\":1,\"404281\":0,\"4294967296\":0,\"61539099\":0,\"6468501\":0,\"536870912\":0,\"808562\":0,\"11863283\":0,\"3846193\":0,\"21757357\":0,\"28215801\":0,\"759250124\":0,\"319225354\":0,\"73182735\":0,\"1805811301\":0,\"5107605667\":0,\"3311872529\":0,\"827968132\":0,\"440871\":0,\"5439339\":0,\"10215211334\":0,\"4683695047\":0,\"1170923761\":0,\"268435456\":0,\"2147483"
		"648\":0,\"339958\":0,\"2719669\":0,\"220435\":0,\"881743\":0,\"1392470868\":0,\"23726566\":0,\"285870\":0,\"2097152\":0,\"240387\":0,\"1617125\":0,\"1246974\":0,\"25874004\":0,\"4573920\":0,\"159612677\":0,\"3938502375\":0},\"sum\":15395085600},\"network.sub_dns_start\":{\"values\":{\"2965820\":0,\"5439339\":0,\"73182735\":0,\"61539099\":0,\"7053950\":0,\"15384774\":0,\"8388608\":0,\"3846193\":0,\"94906265\":0,\"1359834\":1,\"1246974\":1,\"4987896\":0,\"36591367\":0,\"6468501\":0,\"12937002\":1,\"9147841\":0,\"3234250\":0,\"1482910\":1,\"1617125\":0,\"87029429\":1,\"67108864\":0,\"79806338\":0,\"39903169\":0,\"2286960\":0,\"25874004\":0,\"3526975\":1,\"2493948\":0,\"21757357\":0,\"56431603\":0,\"18295683\":0,\"14107900\":0,\"4573920\":0,\"19951584\":0,\"4194304\":1,\"10878678\":0,\"1763487\":0,\"43514714\":0,\"23726566\":0,\"7692387\":0,\"2719669\":0,\"2097152\":0,\"11863283\":0,\"51748008\":0,\"16777216\":0,\"30769549\":0,\"33554432\":0,\"9975792\":0,\"5931641\":0,\"1923096\":0,\"47453132\":0,\"28215801\":"
		"0},\"sum\":117547800},\"ls.preparelsdatabase.processing_time\":{\"values\":{\"5439339\":0,\"623487\":1,\"189812531\":0,\"268435456\":0,\"585461880\":0,\"47453132\":0,\"159612677\":0,\"103496016\":0,\"319225354\":0,\"25874004\":0,\"11863283\":0,\"12937002\":1,\"1923096\":1,\"225726412\":0,\"4987896\":0,\"19951584\":0,\"174058858\":0,\"881743\":0,\"1143480\":0,\"134217728\":0,\"492312796\":0,\"1763487\":1,\"348117717\":0,\"741455\":0,\"2097152\":0,\"67108864\":0,\"8388608\":0,\"43514714\":0,\"3234250\":0,\"2719669\":0,\"536870912\":1,\"36591367\":0,\"94906265\":0,\"246156398\":0,\"1246974\":2,\"15384774\":0,\"961548\":0,\"33554432\":0,\"79806338\":0,\"6468501\":0,\"413984066\":0,\"2493948\":0,\"4194304\":0,\"23726566\":0,\"292730940\":0,\"112863206\":0,\"808562\":0,\"123078199\":0,\"1482910\":0,\"679917\":0,\"39903169\":0,\"28215801\":0,\"2965820\":0,\"3846193\":0,\"30769549\":0,\"14107900\":0,\"379625062\":0,\"146365470\":0,\"451452825\":0,\"16777216\":0,\"10878678\":0,\"9147841\":0,\"1048576\":0,\"206992033"
		"\":0,\"7692387\":0,\"9975792\":0,\"51748008\":0,\"18295683\":0,\"4573920\":0,\"61539099\":0,\"7053950\":0,\"1359834\":0,\"1617125\":0,\"56431603\":0,\"21757357\":0,\"3526975\":0,\"2286960\":0,\"73182735\":0,\"87029429\":0,\"5931641\":0},\"sum\":587011100},\"javascript.gc.mark_roots_time\":{\"values\":{\"1617125\":0,\"110217\":6,\"84989\":4,\"1763487\":0,\"339958\":3,\"4194304\":0,\"185363\":3,\"4987896\":0,\"741455\":0,\"2097152\":0,\"2965820\":0,\"50535\":6,\"71467\":7,\"961548\":1,\"142935\":6,\"240387\":1,\"5439339\":0,\"440871\":2,\"131072\":4,\"571740\":3,\"42494\":1,\"2719669\":0,\"311743\":4,\"1048576\":0,\"35733\":5,\"1923096\":1,\"202140\":5,\"3526975\":0,\"120193\":10,\"370727\":2,\"679917\":4,\"808562\":4,\"5931641\":0,\"92681\":6,\"285870\":2,\"623487\":3,\"27554\":2,\"6468501\":0,\"101070\":12,\"2286960\":0,\"3846193\":0,\"881743\":1,\"480774\":2,\"2493948\":0,\"524288\":0,\"1482910\":2,\"155871\":8,\"1246974\":2,\"1143480\":1,\"60096\":2,\"38967\":7,\"30048\":2,\"9147841\":0,\"32768\":3,\"2204"
		"35\":5,\"77935\":4,\"55108\":2,\"169979\":6,\"4573920\":0,\"1359834\":3,\"7692387\":0,\"7053950\":0,\"404281\":5,\"8388608\":1,\"262144\":4,\"46340\":5,\"3234250\":0,\"65536\":5},\"sum\":56027000},\"performance.time.dom_interactive\":{\"values\":{\"696235434\":0,\"585461880\":0,\"17179869184\":1,\"43514714\":0,\"246156398\":0,\"73182735\":1,\"3611622602\":0,\"319225354\":0,\"30769549\":2,\"189812531\":1,\"1170923761\":1,\"134217728\":0,\"379625062\":3,\"21757357\":1,\"225726412\":0,\"112863206\":2,\"4683695047\":0,\"536870912\":0,\"13247490117\":0,\"902905650\":1,\"292730940\":0,\"1655936264\":0,\"8589934592\":0,\"1969251187\":0,\"2784941737\":0,\"638450708\":0,\"2147483648\":0,\"1805811301\":0,\"146365470\":6,\"15754009503\":0,\"827968132\":0,\"2341847523\":0,\"3311872529\":0,\"28215801\":0,\"67108864\":2,\"61539099\":0,\"87029429\":0,\"47453132\":0,\"413984066\":4,\"123078199\":2,\"11139766950\":0,\"25874004\":1,\"4294967296\":0,\"174058858\":3,\"103496016\":7,\"23726566\":1,\"18734780191\":0,\"33554432\""
		":1,\"1518500249\":0,\"348117717\":1,\"268435456\":0,\"56431603\":0,\"7223245205\":0,\"759250124\":0,\"12148001999\":3,\"10215211334\":0,\"1276901416\":0,\"3938502375\":0,\"1392470868\":0,\"7877004751\":0,\"6623745058\":0,\"36591367\":1,\"451452825\":1,\"6074000999\":0,\"5107605667\":0,\"94906265\":1,\"206992033\":1,\"14446490411\":0,\"39903169\":1,\"3037000499\":0,\"1073741824\":0,\"159612677\":2,\"2553802833\":0,\"492312796\":1,\"51748008\":1,\"79806338\":1,\"5569883475\":0,\"9367390095\":0,\"984625593\":0},\"sum\":67094126100},\"performance.time.dom_content_loaded_end\":{\"values\":{\"5107605667\":0,\"1073741824\":0,\"67108864\":0,\"174058858\":3,\"7223245205\":0,\"13247490117\":0,\"6623745058\":0,\"2147483648\":0,\"348117717\":1,\"2784941737\":0,\"638450708\":0,\"6074000999\":0,\"12148001999\":3,\"4294967296\":0,\"1805811301\":0,\"5569883475\":0,\"112863206\":5,\"8589934592\":0,\"3311872529\":0,\"87029429\":0,\"1518500249\":0,\"36591367\":1,\"15754009503\":0,\"123078199\":2,\"134217728\":1,\"984625593\":"
		"0,\"73182735\":1,\"9367390095\":0,\"536870912\":1,\"1170923761\":1,\"11139766950\":0,\"17179869184\":1,\"51748008\":0,\"696235434\":0,\"3611622602\":0,\"79806338\":1,\"4683695047\":0,\"94906265\":0,\"43514714\":1,\"159612677\":2,\"268435456\":0,\"30769549\":2,\"585461880\":0,\"225726412\":0,\"292730940\":0,\"14446490411\":0,\"47453132\":0,\"1276901416\":0,\"206992033\":1,\"1392470868\":0,\"902905650\":1,\"10215211334\":0,\"18734780191\":0,\"492312796\":0,\"319225354\":0,\"3037000499\":0,\"827968132\":0,\"56431603\":0,\"33554432\":2,\"7877004751\":0,\"1655936264\":0,\"61539099\":1,\"146365470\":7,\"379625062\":1,\"246156398\":0,\"39903169\":1,\"2553802833\":0,\"1969251187\":0,\"2341847523\":0,\"451452825\":1,\"103496016\":5,\"759250124\":0,\"3938502375\":0,\"413984066\":6,\"189812531\":2},\"sum\":67580451400},\"performance.time.load_event_start\":{\"values\":{\"225726412\":2,\"451452825\":2,\"1276901416\":0,\"56431603\":0,\"6074000999\":0,\"2147483648\":0,\"73182735\":0,\"20430422668\":0,\"51748008\":0,\"234"
		"1847523\":0,\"492312796\":1,\"17179869184\":1,\"18734780191\":1,\"61539099\":0,\"536870912\":1,\"268435456\":1,\"1073741824\":0,\"902905650\":1,\"134217728\":0,\"159612677\":4,\"2784941737\":0,\"123078199\":1,\"1805811301\":0,\"3938502375\":0,\"696235434\":0,\"94906265\":0,\"9367390095\":0,\"3611622602\":0,\"87029429\":0,\"1969251187\":0,\"174058858\":4,\"1655936264\":0,\"189812531\":2,\"319225354\":0,\"10215211334\":0,\"30769549\":2,\"47453132\":0,\"2553802833\":0,\"8589934592\":0,\"5107605667\":0,\"413984066\":5,\"1392470868\":0,\"5569883475\":0,\"15754009503\":0,\"4683695047\":0,\"246156398\":1,\"585461880\":0,\"6623745058\":0,\"103496016\":4,\"292730940\":0,\"1518500249\":1,\"206992033\":1,\"348117717\":1,\"3311872529\":0,\"4294967296\":0,\"638450708\":0,\"984625593\":0,\"7877004751\":0,\"36591367\":0,\"827968132\":0,\"43514714\":0,\"79806338\":0,\"39903169\":2,\"379625062\":1,\"3037000499\":0,\"14446490411\":0,\"759250124\":0,\"12148001999\":3,\"7223245205\":0,\"11139766950\":0,\"1170923761\":0,\"67108"
		"864\":1,\"13247490117\":0,\"112863206\":2,\"33554432\":2,\"146365470\":7},\"sum\":89383694900},\"javascript.gc.prepare_time\":{\"values\":{\"3234250\":0,\"1143480\":0,\"1246974\":0,\"1923096\":3,\"961548\":173,\"2965820\":0,\"1763487\":0,\"2493948\":0,\"1617125\":0,\"3526975\":0,\"1048576\":0,\"3846193\":1,\"4194304\":0,\"2719669\":0,\"1482910\":0,\"2286960\":0,\"2097152\":0,\"1359834\":0},\"sum\":183000000},\"network.complete_load\":{\"values\":{\"9367390095\":0,\"13247490117\":0,\"696235434\":0,\"103496016\":3,\"7692387\":0,\"20430422668\":0,\"189812531\":1,\"10878678\":0,\"9147841\":0,\"18734780191\":1,\"7053950\":0,\"5569883475\":0,\"61539099\":1,\"492312796\":0,\"14107900\":2,\"10215211334\":0,\"2784941737\":0,\"134217728\":0,\"1073741824\":0,\"23726566\":0,\"1655936264\":0,\"1969251187\":0,\"25874004\":1,\"5931641\":1,\"3611622602\":0,\"47453132\":0,\"36591367\":3,\"30769549\":3,\"3311872529\":0,\"7877004751\":0,\"1518500249\":0,\"4294967296\":0,\"451452825\":0,\"585461880\":0,\"56431603\":3,\"6384507"
		"08\":0,\"73182735\":5,\"21757357\":0,\"6468501\":1,\"11863283\":0,\"159612677\":0,\"984625593\":0,\"51748008\":1,\"536870912\":0,\"12148001999\":3,\"1805811301\":0,\"28215801\":1,\"246156398\":0,\"15754009503\":0,\"9975792\":0,\"759250124\":0,\"15384774\":0,\"348117717\":0,\"12937002\":1,\"2147483648\":0,\"87029429\":5,\"902905650\":0,\"174058858\":1,\"2553802833\":0,\"1170923761\":0,\"319225354\":1,\"827968132\":0,\"7223245205\":0,\"146365470\":0,\"8388608\":0,\"94906265\":5,\"3037000499\":0,\"4683695047\":0,\"11139766950\":0,\"225726412\":0,\"413984066\":0,\"206992033\":0,\"33554432\":2,\"5107605667\":0,\"3938502375\":0,\"379625062\":0,\"123078199\":1,\"19951584\":1,\"268435456\":1,\"14446490411\":0,\"112863206\":2,\"8589934592\":0,\"17179869184\":1,\"6074000999\":0,\"2341847523\":0,\"39903169\":2,\"1276901416\":0,\"292730940\":0,\"79806338\":5,\"18295683\":0,\"1392470868\":0,\"16777216\":0,\"67108864\":1,\"43514714\":5,\"6623745058\":0},\"sum\":79605377400},\"javascript.pageload.parse_time\":{\"values\":"
		"{\"1763487\":0,\"1359834\":0,\"961548\":38,\"1617125\":1,\"1048576\":0,\"1482910\":0,\"1246974\":2,\"1143480\":2},\"sum\":44617500},\"glean.validation.shutdown_wait\":{\"values\":{\"1617125\":0,\"961548\":1,\"1143480\":1,\"1482910\":0,\"1359834\":1,\"1923096\":0,\"1763487\":1,\"1048576\":1,\"1246974\":1},\"sum\":7933200},\"javascript.gc.minor_time\":{\"values\":{\"3444\":0,\"14107900\":1,\"571740\":14,\"16777216\":2,\"2719669\":10,\"92681\":8,\"480774\":14,\"2233\":0,\"11863283\":4,\"4096\":0,\"5311\":0,\"4870\":7,\"961548\":13,\"8933\":10,\"50535\":20,\"27554\":10,\"55108\":11,\"15384774\":0,\"9975792\":2,\"71467\":9,\"3756\":18,\"65536\":17,\"17866\":4,\"2965820\":9,\"2048\":0,\"120193\":14,\"3526975\":10,\"524288\":25,\"1359834\":9,\"25267\":7,\"9147841\":5,\"881743\":16,\"4987896\":18,\"21247\":17,\"169979\":22,\"1617125\":9,\"939\":18,\"2097152\":14,\"1024\":0,\"2655\":0,\"3846193\":12,\"12937002\":1,\"1327\":0,\"11585\":6,\"4573920\":12,\"155871\":21,\"4194304\":16,\"1448\":0,\"679917\":19,\"30048\":9"
		",\"1923096\":8,\"60096\":14,\"38967\":12,\"32768\":8,\"5792\":6,\"5931641\":9,\"10878678\":4,\"2435\":0,\"6316\":0,\"262144\":17,\"13777\":9,\"2493948\":10,\"2286960\":9,\"15024\":5,\"285870\":25,\"7692387\":9,\"1482910\":4,\"1878\":19,\"404281\":23,\"1722\":0,\"19483\":6,\"142935\":20,\"12633\":5,\"5439339\":21,\"370727\":18,\"23170\":5,\"1143480\":12,\"8388608\":4,\"623487\":24,\"2896\":4,\"1763487\":5,\"46340\":12,\"9741\":10,\"311743\":16,\"35733\":9,\"1579\":0,\"808562\":11,\"202140\":25,\"110217\":10,\"1116\":0,\"1217\":0,\"84989\":10,\"240387\":19,\"7512\":18,\"8192\":0,\"16384\":4,\"10623\":9,\"101070\":12,\"1048576\":15,\"4466\":0,\"185363\":23,\"3158\":0,\"77935\":11,\"741455\":15,\"3234250\":12,\"6468501\":4,\"131072\":15,\"18295683\":0,\"6888\":8,\"1246974\":15,\"7053950\":2,\"440871\":17,\"220435\":29,\"42494\":15,\"339958\":23},\"sum\":1349255000},\"network.sub_first_from_cache\":{\"values\":{\"9975792\":0,\"11863283\":0,\"7053950\":0,\"6468501\":0,\"2965820\":1,\"8388608\":0,\"5439339\":1,\"4"
		"987896\":1,\"3846193\":0,\"7692387\":1,\"5931641\":0,\"3234250\":0,\"4573920\":0,\"9147841\":1,\"3526975\":1,\"10878678\":3,\"4194304\":0},\"sum\":67981900},\"javascript.gc.sweep_time\":{\"values\":{\"6468501\":9,\"1482910\":0,\"18295683\":0,\"2965820\":19,\"1359834\":0,\"11863283\":0,\"1763487\":0,\"12937002\":2,\"19951584\":0,\"4573920\":0,\"21757357\":1,\"2493948\":0,\"7053950\":0,\"1143480\":0,\"2097152\":0,\"961548\":66,\"3526975\":0,\"5931641\":7,\"25874004\":0,\"9975792\":5,\"8388608\":0,\"10878678\":1,\"1923096\":39,\"23726566\":1,\"2719669\":0,\"2286960\":0,\"3846193\":11,\"4987896\":15,\"3234250\":0,\"1617125\":0,\"9147841\":0,\"4194304\":0,\"14107900\":0,\"16777216\":0,\"1246974\":0,\"7692387\":1,\"5439339\":0,\"1048576\":0,\"15384774\":0},\"sum\":568000000},\"network.sub_complete_load_cached\":{\"values\":{\"7053950\":0,\"5439339\":2,\"4987896\":0,\"9147841\":0,\"12937002\":2,\"8388608\":0,\"4573920\":2,\"10878678\":2,\"14107900\":0,\"11863283\":1,\"7692387\":0,\"9975792\":0,\"5931641\":0,\"6468"
		"501\":0},\"sum\":82487600},\"network.tcp_connection\":{\"values\":{\"3311872529\":0,\"1392470868\":0,\"2493948\":0,\"7692387\":4,\"319225354\":1,\"827968132\":0,\"3234250\":0,\"2965820\":0,\"492312796\":0,\"2286960\":0,\"1170923761\":0,\"585461880\":0,\"348117717\":0,\"1655936264\":0,\"292730940\":0,\"225726412\":0,\"1923096\":1,\"13247490117\":0,\"11863283\":0,\"12937002\":0,\"1073741824\":0,\"984625593\":0,\"4294967296\":0,\"5107605667\":0,\"61539099\":0,\"16777216\":0,\"4987896\":0,\"21757357\":0,\"2719669\":1,\"15384774\":0,\"7053950\":1,\"759250124\":0,\"51748008\":0,\"146365470\":0,\"246156398\":0,\"1482910\":0,\"3526975\":1,\"2147483648\":0,\"4194304\":2,\"638450708\":0,\"5931641\":2,\"23726566\":0,\"902905650\":0,\"67108864\":0,\"47453132\":0,\"3938502375\":0,\"79806338\":0,\"123078199\":0,\"8388608\":0,\"10878678\":0,\"2341847523\":0,\"1143480\":1,\"451452825\":0,\"10215211334\":0,\"1246974\":0,\"73182735\":0,\"1763487\":0,\"94906265\":0,\"4683695047\":0,\"696235434\":0,\"961548\":4,\"1359834\":0,"
		"\"9147841\":1,\"39903169\":0,\"206992033\":0,\"4573920\":2,\"87029429\":0,\"56431603\":0,\"189812531\":0,\"6074000999\":0,\"103496016\":0,\"3611622602\":0,\"1048576\":0,\"43514714\":0,\"1276901416\":0,\"6623745058\":1,\"413984066\":0,\"1969251187\":0,\"28215801\":0,\"12148001999\":4,\"36591367\":0,\"1518500249\":0,\"1805811301\":0,\"536870912\":0,\"14107900\":0,\"134217728\":0,\"30769549\":0,\"268435456\":0,\"9367390095\":0,\"5439339\":2,\"379625062\":0,\"3846193\":2,\"112863206\":0,\"7877004751\":0,\"9975792\":0,\"5569883475\":0,\"174058858\":0,\"33554432\":0,\"3037000499\":0,\"25874004\":0,\"1617125\":1,\"6468501\":1,\"7223245205\":0,\"11139766950\":0,\"8589934592\":0,\"2784941737\":0,\"2097152\":0,\"2553802833\":0,\"159612677\":0,\"18295683\":0,\"19951584\":0},\"sum\":58542502900},\"networking.dns_failed_lookup_time\":{\"values\":{\"1143480\":3,\"6468501\":1,\"18295683\":1,\"1617125\":0,\"1923096\":0,\"1048576\":5,\"3846193\":4,\"2286960\":3,\"10878678\":3,\"5439339\":0,\"1246974\":0,\"4573920\":1,\"1538"
		"4774\":0,\"2965820\":1,\"11863283\":1,\"5931641\":1,\"1359834\":1,\"3526975\":2,\"16777216\":0,\"2719669\":4,\"9975792\":2,\"4194304\":4,\"2493948\":2,\"7692387\":2,\"961548\":14,\"12937002\":0,\"1482910\":0,\"8388608\":4,\"9147841\":3,\"14107900\":1,\"4987896\":3,\"2097152\":1,\"3234250\":1,\"1763487\":0,\"7053950\":0,\"19951584\":0},\"sum\":313456300},\"networking.dns_renewal_time_for_ttl\":{\"values\":{\"14107900\":1,\"15384774\":13,\"33554432\":4,\"36591367\":0,\"4194304\":5,\"1763487\":1,\"39903169\":0,\"1482910\":2,\"18295683\":26,\"9975792\":12,\"47453132\":1,\"1923096\":1,\"28215801\":10,\"3526975\":1,\"1143480\":1,\"8388608\":5,\"1617125\":0,\"5931641\":5,\"25874004\":6,\"23726566\":7,\"56431603\":0,\"2097152\":6,\"1359834\":0,\"3846193\":1,\"7053950\":12,\"10878678\":15,\"961548\":23,\"4987896\":2,\"2493948\":2,\"1246974\":0,\"21757357\":9,\"19951584\":16,\"9147841\":7,\"1048576\":1,\"2965820\":2,\"2286960\":1,\"7692387\":13,\"12937002\":1,\"16777216\":27,\"30769549\":4,\"51748008\":1,\"43514714\""
		":0,\"2719669\":2,\"4573920\":1,\"5439339\":3,\"11863283\":6,\"3234250\":3,\"6468501\":9},\"sum\":3640137100},\"networking.http_content_ondatafinished_to_onstop_delay\":{\"values\":{\"9147841\":2,\"2286960\":0,\"4573920\":4,\"18295683\":0,\"6468501\":1,\"2719669\":0,\"5439339\":7,\"15384774\":2,\"11863283\":9,\"7692387\":3,\"3234250\":0,\"7053950\":4,\"3526975\":0,\"1763487\":0,\"1143480\":0,\"1246974\":0,\"3846193\":0,\"961548\":83,\"1923096\":1,\"2493948\":0,\"1482910\":0,\"4194304\":2,\"1617125\":0,\"5931641\":3,\"1359834\":0,\"2097152\":0,\"9975792\":7,\"8388608\":7,\"4987896\":1,\"1048576\":1,\"2965820\":0,\"16777216\":3,\"10878678\":5,\"12937002\":3,\"14107900\":4},\"sum\":742425800},\"javascript.pageload.execution_time\":{\"values\":{\"33554432\":1,\"36591367\":0},\"sum\":35506700},\"javascript.gc.compact_time\":{\"values\":{\"7692387\":0,\"12937002\":2,\"2097152\":0,\"4573920\":0,\"1482910\":0,\"3234250\":0,\"961548\":9,\"3526975\":0,\"5931641\":0,\"3846193\":1,\"1143480\":0,\"1048576\":0,\"7053950\""
		":0,\"1246974\":0,\"6468501\":0,\"11863283\":0,\"1923096\":2,\"10878678\":2,\"5439339\":0,\"4987896\":0,\"9975792\":1,\"2493948\":0,\"9147841\":0,\"2286960\":0,\"1763487\":0,\"14107900\":0,\"8388608\":0,\"2719669\":0,\"1359834\":0,\"2965820\":0,\"1617125\":0,\"4194304\":0},\"sum\":75000000},\"network.dns_start\":{\"values\":{\"2719669\":0,\"5439339\":1,\"4987896\":0,\"2286960\":2,\"12937002\":0,\"1923096\":1,\"7692387\":0,\"4573920\":1,\"9975792\":1,\"11863283\":0,\"19951584\":0,\"6468501\":1,\"16777216\":0,\"2493948\":1,\"8388608\":0,\"3234250\":1,\"2965820\":4,\"3526975\":1,\"2097152\":0,\"7053950\":0,\"3846193\":2,\"5931641\":1,\"9147841\":0,\"10878678\":0,\"14107900\":1,\"4194304\":1,\"15384774\":0,\"18295683\":1},\"sum\":108700100},\"networking.http_content_html5parser_ondatafinished_to_onstop_delay\":{\"values\":{\"10878678\":1,\"1482910\":0,\"7053950\":0,\"15384774\":1,\"16777216\":0,\"2719669\":0,\"3846193\":0,\"4194304\":1,\"1246974\":0,\"5931641\":0,\"2286960\":0,\"961548\":1,\"9147841\":0,\"457392"
		"0\":0,\"1143480\":0,\"1763487\":0,\"8388608\":0,\"7692387\":2,\"6468501\":0,\"3526975\":0,\"12937002\":0,\"4987896\":1,\"11863283\":1,\"1359834\":0,\"1048576\":0,\"2965820\":0,\"9975792\":1,\"2493948\":0,\"5439339\":0,\"3234250\":0,\"1923096\":0,\"1617125\":0,\"2097152\":1,\"14107900\":0},\"sum\":77959100},\"ocsp_request_time.cancel\":{\"values\":{\"2147483648\":11,\"2341847523\":0,\"1969251187\":51},\"sum\":127942015400},\"networking.cache_metadata_second_read_time\":{\"values\":{\"2493948\":0,\"8388608\":1,\"7053950\":0,\"5931641\":0,\"2965820\":0,\"3526975\":0,\"12937002\":0,\"4987896\":0,\"3234250\":0,\"1359834\":0,\"10878678\":1,\"5439339\":0,\"2286960\":0,\"11863283\":1,\"4573920\":0,\"1143480\":0,\"3846193\":0,\"1246974\":0,\"1048576\":0,\"2719669\":0,\"1763487\":0,\"9147841\":1,\"1923096\":0,\"1617125\":0,\"7692387\":0,\"2097152\":0,\"6468501\":0,\"9975792\":0,\"4194304\":0,\"1482910\":0,\"961548\":28},\"sum\":69920300},\"networking.http_content_cssloader_ondatafinished_to_onstop_delay\":{\"values\""
		":{\"961548\":2,\"1048576\":0},\"sum\":2000000},\"ls.preparedatastore.processing_time\":{\"values\":{\"370727\":0,\"142935\":4,\"28215801\":0,\"123078199\":0,\"679917\":0,\"1048576\":1,\"5439339\":0,\"19951584\":0,\"7053950\":0,\"268435456\":1,\"9147841\":0,\"319225354\":0,\"134217728\":0,\"3526975\":0,\"4573920\":0,\"202140\":3,\"2493948\":0,\"11863283\":0,\"2097152\":0,\"585461880\":0,\"808562\":0,\"5931641\":0,\"440871\":0,\"12937002\":0,\"2719669\":0,\"84989\":3,\"571740\":0,\"348117717\":0,\"2286960\":0,\"1617125\":1,\"1246974\":1,\"536870912\":1,\"101070\":6,\"246156398\":0,\"961548\":1,\"23726566\":0,\"4194304\":0,\"480774\":0,\"413984066\":0,\"174058858\":0,\"1923096\":0,\"881743\":0,\"9975792\":0,\"159612677\":0,\"71467\":1,\"155871\":6,\"220435\":2,\"1763487\":0,\"33554432\":0,\"92681\":2,\"36591367\":0,\"43514714\":0,\"67108864\":0,\"77935\":1,\"94906265\":0,\"146365470\":0,\"623487\":0,\"311743\":0,\"21757357\":0,\"18295683\":0,\"51748008\":0,\"10878678\":0,\"120193\":9,\"1482910\":1,\"4987896\":"
		"0,\"1143480\":0,\"79806338\":0,\"7692387\":0,\"524288\":0,\"15384774\":0,\"25874004\":0,\"1359834\":0,\"451452825\":0,\"103496016\":0,\"3846193\":0,\"47453132\":0,\"492312796\":0,\"110217\":6,\"206992033\":0,\"131072\":8,\"87029429\":0,\"61539099\":0,\"262144\":0,\"404281\":0,\"112863206\":0,\"292730940\":0,\"56431603\":0,\"285870\":0,\"339958\":3,\"14107900\":0,\"73182735\":0,\"169979\":5,\"8388608\":0,\"30769549\":0,\"185363\":4,\"2965820\":0,\"3234250\":0,\"189812531\":0,\"741455\":0,\"240387\":1,\"39903169\":0,\"225726412\":0,\"379625062\":0,\"6468501\":0,\"16777216\":0},\"sum\":866939000},\"performance.pageload.load_time_responsestart\":{\"values\":{\"413984066\":0,\"225726412\":0,\"492312796\":1,\"902905650\":0,\"319225354\":0,\"696235434\":0,\"379625062\":0,\"246156398\":0,\"585461880\":0,\"827968132\":1,\"759250124\":0,\"292730940\":0,\"536870912\":0,\"348117717\":2,\"206992033\":1,\"451452825\":0,\"638450708\":0,\"268435456\":0},\"sum\":2354493800},\"wr.framebuild_time\":{\"values\":{\"524288\":128"
		",\"3846193\":0,\"4194304\":2,\"1923096\":0,\"185363\":832,\"311743\":307,\"1617125\":3,\"32768\":12,\"65536\":36,\"623487\":69,\"3234250\":0,\"92681\":116,\"2286960\":0,\"440871\":234,\"1143480\":6,\"741455\":25,\"2493948\":0,\"202140\":1011,\"1359834\":4,\"240387\":622,\"1048576\":10,\"4573920\":0,\"881743\":8,\"55108\":9,\"220435\":763,\"42494\":6,\"77935\":158,\"679917\":28,\"101070\":175,\"1763487\":1,\"262144\":545,\"27554\":10,\"84989\":109,\"50535\":5,\"30048\":8,\"339958\":328,\"169979\":762,\"155871\":952,\"370727\":888,\"480774\":147,\"131072\":558,\"71467\":122,\"38967\":15,\"142935\":823,\"110217\":444,\"23170\":4,\"808562\":23,\"25267\":8,\"35733\":21,\"46340\":6,\"1482910\":0,\"2719669\":0,\"2097152\":2,\"404281\":453,\"1246974\":2,\"961548\":14,\"60096\":12,\"285870\":451,\"3526975\":2,\"571740\":67,\"2965820\":0,\"120193\":508},\"sum\":2888632600},\"gfx.composite_time\":{\"values\":{\"28215801\":1,\"39903169\":0,\"2097152\":358,\"2493948\":182,\"16777216\":3,\"25874004\":0,\"1617125\":545,\""
		"51748008\":1,\"61539099\":1,\"79806338\":0,\"1246974\":382,\"18295683\":0,\"4987896\":98,\"112863206\":1,\"292730940\":0,\"4194304\":164,\"2965820\":176,\"206992033\":0,\"21757357\":2,\"33554432\":0,\"2286960\":257,\"11863283\":4,\"189812531\":0,\"30769549\":0,\"1048576\":208,\"1763487\":598,\"1359834\":598,\"9975792\":2,\"268435456\":2,\"1143480\":381,\"123078199\":1,\"19951584\":0,\"7053950\":6,\"8388608\":8,\"146365470\":0,\"134217728\":0,\"6468501\":24,\"10878678\":0,\"43514714\":0,\"159612677\":0,\"103496016\":1,\"47453132\":1,\"3234250\":133,\"94906265\":3,\"174058858\":0,\"246156398\":2,\"67108864\":1,\"1923096\":507,\"14107900\":5,\"5439339\":231,\"5931641\":55,\"3526975\":279,\"2719669\":176,\"961548\":13430,\"3846193\":803,\"7692387\":6,\"12937002\":2,\"9147841\":8,\"225726412\":0,\"1482910\":689,\"23726566\":2,\"56431603\":2,\"4573920\":92,\"87029429\":1,\"73182735\":1,\"15384774\":3,\"36591367\":1},\"sum\":33619081000},\"network.http_revalidation\":{\"values\":{\"10878678\":0,\"8388608\":0,\"118"
		"63283\":0,\"9147841\":0,\"14107900\":0,\"12937002\":1,\"7692387\":0,\"7053950\":2,\"9975792\":1},\"sum\":40019900},\"networking.cache_metadata_first_read_time\":{\"values\":{\"2719669\":0,\"4987896\":0,\"1923096\":0,\"5439339\":0,\"3846193\":0,\"7053950\":0,\"1246974\":0,\"8388608\":0,\"11863283\":0,\"961548\":62,\"2286960\":0,\"3526975\":0,\"2493948\":0,\"2965820\":0,\"1617125\":0,\"1143480\":0,\"9975792\":0,\"5931641\":0,\"1763487\":0,\"3234250\":0,\"1359834\":0,\"2097152\":0,\"7692387\":1,\"1482910\":0,\"9147841\":1,\"10878678\":3,\"1048576\":0,\"4194304\":0,\"4573920\":0,\"6468501\":0},\"sum\":113057200},\"networking.http_content_ondatafinished_delay\":{\"values\":{\"5439339\":0,\"189812531\":0,\"1143480\":2,\"39903169\":0,\"5931641\":2,\"12937002\":0,\"28215801\":0,\"36591367\":0,\"61539099\":0,\"961548\":112,\"1246974\":2,\"21757357\":0,\"87029429\":0,\"67108864\":0,\"9975792\":0,\"16777216\":1,\"7053950\":0,\"4573920\":1,\"1359834\":0,\"3526975\":0,\"123078199\":0,\"51748008\":0,\"14107900\":0,\"4745"
		"3132\":0,\"2493948\":1,\"1482910\":1,\"2965820\":1,\"23726566\":0,\"1923096\":2,\"103496016\":0,\"1763487\":2,\"1617125\":3,\"159612677\":0,\"112863206\":0,\"56431603\":0,\"3234250\":0,\"9147841\":0,\"18295683\":0,\"19951584\":0,\"8388608\":0,\"2719669\":1,\"1048576\":2,\"2097152\":0,\"6468501\":0,\"10878678\":0,\"3846193\":1,\"25874004\":0,\"2286960\":0,\"15384774\":0,\"94906265\":0,\"43514714\":0,\"4987896\":1,\"73182735\":0,\"33554432\":0,\"174058858\":5,\"30769549\":0,\"4194304\":1,\"7692387\":1,\"79806338\":10,\"146365470\":0,\"11863283\":0,\"134217728\":0},\"sum\":1946797900},\"networking.http_onstart_suspend_total_time\":{\"values\":{\"14107900\":14,\"4987896\":0,\"134217728\":0,\"3234250\":0,\"61539099\":0,\"51748008\":0,\"123078199\":1,\"961548\":496,\"87029429\":0,\"2097152\":0,\"1763487\":0,\"1617125\":0,\"15384774\":27,\"28215801\":0,\"16777216\":0,\"47453132\":0,\"33554432\":0,\"9975792\":0,\"3526975\":0,\"1048576\":0,\"12937002\":0,\"4573920\":0,\"7692387\":0,\"4194304\":0,\"43514714\":6,\"914"
		"7841\":0,\"2719669\":0,\"25874004\":0,\"23726566\":0,\"1359834\":0,\"2493948\":0,\"3846193\":0,\"67108864\":0,\"56431603\":0,\"79806338\":0,\"21757357\":0,\"1923096\":0,\"36591367\":0,\"10878678\":0,\"5931641\":0,\"103496016\":2,\"30769549\":5,\"1482910\":0,\"1143480\":0,\"2286960\":0,\"73182735\":2,\"112863206\":0,\"11863283\":0,\"18295683\":0,\"7053950\":0,\"8388608\":0,\"1246974\":0,\"5439339\":0,\"94906265\":0,\"6468501\":0,\"19951584\":0,\"2965820\":0,\"39903169\":0},\"sum\":2074000000},\"network.complete_load_net\":{\"values\":{\"15754009503\":0,\"902905650\":0,\"36591367\":3,\"112863206\":2,\"984625593\":0,\"2784941737\":0,\"1969251187\":0,\"11139766950\":0,\"206992033\":0,\"10215211334\":0,\"16777216\":0,\"9367390095\":0,\"61539099\":1,\"3037000499\":0,\"2553802833\":0,\"696235434\":0,\"5107605667\":0,\"379625062\":0,\"103496016\":3,\"2147483648\":0,\"56431603\":3,\"638450708\":0,\"492312796\":0,\"51748008\":1,\"292730940\":0,\"23726566\":0,\"18295683\":0,\"1073741824\":0,\"451452825\":0,\"28215801"
		"\":0,\"15384774\":0,\"94906265\":5,\"17179869184\":1,\"174058858\":1,\"39903169\":2,\"14446490411\":0,\"3311872529\":0,\"3611622602\":0,\"1518500249\":0,\"30769549\":2,\"225726412\":0,\"413984066\":0,\"25874004\":1,\"348117717\":0,\"6623745058\":0,\"33554432\":0,\"159612677\":0,\"43514714\":4,\"246156398\":0,\"1170923761\":0,\"585461880\":0,\"79806338\":4,\"8589934592\":0,\"4683695047\":0,\"6074000999\":0,\"1655936264\":0,\"189812531\":1,\"13247490117\":0,\"134217728\":0,\"827968132\":0,\"4294967296\":0,\"47453132\":0,\"1392470868\":0,\"7877004751\":0,\"319225354\":1,\"87029429\":5,\"5569883475\":0,\"759250124\":0,\"20430422668\":0,\"18734780191\":1,\"1805811301\":0,\"67108864\":1,\"7223245205\":0,\"19951584\":0,\"536870912\":0,\"123078199\":1,\"2341847523\":0,\"1276901416\":0,\"73182735\":5,\"14107900\":1,\"3938502375\":0,\"268435456\":1,\"21757357\":0,\"146365470\":0,\"12148001999\":3},\"sum\":79285522400},\"search.service.startup_time\":{\"values\":{\"146365470\":0,\"225726412\":0,\"174058858\":0,\"20699"
		"2033\":0,\"292730940\":0,\"246156398\":0,\"189812531\":1,\"159612677\":0,\"134217728\":4,\"268435456\":1},\"sum\":1047300000},\"performance.pageload.load_time\":{\"values\":{\"10215211334\":0,\"5569883475\":0,\"1518500249\":1,\"7223245205\":0,\"11139766950\":0,\"18734780191\":0,\"3037000499\":0,\"9367390095\":0,\"6074000999\":0,\"1969251187\":0,\"3938502375\":0,\"2147483648\":0,\"1655936264\":0,\"2553802833\":0,\"7877004751\":0,\"17179869184\":1,\"12148001999\":3,\"8589934592\":0,\"15754009503\":0,\"6623745058\":0,\"3311872529\":0,\"13247490117\":0,\"14446490411\":0,\"4294967296\":0,\"5107605667\":0,\"4683695047\":0,\"1805811301\":0,\"2784941737\":0,\"3611622602\":0,\"2341847523\":0},\"sum\":59211480100},\"wr.rasterize_glyphs_time\":{\"values\":{\"679917\":1,\"8192\":10,\"84989\":5,\"65536\":7,\"240387\":5,\"1448\":332,\"3444\":124,\"4870\":35,\"1359834\":0,\"1116\":339,\"1024\":380,\"2896\":467,\"311743\":0,\"60096\":4,\"50535\":4,\"3756\":66,\"1923096\":0,\"524288\":0,\"10623\":4,\"1878\":377,\"21247\":5,"
		"\"1327\":316,\"1143480\":2,\"110217\":7,\"35733\":8,\"185363\":3,\"4466\":55,\"7512\":7,\"1617125\":0,\"92681\":3,\"19483\":4,\"1482910\":0,\"12633\":5,\"3234250\":0,\"142935\":5,\"2965820\":0,\"77935\":3,\"15024\":4,\"220435\":2,\"5792\":25,\"46340\":4,\"2286960\":0,\"1048576\":2,\"339958\":2,\"961548\":1,\"25267\":1,\"13777\":1,\"1246974\":0,\"262144\":0,\"131072\":4,\"3526975\":1,\"1722\":230,\"741455\":1,\"5311\":23,\"155871\":1,\"32768\":4,\"480774\":2,\"2719669\":1,\"42494\":5,\"939\":1699,\"27554\":2,\"11585\":6,\"120193\":5,\"2097152\":0,\"38967\":8,\"571740\":2,\"1579\":534,\"55108\":2,\"16384\":5,\"881743\":1,\"440871\":1,\"2493948\":0,\"404281\":1,\"6316\":20,\"623487\":0,\"285870\":2,\"2655\":482,\"30048\":9,\"3158\":233,\"71467\":3,\"2435\":625,\"6888\":9,\"808562\":1,\"4096\":70,\"1217\":296,\"3846193\":0,\"202140\":4,\"370727\":3,\"169979\":7,\"9741\":5,\"1763487\":0,\"23170\":4,\"2233\":384,\"8933\":7,\"2048\":364,\"101070\":11,\"17866\":2},\"sum\":48652400},\"extensions.timing.storage_local"
		"_set_idb\":{\"values\":{\"14107900\":7,\"10878678\":1,\"159612677\":0,\"15384774\":22,\"2493948\":0,\"292730940\":0,\"12937002\":3,\"1923096\":1,\"73182735\":0,\"18295683\":0,\"4194304\":0,\"33554432\":0,\"2097152\":1,\"1048576\":1,\"348117717\":0,\"3234250\":0,\"268435456\":0,\"103496016\":1,\"536870912\":1,\"19951584\":0,\"39903169\":0,\"585461880\":0,\"2719669\":1,\"1617125\":0,\"7692387\":1,\"492312796\":0,\"123078199\":0,\"2965820\":0,\"246156398\":0,\"28215801\":3,\"3846193\":0,\"206992033\":0,\"961548\":1,\"3526975\":0,\"47453132\":0,\"1482910\":3,\"51748008\":0,\"5931641\":1,\"225726412\":0,\"413984066\":0,\"79806338\":0,\"2286960\":0,\"189812531\":0,\"1143480\":0,\"319225354\":0,\"379625062\":0,\"67108864\":0,\"30769549\":0,\"9975792\":0,\"21757357\":0,\"25874004\":5,\"56431603\":0,\"61539099\":0,\"1763487\":1,\"174058858\":1,\"23726566\":1,\"16777216\":14,\"7053950\":1,\"1359834\":0,\"9147841\":1,\"4987896\":1,\"146365470\":0,\"11863283\":1,\"1246974\":3,\"43514714\":0,\"6468501\":1,\"87029429\":0"
		",\"5439339\":1,\"94906265\":0,\"134217728\":0,\"4573920\":0,\"451452825\":0,\"112863206\":0,\"8388608\":2,\"36591367\":0},\"sum\":1968079900},\"wr.time_to_frame_build\":{\"values\":{\"2286960\":0,\"1359834\":0,\"13777\":5,\"32768\":101,\"1048576\":0,\"10623\":1,\"30048\":99,\"60096\":456,\"623487\":1,\"480774\":3,\"23170\":81,\"12633\":6,\"65536\":549,\"220435\":35,\"35733\":125,\"808562\":0,\"155871\":157,\"169979\":352,\"2493948\":0,\"6316\":1,\"2097152\":0,\"42494\":293,\"961548\":0,\"679917\":0,\"38967\":183,\"77935\":505,\"571740\":1,\"524288\":1,\"9741\":3,\"142935\":132,\"50535\":475,\"19483\":46,\"101070\":223,\"2965820\":0,\"8192\":0,\"1143480\":0,\"311743\":9,\"741455\":1,\"8933\":0,\"285870\":10,\"110217\":152,\"370727\":0,\"3846193\":0,\"92681\":257,\"1617125\":0,\"185363\":828,\"15024\":15,\"27554\":101,\"17866\":29,\"262144\":28,\"1923096\":0,\"1246974\":0,\"120193\":162,\"3234250\":0,\"3526975\":0,\"1482910\":1,\"240387\":48,\"404281\":2,\"84989\":453,\"16384\":17,\"1763487\":0,\"46340\":368,"
		"\"6888\":1,\"71467\":593,\"2719669\":0,\"131072\":148,\"55108\":403,\"4573920\":0,\"881743\":1,\"4194304\":1,\"339958\":7,\"21247\":46,\"7512\":1,\"202140\":87,\"440871\":3,\"25267\":92,\"11585\":6},\"sum\":740868500},\"network.sub_first_sent_to_last_received\":{\"values\":{\"94906265\":0,\"18295683\":4,\"134217728\":1,\"206992033\":0,\"56431603\":2,\"189812531\":0,\"159612677\":3,\"5439339\":1,\"9975792\":0,\"9147841\":1,\"7692387\":0,\"14107900\":3,\"7053950\":0,\"3846193\":0,\"112863206\":0,\"3526975\":0,\"8388608\":0,\"4573920\":0,\"268435456\":0,\"39903169\":3,\"73182735\":4,\"30769549\":0,\"174058858\":2,\"5931641\":2,\"16777216\":1,\"21757357\":1,\"28215801\":2,\"87029429\":1,\"33554432\":1,\"36591367\":2,\"146365470\":3,\"11863283\":0,\"79806338\":1,\"2719669\":0,\"51748008\":1,\"2965820\":0,\"3234250\":0,\"103496016\":0,\"4194304\":1,\"12937002\":0,\"246156398\":2,\"4987896\":2,\"2286960\":1,\"25874004\":1,\"15384774\":1,\"23726566\":1,\"2493948\":1,\"225726412\":4,\"67108864\":1,\"43514714\":0,\"4"
		"7453132\":1,\"123078199\":0,\"61539099\":0,\"10878678\":0,\"19951584\":0,\"6468501\":0},\"sum\":4240771300},\"networking.http_channel_sub_open_to_first_sent\":{\"values\":{\"14107900\":0,\"2493948\":0,\"2097152\":0,\"9975792\":0,\"9147841\":0,\"1617125\":1,\"10878678\":0,\"47453132\":1,\"56431603\":0,\"1763487\":0,\"4573920\":0,\"348117717\":0,\"146365470\":0,\"7692387\":0,\"18295683\":0,\"67108864\":0,\"21757357\":0,\"159612677\":0,\"2719669\":0,\"3526975\":0,\"16777216\":0,\"73182735\":0,\"15384774\":0,\"39903169\":2,\"103496016\":1,\"6468501\":0,\"413984066\":0,\"7053950\":0,\"8388608\":0,\"5931641\":0,\"379625062\":1,\"246156398\":0,\"19951584\":0,\"123078199\":0,\"33554432\":0,\"174058858\":0,\"12937002\":1,\"4987896\":0,\"87029429\":0,\"61539099\":0,\"5439339\":0,\"25874004\":5,\"36591367\":0,\"23726566\":2,\"189812531\":2,\"79806338\":0,\"268435456\":0,\"30769549\":0,\"4194304\":0,\"51748008\":0,\"43514714\":3,\"2286960\":1,\"134217728\":0,\"292730940\":0,\"28215801\":2,\"2965820\":0,\"11863283\":0,"
		"\"94906265\":0,\"3846193\":0,\"319225354\":0,\"3234250\":0,\"225726412\":0,\"112863206\":0,\"206992033\":0,\"1923096\":0},\"sum\":1414385700},\"wr.time_to_render_start\":{\"values\":{\"1048576\":24,\"169979\":498,\"189812531\":0,\"9975792\":2,\"19951584\":0,\"1878\":0,\"285870\":3329,\"2233\":0,\"524288\":158,\"146365470\":0,\"155871\":485,\"8933\":0,\"35733\":9,\"101070\":702,\"4466\":0,\"16777216\":0,\"43514714\":0,\"2965820\":2,\"92681\":594,\"3158\":0,\"4096\":0,\"571740\":129,\"1923096\":1,\"30769549\":0,\"14107900\":1,\"5931641\":3,\"7512\":0,\"1617125\":5,\"185363\":541,\"19483\":1,\"1579\":0,\"120193\":659,\"10623\":0,\"16384\":0,\"39903169\":0,\"112863206\":1,\"480774\":152,\"311743\":1460,\"5311\":0,\"370727\":452,\"3234250\":2,\"131072\":533,\"28215801\":0,\"174058858\":0,\"206992033\":1,\"1448\":0,\"939\":19,\"159612677\":0,\"94906265\":1,\"5439339\":1,\"33554432\":0,\"404281\":313,\"12937002\":0,\"1143480\":17,\"87029429\":1,\"9147841\":0,\"7053950\":1,\"6468501\":1,\"1217\":0,\"11585\":0,\"243"
		"5\":0,\"3444\":0,\"7692387\":1,\"8192\":0,\"27554\":0,\"623487\":319,\"38967\":38,\"110217\":583,\"12633\":0,\"4194304\":3,\"23726566\":1,\"1763487\":2,\"3756\":0,\"440871\":208,\"123078199\":0,\"32768\":2,\"1482910\":7,\"13777\":0,\"15024\":0,\"246156398\":0,\"46340\":43,\"8388608\":0,\"134217728\":0,\"30048\":1,\"71467\":434,\"142935\":414,\"50535\":61,\"1024\":0,\"6316\":0,\"240387\":1295,\"79806338\":0,\"339958\":629,\"2286960\":2,\"881743\":44,\"1722\":0,\"61539099\":0,\"2896\":0,\"17866\":0,\"741455\":360,\"56431603\":1,\"1246974\":7,\"18295683\":0,\"21247\":0,\"51748008\":0,\"55108\":84,\"679917\":895,\"21757357\":0,\"808562\":92,\"5792\":0,\"65536\":269,\"3846193\":0,\"4987896\":0,\"4573920\":0,\"60096\":194,\"9741\":0,\"1359834\":7,\"23170\":0,\"25267\":0,\"6888\":0,\"36591367\":1,\"42494\":21,\"262144\":1851,\"2719669\":1,\"2048\":0,\"1116\":0,\"225726412\":1,\"2655\":0,\"15384774\":0,\"961548\":31,\"1327\":0,\"220435\":837,\"2097152\":3,\"47453132\":2,\"2493948\":3,\"84989\":482,\"3526975\":2,\"2"
		"02140\":657,\"11863283\":0,\"73182735\":0,\"10878678\":1,\"4870\":0,\"67108864\":1,\"103496016\":0,\"77935\":449,\"25874004\":0},\"sum\":6891854300},\"network.first_sent_to_last_received\":{\"values\":{\"134217728\":2,\"123078199\":0,\"189812531\":0,\"67108864\":6,\"16777216\":2,\"18295683\":0,\"47453132\":2,\"56431603\":6,\"39903169\":3,\"159612677\":0,\"73182735\":3,\"30769549\":0,\"25874004\":0,\"23726566\":0,\"12937002\":1,\"28215801\":0,\"4573920\":0,\"33554432\":4,\"14107900\":2,\"87029429\":0,\"174058858\":1,\"51748008\":2,\"19951584\":0,\"36591367\":5,\"112863206\":0,\"6468501\":0,\"103496016\":0,\"4194304\":0,\"4987896\":0,\"94906265\":1,\"61539099\":3,\"7692387\":0,\"3846193\":0,\"7053950\":2,\"21757357\":0,\"146365470\":0,\"9975792\":1,\"3234250\":1,\"15384774\":1,\"5439339\":0,\"10878678\":0,\"5931641\":0,\"8388608\":0,\"11863283\":2,\"9147841\":1,\"3526975\":0,\"79806338\":4,\"43514714\":2},\"sum\":2994205100},\"performance.page.non_blank_paint\":{\"values\":{\"413984066\":0,\"12148001999\":3,"
		"\"15754009503\":0,\"18734780191\":0,\"1655936264\":0,\"174058858\":2,\"638450708\":0,\"112863206\":0,\"73182735\":0,\"268435456\":1,\"1518500249\":0,\"3611622602\":0,\"2553802833\":0,\"5569883475\":0,\"14446490411\":0,\"189812531\":0,\"103496016\":0,\"536870912\":0,\"2341847523\":0,\"4683695047\":0,\"146365470\":0,\"827968132\":0,\"61539099\":0,\"11139766950\":0,\"67108864\":0,\"225726412\":1,\"1969251187\":0,\"159612677\":2,\"2147483648\":0,\"3037000499\":0,\"1392470868\":0,\"94906265\":0,\"292730940\":0,\"51748008\":0,\"319225354\":0,\"6074000999\":0,\"206992033\":0,\"43514714\":1,\"379625062\":0,\"10215211334\":0,\"246156398\":0,\"9367390095\":0,\"47453132\":0,\"13247490117\":0,\"585461880\":0,\"759250124\":0,\"1073741824\":0,\"696235434\":0,\"6623745058\":0,\"87029429\":1,\"2784941737\":0,\"123078199\":0,\"17179869184\":1,\"8589934592\":0,\"1170923761\":1,\"7877004751\":0,\"56431603\":0,\"1276901416\":0,\"1805811301\":0,\"5107605667\":0,\"492312796\":0,\"451452825\":0,\"348117717\":0,\"984625593\":0,\"3"
		"938502375\":0,\"79806338\":1,\"4294967296\":0,\"134217728\":0,\"3311872529\":0,\"902905650\":0,\"7223245205\":0},\"sum\":59096045300},\"wr.renderer_time\":{\"values\":{\"28215801\":0,\"142935\":75,\"94906265\":1,\"39903169\":0,\"5931641\":3,\"65536\":3,\"15384774\":0,\"5439339\":3,\"404281\":10,\"4573920\":6,\"51748008\":0,\"87029429\":1,\"43514714\":0,\"120193\":75,\"246156398\":2,\"679917\":314,\"220435\":17,\"285870\":25,\"6468501\":2,\"225726412\":0,\"103496016\":0,\"46340\":3,\"30769549\":0,\"370727\":11,\"77935\":6,\"3846193\":7,\"67108864\":1,\"524288\":62,\"7053950\":2,\"2097152\":787,\"2719669\":154,\"73182735\":0,\"1048576\":452,\"1246974\":364,\"14107900\":1,\"33554432\":0,\"9975792\":1,\"60096\":2,\"311743\":18,\"202140\":21,\"55108\":3,\"25874004\":0,\"623487\":402,\"808562\":551,\"961548\":446,\"2965820\":210,\"134217728\":0,\"2493948\":83,\"3234250\":80,\"480774\":68,\"169979\":44,\"12937002\":0,\"206992033\":0,\"3526975\":23,\"19951584\":1,\"23726566\":0,\"1617125\":205,\"146365470\":0,\"114"
		"3480\":425,\"159612677\":0,\"741455\":397,\"61539099\":0,\"174058858\":0,\"56431603\":1,\"440871\":68,\"7692387\":0,\"16777216\":0,\"4194304\":3,\"131072\":64,\"92681\":63,\"1482910\":208,\"339958\":11,\"110217\":85,\"8388608\":0,\"1923096\":271,\"84989\":13,\"11863283\":1,\"112863206\":0,\"47453132\":0,\"1763487\":153,\"21757357\":0,\"4987896\":5,\"71467\":4,\"155871\":51,\"2286960\":204,\"262144\":17,\"79806338\":0,\"189812531\":0,\"50535\":2,\"10878678\":1,\"9147841\":0,\"881743\":584,\"571740\":218,\"268435456\":0,\"1359834\":240,\"123078199\":1,\"18295683\":1,\"185363\":23,\"240387\":21,\"36591367\":0,\"101070\":81},\"sum\":10984449000},\"network.complete_load_cached\":{\"values\":{\"56431603\":0,\"73182735\":0,\"79806338\":1,\"9975792\":0,\"47453132\":0,\"87029429\":0,\"28215801\":1,\"39903169\":0,\"21757357\":0,\"11863283\":0,\"8388608\":0,\"25874004\":0,\"5931641\":1,\"30769549\":1,\"19951584\":1,\"14107900\":1,\"6468501\":1,\"33554432\":2,\"7053950\":0,\"51748008\":0,\"23726566\":0,\"9147841\":0,\""
		"43514714\":1,\"12937002\":1,\"7692387\":0,\"10878678\":0,\"16777216\":0,\"15384774\":0,\"61539099\":0,\"67108864\":0,\"36591367\":0,\"18295683\":0},\"sum\":319855000},\"extensions.timing.content_script_injection\":{\"values\":{\"2286960\":0,\"1617125\":0,\"9147841\":1,\"1923096\":0,\"7692387\":2,\"3846193\":5,\"12937002\":1,\"5931641\":2,\"14107900\":1,\"2493948\":8,\"1143480\":0,\"2719669\":7,\"3526975\":4,\"15384774\":0,\"6468501\":2,\"961548\":128,\"9975792\":1,\"1482910\":0,\"5439339\":5,\"4573920\":7,\"2965820\":7,\"2097152\":0,\"10878678\":0,\"1763487\":0,\"4194304\":0,\"1048576\":0,\"1359834\":0,\"11863283\":1,\"1246974\":0,\"4987896\":4,\"3234250\":3,\"8388608\":0,\"7053950\":3},\"sum\":443989500},\"network.sub_dns_end\":{\"values\":{\"2965820\":0,\"3234250\":1,\"2097152\":0,\"1617125\":0,\"3526975\":0,\"1482910\":0,\"2493948\":0,\"2286960\":1,\"1143480\":0,\"1048576\":0,\"2719669\":0,\"1359834\":0,\"1923096\":0,\"1246974\":0,\"961548\":5,\"1763487\":0},\"sum\":10774500},\"network.sub_open_to_first_"
		"received\":{\"values\":{\"11863283\":0,\"9147841\":1,\"7692387\":0,\"30769549\":1,\"79806338\":5,\"9975792\":0,\"14107900\":0,\"123078199\":2,\"189812531\":2,\"225726412\":0,\"103496016\":2,\"8388608\":1,\"19951584\":0,\"28215801\":1,\"61539099\":1,\"451452825\":1,\"7053950\":2,\"51748008\":2,\"43514714\":1,\"36591367\":2,\"12937002\":0,\"112863206\":3,\"18295683\":0,\"16777216\":0,\"206992033\":0,\"246156398\":2,\"21757357\":1,\"15384774\":0,\"348117717\":0,\"94906265\":1,\"56431603\":2,\"174058858\":1,\"25874004\":0,\"268435456\":0,\"87029429\":3,\"67108864\":0,\"379625062\":0,\"146365470\":0,\"292730940\":0,\"134217728\":0,\"39903169\":0,\"319225354\":0,\"73182735\":4,\"10878678\":0,\"47453132\":4,\"492312796\":0,\"23726566\":0,\"413984066\":0,\"33554432\":0,\"159612677\":10},\"sum\":5877825600},\"performance.interaction.keypress_present_latency\":{\"values\":{\"8388608\":1,\"4194304\":1,\"4573920\":0,\"30769549\":1,\"9975792\":1,\"15384774\":5,\"10878678\":1,\"5439339\":1,\"19951584\":4,\"25874004\":5,"
		"\"28215801\":2,\"12937002\":3,\"11863283\":3,\"7692387\":2,\"6468501\":2,\"9147841\":0,\"5931641\":0,\"14107900\":2,\"16777216\":5,\"23726566\":3,\"7053950\":1,\"21757357\":5,\"33554432\":1,\"36591367\":0,\"18295683\":8,\"4987896\":0},\"sum\":1035878700},\"network.sub_complete_load_net\":{\"values\":{\"225726412\":0,\"292730940\":0,\"14107900\":0,\"33554432\":0,\"492312796\":0,\"123078199\":2,\"87029429\":1,\"319225354\":0,\"189812531\":3,\"15384774\":0,\"174058858\":3,\"536870912\":1,\"23726566\":0,\"67108864\":1,\"30769549\":1,\"51748008\":2,\"268435456\":4,\"10878678\":0,\"73182735\":2,\"61539099\":1,\"9975792\":1,\"9147841\":0,\"79806338\":6,\"11863283\":0,\"7053950\":2,\"8388608\":1,\"159612677\":0,\"47453132\":3,\"7692387\":0,\"246156398\":4,\"16777216\":0,\"379625062\":0,\"36591367\":1,\"21757357\":0,\"348117717\":0,\"413984066\":0,\"25874004\":0,\"94906265\":4,\"19951584\":0,\"103496016\":2,\"28215801\":2,\"146365470\":0,\"585461880\":0,\"18295683\":0,\"134217728\":0,\"112863206\":2,\"56431603\":2,"
		"\"12937002\":0,\"451452825\":0,\"206992033\":2,\"43514714\":1,\"39903169\":1},\"sum\":6877665200},\"extensions.timing.background_page_load\":{\"values\":{\"536870912\":6,\"1073741824\":1,\"902905650\":1,\"585461880\":8,\"492312796\":4,\"759250124\":3,\"1170923761\":0,\"827968132\":1,\"984625593\":1,\"638450708\":3,\"696235434\":3},\"sum\":20863182300},\"performance.pageload.fcp\":{\"values\":{\"1276901416\":0,\"1170923761\":1},\"sum\":1228839800},\"network.sub_complete_load\":{\"values\":{\"348117717\":0,\"413984066\":0,\"159612677\":0,\"61539099\":1,\"112863206\":2,\"585461880\":0,\"268435456\":4,\"30769549\":1,\"492312796\":0,\"79806338\":6,\"189812531\":3,\"103496016\":2,\"19951584\":0,\"7053950\":2,\"28215801\":2,\"8388608\":1,\"21757357\":0,\"4987896\":0,\"12937002\":2,\"379625062\":0,\"16777216\":0,\"6468501\":0,\"146365470\":0,\"5439339\":2,\"23726566\":0,\"51748008\":2,\"73182735\":2,\"33554432\":0,\"536870912\":1,\"292730940\":0,\"10878678\":2,\"134217728\":0,\"123078199\":2,\"67108864\":1,\"141079"
		"00\":0,\"11863283\":1,\"246156398\":4,\"9975792\":1,\"18295683\":0,\"7692387\":0,\"9147841\":0,\"225726412\":0,\"451452825\":0,\"39903169\":1,\"43514714\":1,\"87029429\":1,\"94906265\":4,\"4573920\":2,\"47453132\":3,\"5931641\":0,\"174058858\":3,\"56431603\":2,\"36591367\":1,\"15384774\":0,\"206992033\":2,\"319225354\":0,\"25874004\":0},\"sum\":6960152800},\"performance.pageload.fcp_responsestart\":{\"values\":{\"492312796\":1,\"536870912\":0},\"sum\":512300300},\"performance.time.dom_complete\":{\"values\":{\"36591367\":0,\"3037000499\":0,\"8589934592\":0,\"1805811301\":0,\"4683695047\":0,\"73182735\":0,\"1276901416\":0,\"10215211334\":0,\"12148001999\":3,\"4294967296\":0,\"246156398\":1,\"87029429\":0,\"61539099\":0,\"3311872529\":0,\"1969251187\":0,\"47453132\":0,\"7223245205\":0,\"189812531\":2,\"3938502375\":0,\"18734780191\":1,\"2553802833\":0,\"1655936264\":0,\"94906265\":0,\"33554432\":2,\"206992033\":1,\"159612677\":4,\"39903169\":2,\"2147483648\":0,\"13247490117\":0,\"348117717\":1,\"984625593\":0"
		",\"225726412\":2,\"30769549\":2,\"20430422668\":0,\"696235434\":0,\"174058858\":4,\"6623745058\":0,\"638450708\":0,\"2341847523\":0,\"1392470868\":0,\"292730940\":0,\"5569883475\":0,\"827968132\":0,\"43514714\":0,\"56431603\":0,\"112863206\":2,\"3611622602\":0,\"17179869184\":1,\"5107605667\":0,\"759250124\":0,\"7877004751\":0,\"1518500249\":1,\"536870912\":1,\"1170923761\":0,\"79806338\":0,\"585461880\":0,\"51748008\":0,\"451452825\":2,\"11139766950\":0,\"268435456\":1,\"103496016\":4,\"146365470\":7,\"492312796\":1,\"15754009503\":0,\"902905650\":1,\"9367390095\":0,\"67108864\":1,\"1073741824\":0,\"2784941737\":0,\"6074000999\":0,\"123078199\":1,\"413984066\":5,\"319225354\":0,\"379625062\":1,\"134217728\":0,\"14446490411\":0},\"sum\":89383305900},\"gfx.content.paint_time\":{\"values\":{\"2097152\":2,\"6468501\":0,\"1763487\":1,\"5931641\":1,\"5439339\":1,\"2965820\":1,\"1143480\":1,\"961548\":897,\"2493948\":1,\"4573920\":0,\"1617125\":6,\"1923096\":6,\"3234250\":0,\"1246974\":3,\"1482910\":7,\"2719669\""
		":3,\"3526975\":2,\"2286960\":0,\"3846193\":0,\"4987896\":1,\"1359834\":4,\"4194304\":0,\"1048576\":1},\"sum\":986318400},\"performance.time.dom_content_loaded_start\":{\"values\":{\"36591367\":2,\"87029429\":1,\"94906265\":2,\"4294967296\":0,\"268435456\":0,\"206992033\":1,\"159612677\":2,\"79806338\":1,\"348117717\":1,\"146365470\":7,\"292730940\":0,\"2553802833\":0,\"451452825\":1,\"33554432\":0,\"536870912\":1,\"7877004751\":0,\"3037000499\":0,\"759250124\":0,\"18734780191\":0,\"134217728\":0,\"123078199\":1,\"585461880\":0,\"3611622602\":0,\"1518500249\":0,\"47453132\":0,\"6623745058\":0,\"6074000999\":0,\"984625593\":0,\"17179869184\":1,\"13247490117\":0,\"67108864\":0,\"73182735\":2,\"51748008\":0,\"25874004\":1,\"61539099\":0,\"103496016\":5,\"1969251187\":0,\"902905650\":1,\"8589934592\":0,\"11139766950\":0,\"319225354\":0,\"2784941737\":0,\"7223245205\":0,\"112863206\":3,\"492312796\":0,\"28215801\":1,\"30769549\":2,\"1805811301\":0,\"39903169\":1,\"14446490411\":0,\"5107605667\":0,\"638450708\":0,"
		"\"4683695047\":0,\"174058858\":3,\"1073741824\":0,\"3938502375\":0,\"413984066\":6,\"10215211334\":0,\"225726412\":0,\"379625062\":1,\"246156398\":0,\"1655936264\":0,\"696235434\":0,\"2341847523\":0,\"23726566\":1,\"56431603\":0,\"43514714\":0,\"2147483648\":0,\"1170923761\":1,\"827968132\":0,\"1392470868\":0,\"3311872529\":0,\"15754009503\":0,\"9367390095\":0,\"5569883475\":0,\"12148001999\":3,\"1276901416\":0,\"189812531\":2},\"sum\":67378259300},\"performance.time.load_event_end\":{\"values\":{\"6074000999\":0,\"112863206\":2,\"103496016\":4,\"47453132\":0,\"1969251187\":0,\"492312796\":1,\"134217728\":0,\"5107605667\":0,\"73182735\":0,\"413984066\":5,\"67108864\":1,\"61539099\":0,\"1392470868\":0,\"379625062\":1,\"225726412\":2,\"14446490411\":0,\"43514714\":0,\"15754009503\":0,\"7877004751\":0,\"206992033\":1,\"292730940\":0,\"20430422668\":0,\"39903169\":2,\"4294967296\":0,\"51748008\":0,\"827968132\":0,\"7223245205\":0,\"3037000499\":0,\"1805811301\":0,\"3311872529\":0,\"12148001999\":3,\"3938502375"
		"\":0,\"174058858\":4,\"87029429\":0,\"146365470\":7,\"30769549\":2,\"6623745058\":0,\"4683695047\":0,\"123078199\":1,\"56431603\":0,\"9367390095\":0,\"348117717\":1,\"246156398\":1,\"17179869184\":1,\"3611622602\":0,\"13247490117\":0,\"984625593\":0,\"36591367\":0,\"2784941737\":0,\"1073741824\":0,\"902905650\":1,\"536870912\":1,\"189812531\":2,\"696235434\":0,\"159612677\":4,\"10215211334\":0,\"1655936264\":0,\"2147483648\":0,\"1170923761\":0,\"94906265\":0,\"451452825\":2,\"5569883475\":0,\"1518500249\":1,\"759250124\":0,\"2341847523\":0,\"268435456\":1,\"8589934592\":0,\"11139766950\":0,\"2553802833\":0,\"319225354\":0,\"18734780191\":1,\"638450708\":0,\"1276901416\":0,\"33554432\":2,\"585461880\":0,\"79806338\":0},\"sum\":89389650900},\"networking.sqlite_cookies_time_to_block_main_thread\":{\"values\":{\"638450708\":2,\"696235434\":0,\"1392470868\":1,\"585461880\":1,\"984625593\":0,\"1073741824\":0,\"902905650\":0,\"1170923761\":0,\"1276901416\":0,\"1518500249\":0,\"827968132\":1,\"759250124\":1},\"sum"
		"\":5029560300},\"glean.database.write_time\":{\"values\":{\"4194304\":1,\"2493948\":9,\"1143480\":133,\"4987896\":2,\"1359834\":104,\"5439339\":0,\"881743\":104,\"741455\":31,\"3234250\":1,\"1246974\":125,\"2719669\":13,\"961548\":93,\"2286960\":19,\"2965820\":11,\"1482910\":61,\"3526975\":4,\"3846193\":1,\"679917\":13,\"1617125\":41,\"4573920\":2,\"1763487\":40,\"808562\":91,\"1923096\":37,\"1048576\":113,\"2097152\":25},\"sum\":1444521000},\"network.dns_end\":{\"values\":{\"36591367\":0,\"961548\":15,\"11863283\":1,\"6468501\":0,\"79806338\":0,\"1482910\":2,\"3234250\":0,\"4573920\":2,\"28215801\":0,\"8388608\":0,\"15384774\":1,\"33554432\":0,\"47453132\":0,\"1246974\":0,\"2286960\":1,\"1143480\":0,\"5931641\":0,\"5439339\":0,\"73182735\":2,\"39903169\":0,\"1048576\":0,\"2965820\":0,\"2719669\":1,\"4194304\":1,\"2097152\":0,\"16777216\":0,\"10878678\":0,\"2493948\":0,\"18295683\":0,\"7053950\":0,\"30769549\":1,\"23726566\":1,\"19951584\":0,\"61539099\":0,\"21757357\":1,\"1763487\":0,\"3846193\":0,\"769238"
		"7\":0,\"12937002\":0,\"67108864\":0,\"1359834\":3,\"4987896\":0,\"9975792\":0,\"43514714\":0,\"3526975\":0,\"56431603\":0,\"9147841\":0,\"1923096\":0,\"51748008\":0,\"1617125\":0,\"14107900\":0,\"25874004\":0},\"sum\":303265800},\"network.open_to_first_received\":{\"values\":{\"20430422668\":0,\"146365470\":0,\"638450708\":0,\"4683695047\":0,\"4294967296\":0,\"451452825\":0,\"17179869184\":1,\"3611622602\":0,\"585461880\":0,\"536870912\":0,\"79806338\":4,\"1073741824\":0,\"2553802833\":0,\"134217728\":0,\"9367390095\":0,\"5107605667\":0,\"112863206\":2,\"696235434\":0,\"18295683\":0,\"225726412\":0,\"159612677\":0,\"23726566\":1,\"47453132\":0,\"7877004751\":0,\"902905650\":0,\"5569883475\":0,\"492312796\":0,\"2341847523\":0,\"1518500249\":0,\"13247490117\":0,\"28215801\":2,\"10215211334\":0,\"67108864\":3,\"12148001999\":3,\"39903169\":3,\"246156398\":0,\"14107900\":1,\"6623745058\":0,\"36591367\":2,\"3311872529\":0,\"61539099\":2,\"2784941737\":0,\"189812531\":0,\"8589934592\":0,\"16777216\":0,\"393850237"
		"5\":0,\"348117717\":0,\"14446490411\":0,\"174058858\":2,\"19951584\":0,\"56431603\":3,\"33554432\":1,\"18734780191\":1,\"2147483648\":0,\"1805811301\":0,\"268435456\":1,\"43514714\":3,\"103496016\":3,\"1170923761\":0,\"25874004\":0,\"206992033\":0,\"379625062\":0,\"1392470868\":0,\"1655936264\":0,\"759250124\":0,\"7223245205\":0,\"15384774\":0,\"15754009503\":0,\"319225354\":1,\"21757357\":0,\"11139766950\":0,\"1276901416\":0,\"30769549\":0,\"292730940\":0,\"94906265\":4,\"984625593\":0,\"1969251187\":0,\"6074000999\":0,\"123078199\":0,\"87029429\":5,\"73182735\":4,\"3037000499\":0,\"413984066\":0,\"827968132\":0,\"51748008\":1},\"sum\":79148835300},\"wr.renderer_time_no_sc\":{\"values\":{\"220435\":17,\"60096\":2,\"46340\":3,\"480774\":68,\"55108\":3,\"92681\":63,\"440871\":68,\"77935\":6,\"623487\":402,\"131072\":64,\"571740\":218,\"2097152\":787,\"169979\":44,\"2286960\":204,\"7053950\":1,\"120193\":75,\"524288\":62,\"65536\":3,\"1482910\":207,\"1246974\":363,\"1048576\":452,\"5931641\":1,\"2493948\":80,"
		"\"240387\":21,\"3526975\":20,\"370727\":11,\"1143480\":425,\"285870\":25,\"961548\":446,\"311743\":18,\"5439339\":2,\"3234250\":80,\"4194304\":3,\"142935\":75,\"7692387\":0,\"1359834\":239,\"741455\":397,\"1617125\":205,\"101070\":81,\"339958\":11,\"155871\":51,\"6468501\":2,\"262144\":17,\"110217\":85,\"3846193\":7,\"1923096\":271,\"4987896\":3,\"71467\":4,\"4573920\":4,\"2965820\":208,\"404281\":10,\"50535\":2,\"1763487\":152,\"808562\":551,\"202140\":21,\"679917\":314,\"2719669\":152,\"84989\":13,\"185363\":23,\"881743\":584},\"sum\":9858439000},\"glean.upload.send_success\":{\"values\":{\"1392470868\":0,\"4683695047\":0,\"6074000999\":1,\"319225354\":1,\"984625593\":0,\"2553802833\":0,\"585461880\":0,\"348117717\":0,\"1655936264\":0,\"638450708\":1,\"1073741824\":0,\"4294967296\":0,\"1518500249\":0,\"292730940\":12,\"5569883475\":0,\"3037000499\":0,\"246156398\":6,\"413984066\":0,\"6623745058\":0,\"759250124\":0,\"1170923761\":1,\"696235434\":0,\"3938502375\":0,\"3611622602\":0,\"1969251187\":0,\"510760"
		"5667\":0,\"3311872529\":0,\"536870912\":0,\"2147483648\":0,\"1276901416\":0,\"902905650\":0,\"7223245205\":0,\"2341847523\":0,\"1805811301\":0,\"7877004751\":0,\"8589934592\":0,\"827968132\":1,\"492312796\":0,\"9367390095\":2,\"10215211334\":0,\"379625062\":0,\"225726412\":5,\"268435456\":16,\"451452825\":0,\"2784941737\":0},\"sum\":39740952200},\"network.sub_tcp_connection\":{\"values\":{\"1143480\":0,\"112863206\":0,\"39903169\":0,\"268435456\":0,\"19951584\":0,\"18295683\":0,\"6468501\":0,\"87029429\":0,\"12937002\":0,\"319225354\":0,\"15384774\":1,\"43514714\":0,\"292730940\":1,\"2097152\":0,\"134217728\":0,\"16777216\":0,\"47453132\":0,\"1246974\":0,\"21757357\":0,\"9975792\":0,\"206992033\":0,\"5931641\":0,\"73182735\":0,\"30769549\":0,\"67108864\":0,\"7053950\":0,\"4987896\":1,\"94906265\":0,\"1763487\":0,\"174058858\":0,\"23726566\":0,\"103496016\":0,\"56431603\":0,\"14107900\":0,\"1617125\":0,\"11863283\":0,\"961548\":2,\"246156398\":0,\"51748008\":0,\"25874004\":0,\"159612677\":0,\"4573920\":0,\"1"
		"46365470\":0,\"10878678\":0,\"2493948\":0,\"3846193\":0,\"1048576\":0,\"79806338\":0,\"2719669\":0,\"36591367\":0,\"28215801\":0,\"1359834\":0,\"123078199\":0,\"2965820\":1,\"9147841\":0,\"33554432\":0,\"4194304\":0,\"2286960\":0,\"5439339\":0,\"189812531\":0,\"3526975\":0,\"1923096\":0,\"8388608\":0,\"3234250\":0,\"1482910\":0,\"61539099\":0,\"7692387\":1,\"225726412\":0},\"sum\":337506200},\"extensions.timing.extension_startup\":{\"values\":{\"638450708\":0,\"189812531\":4,\"492312796\":0,\"268435456\":10,\"759250124\":0,\"536870912\":0,\"379625062\":0,\"984625593\":0,\"696235434\":0,\"206992033\":11,\"159612677\":0,\"585461880\":0,\"134217728\":5,\"246156398\":5,\"292730940\":1,\"348117717\":0,\"174058858\":0,\"413984066\":0,\"451452825\":0,\"319225354\":0,\"225726412\":18,\"146365470\":5,\"902905650\":4,\"827968132\":1},\"sum\":17863758300},\"network.cache_hit_time\":{\"values\":{\"1923096\":0,\"1617125\":0,\"2097152\":1,\"2286960\":0,\"1763487\":0,\"961548\":52,\"1246974\":1,\"1048576\":0,\"1143480\":0"
		",\"1482910\":1,\"1359834\":1},\"sum\":58507700},\"javascript.gc.total_time\":{\"values\":{\"4987896\":13,\"23726566\":11,\"1923096\":8,\"12937002\":9,\"43514714\":0,\"1143480\":0,\"15384774\":2,\"2286960\":0,\"1359834\":0,\"18295683\":1,\"6468501\":6,\"961548\":11,\"39903169\":2,\"4194304\":0,\"14107900\":2,\"3234250\":0,\"21757357\":9,\"11863283\":7,\"36591367\":2,\"9975792\":8,\"1763487\":0,\"7692387\":5,\"2965820\":19,\"16777216\":3,\"1617125\":0,\"19951584\":6,\"25874004\":11,\"5931641\":14,\"28215801\":3,\"4573920\":0,\"1048576\":0,\"1482910\":0,\"7053950\":0,\"2097152\":0,\"33554432\":0,\"3526975\":0,\"9147841\":0,\"3846193\":13,\"2493948\":0,\"30769549\":1,\"5439339\":0,\"10878678\":8,\"2719669\":0,\"8388608\":3,\"1246974\":0},\"sum\":2076000000},\"javascript.gc.mark_time\":{\"values\":{\"2286960\":0,\"3234250\":0,\"3526975\":0,\"4194304\":0,\"16777216\":8,\"21757357\":4,\"11863283\":2,\"1923096\":24,\"15384774\":6,\"8388608\":9,\"4987896\":6,\"2097152\":0,\"5439339\":0,\"1246974\":0,\"28215801\":1,"
		"\"2493948\":0,\"6468501\":9,\"1482910\":0,\"1048576\":0,\"4573920\":0,\"2719669\":0,\"1143480\":0,\"25874004\":1,\"23726566\":4,\"9147841\":0,\"10878678\":3,\"9975792\":11,\"5931641\":2,\"961548\":44,\"1617125\":0,\"2965820\":13,\"30769549\":0,\"19951584\":4,\"7692387\":11,\"12937002\":3,\"1359834\":0,\"3846193\":6,\"14107900\":2,\"1763487\":0,\"7053950\":0,\"18295683\":4},\"sum\":1306000000},\"networking.http_content_onstop_delay\":{\"values\":{\"7053950\":3,\"10878678\":4,\"67108864\":0,\"9975792\":4,\"6468501\":1,\"9147841\":5,\"159612677\":0,\"1617125\":2,\"43514714\":0,\"36591367\":0,\"12937002\":9,\"28215801\":0,\"4573920\":5,\"79806338\":9,\"1246974\":1,\"3234250\":0,\"33554432\":0,\"3526975\":0,\"94906265\":1,\"18295683\":1,\"1923096\":0,\"1482910\":0,\"19951584\":1,\"2097152\":0,\"1143480\":1,\"16777216\":2,\"21757357\":0,\"4194304\":1,\"5439339\":4,\"134217728\":0,\"47453132\":0,\"30769549\":0,\"189812531\":2,\"146365470\":0,\"206992033\":0,\"4987896\":4,\"961548\":62,\"112863206\":0,\"14107900\":"
		"7,\"25874004\":0,\"2493948\":0,\"87029429\":0,\"15384774\":1,\"51748008\":0,\"56431603\":0,\"1763487\":0,\"7692387\":5,\"3846193\":0,\"5931641\":6,\"61539099\":0,\"1359834\":0,\"123078199\":0,\"73182735\":0,\"2965820\":0,\"174058858\":3,\"1048576\":0,\"8388608\":2,\"23726566\":0,\"39903169\":0,\"2719669\":0,\"2286960\":1,\"103496016\":0,\"11863283\":5},\"sum\":2575906800},\"paint.build_displaylist_time\":{\"values\":{\"38967\":27,\"404281\":221,\"169979\":98,\"19483\":23,\"285870\":298,\"13777\":4,\"55108\":18,\"1923096\":0,\"16384\":17,\"15024\":16,\"2286960\":1,\"202140\":173,\"240387\":359,\"741455\":39,\"1246974\":13,\"3846193\":0,\"10623\":12,\"9741\":5,\"27554\":16,\"311743\":401,\"92681\":65,\"3526975\":1,\"32768\":9,\"1617125\":3,\"808562\":32,\"881743\":30,\"155871\":111,\"220435\":361,\"3234250\":0,\"110217\":48,\"50535\":13,\"1763487\":1,\"23170\":17,\"84989\":61,\"71467\":29,\"1482910\":5,\"185363\":134,\"262144\":374,\"12633\":9,\"1048576\":21,\"2493948\":2,\"46340\":10,\"65536\":12,\"11585\":1"
		"3,\"679917\":44,\"339958\":375,\"2097152\":1,\"370727\":283,\"1359834\":5,\"25267\":10,\"120193\":92,\"142935\":119,\"524288\":109,\"2719669\":0,\"101070\":62,\"42494\":12,\"21247\":23,\"60096\":14,\"2965820\":1,\"1143480\":11,\"17866\":26,\"77935\":47,\"440871\":209,\"623487\":59,\"35733\":30,\"30048\":16,\"961548\":29,\"131072\":111,\"480774\":168,\"571740\":92},\"sum\":1583417500},\"gfx.content.full_paint_time\":{\"values\":{\"1246974\":26,\"36591367\":0,\"961548\":572,\"4573920\":0,\"7692387\":0,\"1359834\":22,\"1143480\":41,\"19951584\":0,\"21757357\":0,\"15384774\":2,\"33554432\":0,\"9147841\":0,\"2965820\":4,\"43514714\":0,\"3846193\":4,\"39903169\":0,\"3234250\":2,\"1482910\":31,\"2286960\":3,\"5439339\":2,\"18295683\":0,\"4987896\":0,\"25874004\":0,\"23726566\":0,\"4194304\":2,\"5931641\":1,\"12937002\":0,\"16777216\":0,\"1763487\":17,\"51748008\":0,\"7053950\":0,\"10878678\":1,\"2719669\":7,\"28215801\":0,\"1923096\":3,\"47453132\":1,\"6468501\":0,\"1617125\":24,\"2097152\":4,\"1048576\":40,\"3076"
		"9549\":0,\"3526975\":0,\"14107900\":0,\"9975792\":0,\"11863283\":0,\"8388608\":0,\"2493948\":8},\"sum\":1064908000},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"1143480\":0,\"2493948\":0,\"961548\":1,\"1617125\":1,\"1482910\":0,\"1763487\":0,\"2286960\":1,\"1246974\":0,\"1359834\":2,\"2097152\":0,\"1048576\":1,\"1923096\":0},\"sum\":8884900},\"network.font_download_end\":{\"values\":{\"1170923761\":1,\"1276901416\":2,\"1392470868\":0},\"sum\":3832279000},\"performance.time.response_start\":{\"values\":{\"759250124\":0,\"696235434\":1},\"sum\":717000000},\"network.first_from_cache\":{\"values\":{\"25874004\":0,\"23726566\":0,\"4194304\":0,\"16777216\":0,\"61539099\":0,\"10878678\":1,\"79806338\":0,\"15384774\":1,\"28215801\":0,\"7692387\":1,\"9147841\":0,\"12937002\":1,\"39903169\":1,\"6468501\":0,\"51748008\":0,\"19951584\":0,\"67108864\":0,\"21757357\":0,\"43514714\":0,\"5439339\":0,\"7053950\":0,\"4987896\":0,\"9975792\":0,\"33554432\":1,\"5931641\":0,\"30769549\":1,\"14107900\":0,\"731827"
		"35\":1,\"11863283\":0,\"3846193\":2,\"8388608\":0,\"56431603\":0,\"36591367\":0,\"18295683\":0,\"47453132\":0,\"4573920\":1},\"sum\":247542700},\"networking.transaction_wait_time\":{\"values\":{\"413984066\":3,\"31508019006\":0,\"268435456\":6,\"51748008\":3,\"3938502375\":0,\"585461880\":7,\"28892980822\":0,\"37469560382\":0,\"759250124\":2,\"1482910\":1,\"3234250\":0,\"6623745058\":0,\"1392470868\":5,\"6074000999\":6,\"47453132\":0,\"18295683\":1,\"6468501\":0,\"7877004751\":0,\"19951584\":0,\"2719669\":1,\"536870912\":5,\"28215801\":1,\"1655936264\":1,\"22279533901\":0,\"123078199\":4,\"7223245205\":0,\"2147483648\":1,\"3037000499\":5,\"14107900\":1,\"9975792\":1,\"1969251187\":0,\"36591367\":0,\"13247490117\":1,\"4194304\":0,\"20430422668\":0,\"26494980234\":0,\"44559067803\":0,\"902905650\":4,\"4987896\":0,\"12148001999\":1,\"17179869184\":0,\"5107605667\":29,\"52989960469\":0,\"40860845336\":0,\"159612677\":4,\"1805811301\":0,\"225726412\":3,\"1170923761\":3,\"984625593\":2,\"67108864\":5,\"4573920\":"
		"2,\"961548\":331,\"5569883475\":0,\"24296003999\":0,\"11863283\":3,\"8388608\":5,\"74939120765\":0,\"3846193\":1,\"2097152\":1,\"189812531\":3,\"30769549\":0,\"451452825\":4,\"2286960\":1,\"7692387\":9,\"11139766950\":0,\"73182735\":1,\"87029429\":4,\"2965820\":0,\"10878678\":1,\"5439339\":0,\"34359738368\":0,\"9367390095\":0,\"39903169\":4,\"56431603\":8,\"16777216\":1,\"4294967296\":0,\"1617125\":1,\"2493948\":0,\"348117717\":2,\"23726566\":0,\"3526975\":0,\"112863206\":13,\"2341847523\":1,\"146365470\":5,\"8589934592\":0,\"319225354\":4,\"7053950\":8,\"1923096\":1,\"292730940\":2,\"12937002\":0,\"1143480\":1,\"9147841\":1,\"94906265\":2,\"48592007999\":0,\"79806338\":5,\"246156398\":4,\"103496016\":2,\"81721690673\":1,\"5931641\":0,\"61539099\":3,\"1073741824\":3,\"63016038013\":0,\"14446490411\":0,\"1359834\":0,\"206992033\":0,\"1276901416\":0,\"696235434\":7,\"15384774\":0,\"15754009503\":3,\"379625062\":5,\"21757357\":0,\"33554432\":2,\"492312796\":4,\"2553802833\":1,\"25874004\":0,\"10215211334\":1,"
		"\"3311872529\":0,\"1246974\":0,\"1048576\":0,\"174058858\":1,\"89118135606\":0,\"2784941737\":3,\"827968132\":3,\"1518500249\":3,\"3611622602\":1,\"638450708\":3,\"1763487\":2,\"18734780191\":0,\"43514714\":0,\"57785961645\":0,\"134217728\":0,\"68719476736\":0,\"4683695047\":4},\"sum\":478818071100},\"wr.rasterize_blobs_time\":{\"values\":{\"13777\":0,\"202140\":3,\"1327\":0,\"2048\":0,\"92681\":1,\"440871\":0,\"311743\":0,\"155871\":2,\"9741\":0,\"370727\":0,\"3158\":0,\"1722\":0,\"404281\":1,\"131072\":3,\"2233\":0,\"4870\":2,\"939\":664,\"8192\":0,\"35733\":4,\"55108\":0,\"120193\":2,\"5792\":1,\"16384\":0,\"32768\":4,\"7512\":0,\"1024\":0,\"60096\":0,\"8933\":0,\"15024\":0,\"11585\":0,\"220435\":0,\"42494\":1,\"3756\":9,\"142935\":3,\"38967\":4,\"2435\":0,\"262144\":1,\"1878\":56,\"2655\":0,\"1448\":0,\"71467\":3,\"10623\":0,\"25267\":10,\"101070\":2,\"1116\":0,\"23170\":2,\"1217\":0,\"110217\":4,\"27554\":3,\"84989\":7,\"6316\":0,\"50535\":0,\"3444\":0,\"4466\":0,\"2896\":59,\"169979\":1,\"339958\":0,"
		"\"21247\":2,\"4096\":0,\"5311\":0,\"6888\":0,\"65536\":1,\"19483\":2,\"12633\":0,\"17866\":0,\"30048\":0,\"240387\":1,\"77935\":4,\"46340\":0,\"285870\":0,\"185363\":1,\"1579\":0},\"sum\":7385000},\"networking.http_content_onstart_delay\":{\"values\":{\"8388608\":1,\"36591367\":0,\"33554432\":0,\"19951584\":0,\"174058858\":3,\"94906265\":0,\"28215801\":0,\"11863283\":0,\"7053950\":0,\"47453132\":0,\"146365470\":0,\"67108864\":0,\"4987896\":1,\"10878678\":0,\"103496016\":0,\"16777216\":1,\"5931641\":2,\"9147841\":0,\"43514714\":0,\"1246974\":0,\"7692387\":0,\"2097152\":0,\"1482910\":0,\"12937002\":0,\"1048576\":0,\"123078199\":0,\"159612677\":0,\"14107900\":0,\"4573920\":0,\"5439339\":1,\"1359834\":1,\"39903169\":0,\"4194304\":1,\"18295683\":0,\"79806338\":10,\"30769549\":0,\"3526975\":0,\"2493948\":0,\"2719669\":0,\"3846193\":1,\"189812531\":0,\"73182735\":0,\"961548\":128,\"1923096\":1,\"51748008\":0,\"1143480\":1,\"21757357\":0,\"23726566\":0,\"2286960\":0,\"15384774\":0,\"3234250\":0,\"1763487\":0,\"1617"
		"125\":0,\"6468501\":0,\"61539099\":0,\"56431603\":0,\"25874004\":0,\"134217728\":0,\"87029429\":0,\"9975792\":0,\"2965820\":0,\"112863206\":0},\"sum\":1569816100},\"wr.scenebuild_time\":{\"values\":{\"1722\":0,\"7512\":0,\"21247\":0,\"13777\":0,\"3444\":0,\"5311\":0,\"50535\":0,\"8933\":0,\"60096\":0,\"1116\":0,\"92681\":0,\"8192\":0,\"2233\":0,\"311743\":0,\"480774\":0,\"110217\":0,\"2896\":0,\"30048\":0,\"524288\":0,\"65536\":0,\"202140\":0,\"370727\":0,\"71467\":0,\"17866\":0,\"262144\":0,\"571740\":0,\"10623\":0,\"1048576\":0,\"3158\":0,\"77935\":0,\"4870\":0,\"1217\":0,\"155871\":0,\"185363\":0,\"169979\":0,\"38967\":0,\"961548\":8,\"46340\":0,\"11585\":0,\"2655\":0,\"6888\":0,\"2048\":0,\"19483\":0,\"84989\":0,\"1448\":0,\"9741\":0,\"4466\":0,\"142935\":0,\"1878\":0,\"25267\":0,\"220435\":0,\"741455\":0,\"285870\":0,\"6316\":0,\"881743\":0,\"939\":4407,\"679917\":0,\"404281\":0,\"27554\":0,\"32768\":0,\"1024\":0,\"440871\":0,\"23170\":0,\"15024\":0,\"55108\":0,\"16384\":0,\"131072\":0,\"240387\":0,\"8"
		"08562\":0,\"35733\":0,\"4096\":0,\"1327\":0,\"5792\":0,\"623487\":0,\"42494\":0,\"3756\":0,\"12633\":0,\"2435\":0,\"120193\":0,\"101070\":0,\"339958\":0,\"1579\":0},\"sum\":12407000},\"wr.sceneswap_time\":{\"values\":{\"23170\":4,\"84989\":241,\"5931641\":0,\"101070\":396,\"480774\":1,\"155871\":54,\"27554\":28,\"1763487\":0,\"220435\":49,\"131072\":62,\"120193\":96,\"1617125\":0,\"71467\":414,\"571740\":0,\"65536\":195,\"339958\":4,\"55108\":156,\"262144\":12,\"881743\":1,\"185363\":50,\"240387\":33,\"3234250\":0,\"1359834\":0,\"6468501\":0,\"2493948\":1,\"60096\":173,\"961548\":0,\"808562\":1,\"25267\":4,\"142935\":55,\"46340\":254,\"202140\":44,\"8388608\":0,\"2286960\":0,\"5439339\":0,\"524288\":1,\"1482910\":0,\"623487\":1,\"285870\":5,\"169979\":40,\"110217\":156,\"38967\":342,\"311743\":4,\"440871\":3,\"3526975\":0,\"4194304\":0,\"92681\":236,\"2719669\":0,\"679917\":0,\"1048576\":0,\"1246974\":0,\"3846193\":0,\"4987896\":0,\"42494\":369,\"35733\":227,\"30048\":66,\"7692387\":1,\"1143480\":0,\"32768"
		"\":141,\"77935\":318,\"2965820\":0,\"741455\":0,\"1923096\":0,\"7053950\":0,\"370727\":4,\"2097152\":1,\"404281\":3,\"4573920\":0,\"50535\":169},\"sum\":372627600},\"wr.texture_cache_update_time\":{\"values\":{\"1246974\":2,\"15024\":1,\"2233\":0,\"339958\":2,\"6888\":6,\"3158\":0,\"17866\":1,\"1116\":0,\"25267\":3,\"1024\":0,\"262144\":5,\"5439339\":0,\"1448\":0,\"4987896\":0,\"240387\":7,\"11585\":1,\"32768\":3,\"7053950\":0,\"1143480\":2,\"8933\":3,\"65536\":2,\"5311\":0,\"3444\":0,\"881743\":2,\"3846193\":0,\"38967\":3,\"8192\":0,\"1722\":0,\"4573920\":1,\"16384\":0,\"4096\":0,\"524288\":3,\"60096\":0,\"55108\":2,\"84989\":6,\"5931641\":0,\"30048\":1,\"185363\":13,\"808562\":3,\"101070\":26,\"741455\":5,\"1579\":0,\"1923096\":1,\"2719669\":0,\"1217\":0,\"3526975\":0,\"2965820\":0,\"1327\":0,\"7692387\":1,\"23170\":1,\"961548\":2,\"77935\":5,\"2493948\":0,\"2097152\":0,\"202140\":15,\"120193\":24,\"679917\":2,\"220435\":10,\"27554\":4,\"92681\":18,\"13777\":1,\"939\":5123,\"2048\":0,\"8388608\":0,\"1878"
		"\":1810,\"2435\":0,\"50535\":4,\"1763487\":1,\"35733\":3,\"480774\":5,\"9741\":1,\"3234250\":0,\"155871\":25,\"2286960\":1,\"19483\":1,\"311743\":4,\"6468501\":0,\"21247\":1,\"110217\":28,\"440871\":5,\"46340\":5,\"1359834\":5,\"4870\":17,\"623487\":3,\"5792\":9,\"404281\":4,\"10623\":1,\"42494\":2,\"7512\":3,\"4466\":0,\"2655\":0,\"1482910\":2,\"1048576\":3,\"169979\":6,\"1617125\":1,\"6316\":0,\"370727\":2,\"142935\":28,\"4194304\":0,\"3756\":46,\"71467\":1,\"571740\":4,\"2896\":389,\"131072\":26,\"285870\":4,\"12633\":1},\"sum\":114949000},\"javascript.pageload.baseline_compile_time\":{\"values\":{\"961548\":1,\"1048576\":0},\"sum\":1000000},\"network.sub_cache_read_time\":{\"values\":{\"1763487\":1,\"1246974\":0,\"2965820\":1,\"1143480\":1,\"1359834\":1,\"1482910\":0,\"2286960\":1,\"1617125\":0,\"2097152\":1,\"1923096\":1,\"2493948\":0,\"1048576\":0,\"3234250\":0,\"2719669\":0,\"961548\":2},\"sum\":16147200},\"networking.http_content_ondatafinished_delay_2\":{\"values\":{\"3846193\":1,\"3526975\":0,\"87"
		"029429\":0,\"2286960\":0,\"11863283\":0,\"16777216\":1,\"8388608\":0,\"2493948\":1,\"33554432\":0,\"4573920\":1,\"79806338\":1,\"9975792\":0,\"1359834\":0,\"1482910\":1,\"961548\":96,\"7053950\":0,\"123078199\":0,\"5439339\":0,\"9147841\":0,\"1246974\":2,\"1048576\":2,\"134217728\":0,\"1617125\":2,\"30769549\":0,\"2719669\":1,\"159612677\":0,\"1763487\":2,\"112863206\":0,\"103496016\":0,\"1923096\":2,\"73182735\":0,\"4194304\":1,\"23726566\":0,\"28215801\":0,\"25874004\":0,\"1143480\":2,\"94906265\":0,\"4987896\":0,\"5931641\":2,\"174058858\":2,\"6468501\":0,\"51748008\":0,\"12937002\":0,\"47453132\":0,\"56431603\":0,\"21757357\":0,\"61539099\":0,\"43514714\":0,\"36591367\":0,\"3234250\":0,\"67108864\":0,\"2097152\":0,\"19951584\":0,\"15384774\":0,\"189812531\":0,\"7692387\":1,\"14107900\":0,\"2965820\":1,\"39903169\":0,\"18295683\":0,\"10878678\":0,\"146365470\":0},\"sum\":617517700},\"networking.dns_native_https_call_time\":{\"values\":{\"94906265\":0,\"21757357\":0,\"9975792\":0,\"9147841\":1,\"19951584"
		"\":0,\"33554432\":0,\"61539099\":0,\"25874004\":0,\"30769549\":0,\"36591367\":0,\"11863283\":1,\"112863206\":0,\"67108864\":0,\"134217728\":1,\"103496016\":0,\"16777216\":0,\"87029429\":0,\"39903169\":0,\"123078199\":0,\"10878678\":0,\"47453132\":0,\"73182735\":0,\"14107900\":1,\"51748008\":0,\"43514714\":0,\"23726566\":0,\"15384774\":0,\"79806338\":0,\"56431603\":0,\"7692387\":3,\"8388608\":5,\"12937002\":2,\"28215801\":0,\"18295683\":0,\"146365470\":0},\"sum\":269393700},\"performance.interaction.mouseup_click_present_latency\":{\"values\":{\"19951584\":3,\"1805811301\":0,\"348117717\":0,\"39903169\":1,\"246156398\":0,\"759250124\":0,\"413984066\":0,\"87029429\":0,\"1518500249\":0,\"134217728\":0,\"14107900\":1,\"51748008\":0,\"5439339\":1,\"73182735\":0,\"189812531\":0,\"8388608\":1,\"47453132\":0,\"1276901416\":0,\"61539099\":0,\"30769549\":4,\"638450708\":0,\"112863206\":0,\"103496016\":0,\"33554432\":0,\"7692387\":0,\"5931641\":1,\"451452825\":0,\"696235434\":0,\"1392470868\":0,\"585461880\":0,\"70539"
		"50\":1,\"225726412\":0,\"25874004\":4,\"43514714\":1,\"206992033\":0,\"159612677\":0,\"1170923761\":0,\"1073741824\":0,\"21757357\":3,\"79806338\":0,\"12937002\":0,\"984625593\":0,\"268435456\":0,\"16777216\":3,\"23726566\":6,\"902905650\":0,\"94906265\":0,\"492312796\":0,\"9975792\":1,\"10878678\":1,\"827968132\":0,\"15384774\":0,\"146365470\":0,\"123078199\":0,\"319225354\":0,\"536870912\":0,\"11863283\":1,\"292730940\":0,\"379625062\":0,\"9147841\":0,\"18295683\":2,\"36591367\":1,\"67108864\":0,\"56431603\":0,\"1655936264\":1,\"28215801\":1,\"174058858\":0,\"6468501\":1},\"sum\":2595481700},\"extensions.timing.storage_local_get_idb\":{\"values\":{\"2097152\":10,\"2286960\":6,\"25874004\":0,\"79806338\":0,\"189812531\":0,\"159612677\":4,\"225726412\":0,\"379625062\":0,\"19951584\":3,\"1359834\":3,\"4573920\":1,\"67108864\":0,\"696235434\":0,\"43514714\":0,\"23726566\":4,\"1923096\":3,\"451452825\":0,\"61539099\":0,\"87029429\":0,\"492312796\":0,\"146365470\":1,\"7053950\":4,\"51748008\":0,\"47453132\":0,"
		"\"2719669\":5,\"585461880\":2,\"348117717\":0,\"56431603\":0,\"33554432\":0,\"21757357\":1,\"39903169\":0,\"1143480\":1,\"413984066\":0,\"2493948\":5,\"11863283\":4,\"1048576\":2,\"15384774\":4,\"268435456\":0,\"5439339\":5,\"3846193\":4,\"246156398\":0,\"638450708\":2,\"292730940\":0,\"6468501\":5,\"10878678\":5,\"134217728\":0,\"4194304\":3,\"2965820\":4,\"103496016\":4,\"30769549\":4,\"8388608\":3,\"18295683\":9,\"73182735\":0,\"3526975\":1,\"1482910\":2,\"16777216\":5,\"112863206\":4,\"14107900\":2,\"1617125\":2,\"206992033\":0,\"9975792\":3,\"94906265\":1,\"961548\":38,\"9147841\":0,\"123078199\":4,\"4987896\":4,\"1763487\":6,\"28215801\":5,\"1246974\":4,\"319225354\":0,\"536870912\":2,\"12937002\":2,\"174058858\":3,\"3234250\":10,\"7692387\":5,\"36591367\":0,\"5931641\":8},\"sum\":7985377900},\"network.sub_tls_handshake\":{\"values\":{\"246156398\":0,\"225726412\":1},\"sum\":239811100},\"glean.upload.send_failure\":{\"values\":{\"5439339\":0,\"9975792\":1,\"21757357\":0,\"9147841\":1,\"2097152\":0,\"1"
		"6777216\":0,\"28215801\":0,\"123078199\":0,\"638450708\":0,\"1246974\":0,\"159612677\":0,\"413984066\":0,\"67108864\":0,\"3526975\":0,\"1276901416\":0,\"189812531\":0,\"961548\":6,\"36591367\":0,\"10215211334\":3,\"1170923761\":0,\"8589934592\":0,\"25874004\":0,\"1392470868\":0,\"14107900\":1,\"134217728\":0,\"5931641\":0,\"696235434\":0,\"4683695047\":0,\"492312796\":0,\"3938502375\":0,\"902905650\":0,\"47453132\":0,\"7053950\":0,\"1048576\":1,\"319225354\":0,\"1805811301\":0,\"56431603\":0,\"2784941737\":0,\"827968132\":0,\"585461880\":0,\"759250124\":0,\"18295683\":0,\"39903169\":0,\"87029429\":0,\"1359834\":2,\"1969251187\":0,\"6623745058\":0,\"9367390095\":8,\"15384774\":0,\"1617125\":0,\"1923096\":0,\"103496016\":0,\"379625062\":0,\"246156398\":0,\"11139766950\":0,\"112863206\":0,\"536870912\":0,\"3234250\":0,\"2553802833\":0,\"206992033\":0,\"7877004751\":0,\"2341847523\":0,\"1073741824\":0,\"4194304\":0,\"43514714\":0,\"225726412\":0,\"451452825\":0,\"146365470\":0,\"73182735\":0,\"3311872529\":0,\""
		"2965820\":0,\"4573920\":0,\"2719669\":0,\"30769549\":0,\"1655936264\":0,\"1143480\":0,\"94906265\":0,\"7223245205\":0,\"1482910\":0,\"7692387\":0,\"268435456\":0,\"51748008\":0,\"6468501\":1,\"8388608\":0,\"3611622602\":0,\"3846193\":0,\"11863283\":0,\"1518500249\":0,\"174058858\":0,\"12937002\":0,\"292730940\":0,\"79806338\":0,\"23726566\":1,\"33554432\":0,\"4294967296\":0,\"5107605667\":0,\"1763487\":0,\"3037000499\":0,\"2286960\":0,\"10878678\":0,\"348117717\":0,\"2493948\":1,\"19951584\":0,\"2147483648\":0,\"5569883475\":0,\"6074000999\":0,\"61539099\":0,\"984625593\":0,\"4987896\":0},\"sum\":111567347300},\"wr.gpu_wait_time\":{\"values\":{\"131072\":3,\"240387\":0,\"262144\":0,\"84989\":0,\"9741\":4,\"101070\":1,\"11585\":1,\"741455\":1,\"42494\":1,\"679917\":2,\"13777\":3,\"60096\":3,\"4096\":492,\"339958\":0,\"30048\":10,\"1217\":368,\"27554\":2,\"202140\":0,\"110217\":0,\"370727\":0,\"2435\":359,\"3756\":167,\"4870\":384,\"440871\":0,\"808562\":0,\"155871\":1,\"32768\":7,\"8933\":9,\"169979\":1,\"62"
		"3487\":0,\"1579\":550,\"480774\":0,\"12633\":3,\"6316\":31,\"5792\":110,\"17866\":0,\"35733\":2,\"19483\":1,\"77935\":3,\"23170\":0,\"939\":477,\"21247\":1,\"142935\":4,\"25267\":3,\"38967\":4,\"571740\":1,\"1448\":284,\"2655\":283,\"3444\":158,\"220435\":0,\"46340\":1,\"10623\":3,\"1024\":394,\"120193\":0,\"1878\":547,\"50535\":0,\"1327\":331,\"404281\":0,\"185363\":1,\"4466\":437,\"92681\":0,\"524288\":2,\"16384\":1,\"7512\":12,\"8192\":13,\"2048\":496,\"2896\":296,\"311743\":0,\"15024\":4,\"2233\":437,\"3158\":229,\"65536\":1,\"6888\":17,\"1116\":396,\"5311\":150,\"285870\":0,\"1722\":275,\"55108\":1,\"71467\":0},\"sum\":27470300},\"networking.http_channel_page_open_to_first_sent\":{\"values\":{\"2965820\":0,\"7223245205\":0,\"5931641\":1,\"225726412\":0,\"8388608\":4,\"1518500249\":0,\"94906265\":0,\"379625062\":0,\"6623745058\":0,\"3526975\":0,\"759250124\":0,\"292730940\":0,\"2719669\":0,\"18734780191\":1,\"5107605667\":0,\"1805811301\":0,\"18295683\":2,\"206992033\":0,\"413984066\":0,\"17179869184\":"
		"1,\"51748008\":0,\"189812531\":1,\"103496016\":0,\"36591367\":1,\"2784941737\":0,\"2341847523\":0,\"15384774\":2,\"1655936264\":0,\"8589934592\":0,\"112863206\":0,\"451452825\":0,\"492312796\":0,\"1763487\":1,\"10878678\":0,\"1276901416\":0,\"10215211334\":0,\"9147841\":0,\"4683695047\":0,\"146365470\":0,\"61539099\":0,\"2286960\":0,\"7053950\":1,\"5569883475\":0,\"23726566\":1,\"3311872529\":0,\"13247490117\":0,\"79806338\":1,\"134217728\":0,\"2553802833\":0,\"1969251187\":0,\"4987896\":2,\"9975792\":2,\"1073741824\":0,\"159612677\":0,\"15754009503\":0,\"319225354\":0,\"348117717\":0,\"984625593\":0,\"9367390095\":0,\"6468501\":1,\"5439339\":1,\"246156398\":1,\"20430422668\":0,\"56431603\":1,\"43514714\":2,\"268435456\":0,\"7877004751\":0,\"4194304\":0,\"1392470868\":0,\"536870912\":0,\"1923096\":0,\"696235434\":0,\"28215801\":2,\"3611622602\":0,\"39903169\":2,\"12148001999\":3,\"3938502375\":0,\"4573920\":1,\"11863283\":2,\"2493948\":0,\"3846193\":0,\"827968132\":0,\"25874004\":1,\"2147483648\":0,\"167772"
		"16\":1,\"14107900\":3,\"6074000999\":0,\"67108864\":0,\"1170923761\":0,\"11139766950\":0,\"585461880\":0,\"19951584\":1,\"174058858\":0,\"47453132\":0,\"30769549\":3,\"3234250\":0,\"33554432\":0,\"73182735\":0,\"7692387\":2,\"123078199\":0,\"638450708\":0,\"21757357\":2,\"87029429\":1,\"3037000499\":0,\"902905650\":0,\"12937002\":2,\"14446490411\":0,\"4294967296\":0,\"2097152\":0},\"sum\":76331337200},\"fog.ipc.flush_durations\":{\"values\":{\"4573920\":0,\"1763487\":0,\"2097152\":0,\"3526975\":0,\"9975792\":13,\"4194304\":0,\"8388608\":28,\"1617125\":2,\"16777216\":2,\"2965820\":0,\"11863283\":7,\"15384774\":3,\"7053950\":1,\"3234250\":1,\"18295683\":0,\"9147841\":15,\"6468501\":0,\"4987896\":0,\"12937002\":4,\"7692387\":5,\"1923096\":1,\"2493948\":0,\"5931641\":0,\"2286960\":0,\"2719669\":0,\"5439339\":0,\"3846193\":0,\"14107900\":0,\"10878678\":13},\"sum\":949376200},\"cert_verification_time.success\":{\"values\":{\"2341847523\":3,\"268435456\":0,\"1143480\":0,\"65536\":1,\"246156398\":1,\"7877004751\":0"
		",\"10215211334\":3,\"492312796\":0,\"1482910\":0,\"5439339\":0,\"1048576\":0,\"10878678\":0,\"142935\":6,\"1392470868\":2,\"123078199\":1,\"2784941737\":0,\"1276901416\":0,\"679917\":1,\"131072\":6,\"8388608\":0,\"43514714\":0,\"2286960\":0,\"14107900\":0,\"16777216\":0,\"3037000499\":2,\"4194304\":0,\"2553802833\":2,\"159612677\":0,\"7223245205\":0,\"25874004\":0,\"15384774\":1,\"110217\":6,\"319225354\":0,\"19951584\":2,\"202140\":3,\"8589934592\":1,\"5107605667\":0,\"413984066\":0,\"262144\":2,\"370727\":1,\"77935\":2,\"1763487\":0,\"1359834\":0,\"51748008\":0,\"623487\":1,\"961548\":0,\"120193\":2,\"2147483648\":14,\"524288\":1,\"12937002\":0,\"311743\":2,\"6074000999\":4,\"112863206\":2,\"220435\":7,\"5569883475\":2,\"67108864\":0,\"1518500249\":0,\"23726566\":0,\"4294967296\":0,\"3846193\":0,\"169979\":5,\"808562\":0,\"84989\":3,\"759250124\":0,\"71467\":0,\"585461880\":0,\"2097152\":0,\"185363\":5,\"2965820\":0,\"379625062\":0,\"2493948\":0,\"881743\":0,\"21757357\":1,\"56431603\":3,\"3938502375\":0,"
		"\"9367390095\":3,\"6468501\":0,\"146365470\":0,\"33554432\":0,\"741455\":0,\"1246974\":0,\"134217728\":0,\"94906265\":1,\"902905650\":0,\"87029429\":2,\"39903169\":0,\"1805811301\":0,\"348117717\":0,\"7053950\":0,\"28215801\":0,\"9147841\":0,\"4573920\":0,\"61539099\":2,\"1923096\":0,\"73182735\":0,\"1969251187\":31,\"3234250\":0,\"155871\":2,\"440871\":1,\"18295683\":0,\"339958\":2,\"696235434\":1,\"12148001999\":0,\"404281\":1,\"480774\":2,\"3311872529\":0,\"11139766950\":2,\"6623745058\":0,\"9975792\":0,\"174058858\":3,\"206992033\":2,\"103496016\":0,\"189812531\":9,\"292730940\":0,\"451452825\":0,\"285870\":5,\"240387\":3,\"1655936264\":3,\"1617125\":0,\"2719669\":0,\"79806338\":0,\"571740\":0,\"4987896\":1,\"638450708\":1,\"536870912\":0,\"101070\":3,\"1073741824\":2,\"7692387\":0,\"92681\":2,\"3611622602\":0,\"11863283\":0,\"984625593\":1,\"225726412\":1,\"5931641\":1,\"4683695047\":0,\"47453132\":0,\"30769549\":0,\"3526975\":0,\"1170923761\":0,\"36591367\":0,\"827968132\":0},\"sum\":262804885900}},\""
		"datetime\":{\"background_update.time_last_update_scheduled\":\"2024-11-27+05:00\"},\"url\":{\"search.engine.default.submission_url\":\"https://www.google.com/search?q=\",\"search.engine.private.submission_url\":\"blank:\"},\"uuid\":{\"legacy.telemetry.client_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\",\"legacy.telemetry.profile_group_id\":\"b22cb673-aa6d-4c48-b971-b86830eeb2cf\"},\"labeled_boolean\":{\"browser.ui.mirror_for_toolbar_widgets\":{\"__other__\":true,\"alltabs-button_pinned_tabs-bar\":true,\"back-button_pinned_nav-bar-start\":true,\"bookmarks-bar_pinned_on\":true,\"downloads-button_pinned_nav-bar-end\":true,\"firefox-view-button_pinned_tabs-bar\":true,\"forward-button_pinned_nav-bar-start\":true,\"fxa-toolbar-menu-button_pinned_nav-bar-end\":true,\"jid1-niffy2ca8fy1tg-jetpack_pinned_unified-extensions-area\":true,\"menu-toolbar_pinned_off\":true,\"menubar-items_pinned_menu-bar\":true,\"new-tab-button_pinned_tabs-bar\":true,\"save-to-pocket-button_pinned_nav-bar-end\":true,\"stop-reload-button_p"
		"inned_nav-bar-start\":true,\"tabbrowser-tabs_pinned_tabs-bar\":true,\"titlebar_pinned_off\":true,\"unified-extensions-button_pinned_nav-bar-end\":true},\"media.playback.device_hardware_decoder_support\":{\"av1\":false,\"h264\":true,\"hevc\":true,\"vp8\":true,\"vp9\":true},\"os.environment.is_default_handler\":{\".pdf\":false,\"mailto\":false},\"media.video_hardware_decoding_support\":{\"video/avc\":true},\"networking.doh_heuristic_ever_tripped\":{\"browserParent\":false,\"canary\":false,\"google\":false,\"nrpt\":false,\"policy\":false,\"proxy\":false,\"thirdPartyRoots\":false,\"vpn\":false,\"youtube\":false,\"zscalerCanary\":false},\"a11y.theme\":{\"default\":false}},\"string\":{\"gfx.adapter.primary.driver_files\":\"C:\\\\Windows\\\\System32\\\\DriverStore\\\\FileRepository\\\\n"
		"vaci.inf_amd64_222c113b60c4c9db\\\\n"
		"vldumdx.dll,C:\\\\Windows\\\\System32\\\\DriverStore\\\\FileRepository\\\\n"
		"vaci.inf_amd64_222c113b60c4c9db\\\\n"
		"vldumdx.dll,C:\\\\Windows\\\\System32\\\\DriverStore\\\\FileRepository\\\\n"
		"vaci.inf_amd64_222c11\",\"gfx.adapter.primary.vendor_id\":\"0x10de\",\"search.engine.private.display_name\":\"\",\"gfx.status.last_compositor_gecko_version\":\"133.0\",\"search.engine.private.load_path\":\"\",\"search.engine.default.engine_id\":\"google-com-nocodes\",\"gfx.adapter.primary.driver_vendor\":\"\",\"gfx.adapter.primary.subsystem_id\":\"142f1025\",\"os.environment.allowed_app_sources\":\"Anywhere\",\"search.engine.default.display_name\":\"Google\",\"os.environment.launch_method\":\"Other\",\"genai.chatbot.provider\":\"none\",\"gpu_process.feature_status\":\"available\",\"gfx.feature.webrender\":\"available\",\"startup.profile_database_version\":\"2\",\"search.engine.private.verified\":\"\",\"search.engine.default.load_path\":\"[app]google\",\"gecko.build_id\":\"20241121140525\",\"startup.profile_selection_reason\":\"default\",\"search.engine.private.engine_id\":\"\",\"gfx.adapter.primary.device_id\":\"0x1f95\",\"gfx.adapter.primary.driver_version\":\"32.0.15.6603\",\"gfx.status.compositor\":\"web"
		"render\",\"search.engine.default.verified\":\"default\",\"gfx.adapter.primary.description\":\"NVIDIA GeForce GTX 1650 Ti\",\"gfx.adapter.primary.driver_date\":\"10-15-2024\",\"gecko.version\":\"133.0\"},\"boolean\":{\"widget.dark_mode\":true,\"datasanitization.privacy_clear_on_shutdown_cache\":true,\"a11y.backplate\":true,\"dom.parentprocess.private_window_used\":true,\"extensions.use_remote_policy\":true,\"genai.chatbot.shortcuts_custom\":true,\"os.environment.is_taskbar_pinned\":true,\"gfx.status.headless\":false,\"extensions.use_remote_pref\":true,\"newtab.handoff_preference.enabled\":true,\"datasanitization.privacy_clear_on_shutdown_cookies\":true,\"datasanitization.privacy_clear_on_shutdown_formdata\":true,\"datasanitization.privacy_clear_on_shutdown_offline_apps\":false,\"networking.http3_enabled\":true,\"os.environment.is_taskbar_pinned_private\":false,\"genai.chatbot.shortcuts\":true,\"datasanitization.privacy_clear_on_shutdown_site_settings\":false,\"sslkeylogging.enabled\":false,\"datasanitization"
		".privacy_clear_on_shutdown_sessions\":true,\"startup.is_cold\":false,\"pictureinpicture.toggle_enabled\":true,\"browser.startup.abouthome_cache_shutdownwrite\":false,\"a11y.always_underline_links\":false,\"a11y.use_system_colors\":true,\"contentblocking.fingerprinting_blocking_enabled\":true,\"contentblocking.cryptomining_blocking_enabled\":true,\"gfx.os_compositor\":true,\"os.environment.is_admin_without_uac\":false,\"genai.chatbot.sidebar\":true,\"datasanitization.privacy_clear_on_shutdown_downloads\":true,\"genai.chatbot.enabled\":false,\"datasanitization.privacy_clear_on_shutdown_open_windows\":false,\"datasanitization.privacy_sanitize_sanitize_on_shutdown\":false,\"gfx.tmp_writable\":true,\"policies.is_enterprise\":false,\"datasanitization.privacy_clear_on_shutdown_history\":true,\"gfx.supports_hdr\":false},\"timespan\":{\"extensions.startup_cache_load_time\":{\"value\":156,\"time_unit\":\"millisecond\"},\"fog.initialization\":{\"value\":126900,\"time_unit\":\"nanosecond\"}},\"rate\":{\"cert_signature_"
		"cache.hits\":{\"numerator\":161,\"denominator\":278},\"verification_used_cert_from.tls_handshake\":{\"numerator\":44,\"denominator\":185},\"parsing.svg_unusual_pcdata\":{\"numerator\":0,\"denominator\":335},\"cert_trust_cache.hits\":{\"numerator\":213,\"denominator\":330},\"networking.set_cookie_expired_without_server_time\":{\"numerator\":0,\"denominator\":37},\"networking.set_cookie_partitioned\":{\"numerator\":0,\"denominator\":37},\"verification_used_cert_from.nss_cert_db\":{\"numerator\":0,\"denominator\":185},\"verification_used_cert_from.preloaded_intermediates\":{\"numerator\":0,\"denominator\":185},\"networking.set_cookie_foreign\":{\"numerator\":0,\"denominator\":37},\"verification_used_cert_from.third_party_certificates\":{\"numerator\":141,\"denominator\":185},\"networking.set_cookie_foreign_partitioned\":{\"numerator\":0,\"denominator\":37},\"verification_used_cert_from.built_in_roots_module\":{\"numerator\":44,\"denominator\":185}},\"quantity\":{\"browser.backup.credentials_data_size\":300,\"p"
		"laces.previousday_visits\":2,\"browser.backup.places_size\":5240,\"browser.backup.misc_data_size\":19708,\"browser.backup.prof_d_disk_space\":466070000,\"data_storage.alternate_services\":3,\"gfx.hdr.windows_display_colorspace_bitfield\":1,\"policies.count\":0,\"browser.backup.security_data_size\":231,\"startup.profile_count\":2,\"browser.backup.storage_sync_size\":0,\"gfx.adapter.primary.ram\":4096,\"security.https_only_mode_enabled_pbm\":0,\"security.https_only_mode_enabled\":0,\"browser.backup.preferences_size\":394,\"browser.backup.favicons_size\":5240,\"networking.nss_initialization\":20,\"data_storage.site_security_service_state\":133,\"gfx.display.primary_height\":1080,\"browser.backup.session_store_backups_directory_size\":1020,\"networking.https_rr_prefs_usage\":7,\"browser.engagement.profile_count\":1,\"networking.doh_heuristics_result\":1,\"browser.backup.cookies_size\":1050,\"pkcs11.third_party_modules_loaded\":0,\"browser.backup.session_store_size\":1290,\"startup.seconds_since_last_os_restart"
		"\":9331,\"gfx.display.primary_width\":1920,\"cert_verifier.trust_obj_count\":0,\"gpu_process.total_launch_attempts\":1,\"fog.max_pings_per_minute\":15,\"bounce.tracking.protection.mode\":3,\"extensions.startup_cache_write_bytelength\":192395,\"browser.backup.extensions_xpi_directory_size\":5360,\"gfx.display.count\":2,\"networking.loading_certs_task\":23,\"security.global_privacy_control_enabled\":0,\"browser.backup.browser_extension_data_size\":0,\"browser.backup.extensions_storage_size\":1673,\"browser.backup.extensions_json_size\":71,\"contentblocking.category\":0,\"places.pages_need_frecency_recalculation\":0,\"browser.backup.form_history_size\":260,\"datasanitization.session_permission_exceptions\":0,\"browser.startup.abouthome_cache_result\":6},\"memory_distribution\":{\"fog.ipc.buffer_sizes\":{\"values\":{\"756\":0,\"117\":169,\"2543\":2,\"37315\":0,\"152\":0,\"234\":2,\"32767\":2,\"48392\":0,\"42494\":0,\"11094\":2,\"1798\":1,\"1023\":0,\"394\":4,\"74631\":0,\"27554\":0,\"663\":19,\"25267\":0,\"412"
		"\":0,\"1116\":1,\"534\":0,\"2047\":0,\"28774\":0,\"346\":0,\"50535\":0,\"3298\":1,\"255\":0,\"304\":0,\"5792\":3,\"133\":0,\"1327\":3,\"24196\":0,\"9328\":1,\"980\":1,\"1448\":4,\"5311\":2,\"4277\":1,\"1512\":3,\"430\":1,\"635\":0,\"279\":0,\"62757\":0,\"20346\":0,\"15024\":0,\"173\":0,\"4466\":0,\"3922\":1,\"267\":1,\"861\":2,\"1386\":5,\"1722\":1,\"145\":0,\"38967\":3,\"4664\":0,\"245\":0,\"125514\":0,\"3444\":1,\"13777\":0,\"789\":0,\"331\":2,\"8191\":0,\"105545\":0,\"81386\":2,\"122\":0,\"26386\":0,\"224\":2,\"44376\":1,\"1069\":0,\"2233\":1,\"165\":0,\"35733\":0,\"4870\":0,\"1217\":14,\"8933\":0,\"71467\":0,\"15689\":0,\"6888\":0,\"197\":272,\"88752\":0,\"2138\":0,\"2773\":1,\"378\":23,\"3596\":1,\"17109\":0,\"1166\":0,\"1579\":2,\"46340\":0,\"7512\":0,\"206\":88,\"77935\":0,\"12098\":0,\"608\":1,\"12633\":0,\"583\":1,\"724\":18,\"34218\":0,\"939\":0,\"13193\":1,\"7844\":1,\"101070\":0,\"362\":3,\"127\":0,\"558\":2,\"16383\":0,\"19483\":3,\"317\":1,\"52772\":1,\"2896\":0,\"6596\":0,\"84989\":0,\"490\":"
		"1,\"23170\":0,\"110217\":0,\"469\":1,\"10623\":0,\"30048\":1,\"96785\":1,\"40693\":1,\"2655\":0,\"3756\":1,\"1271\":0,\"60096\":0,\"18657\":0,\"92681\":0,\"2332\":1,\"5086\":0,\"68437\":0,\"693\":2,\"10173\":0,\"11585\":2,\"6316\":0,\"3158\":0,\"22188\":0,\"181\":0,\"1878\":0,\"291\":10,\"158\":0,\"3024\":0,\"824\":0,\"899\":0,\"189\":74,\"1649\":5,\"120193\":1,\"2435\":1,\"57548\":3,\"31378\":1,\"1961\":2,\"9741\":0,\"55108\":1,\"7193\":0,\"511\":0,\"6049\":0,\"8554\":0,\"215\":1,\"449\":2,\"115097\":0,\"65535\":2,\"5547\":0,\"139\":0,\"17866\":0,\"14387\":1,\"21247\":1,\"4095\":1},\"sum\":1609847},\"glean.upload.pending_pings_directory_size\":{\"values\":{\"19483\":0,\"6888\":0,\"7512\":0,\"2435\":0,\"2233\":0,\"12098\":1,\"16383\":0,\"7193\":0,\"4466\":0,\"11585\":0,\"6596\":0,\"4664\":0,\"8191\":0,\"2047\":3,\"17866\":0,\"7844\":0,\"2773\":0,\"5547\":0,\"5792\":0,\"8933\":1,\"4095\":0,\"6316\":0,\"2543\":0,\"2332\":0,\"2896\":0,\"13193\":0,\"5311\":0,\"10623\":0,\"3024\":0,\"8554\":0,\"9328\":0,\"3596\""
		":0,\"12633\":0,\"11094\":0,\"4870\":0,\"4277\":0,\"9741\":0,\"3298\":0,\"3756\":0,\"15689\":0,\"10173\":0,\"18657\":1,\"13777\":0,\"2655\":0,\"17109\":0,\"3444\":0,\"2138\":0,\"6049\":0,\"14387\":0,\"3922\":0,\"15024\":0,\"3158\":0,\"5086\":1},\"sum\":52224},\"performance.clone.deserialize.size\":{\"values\":{\"11585\":91,\"273750\":0,\"220435\":0,\"808562\":0,\"13777\":71,\"2543\":138,\"370727\":0,\"460390\":0,\"2655\":115,\"1116\":1992,\"502059\":0,\"18\":0,\"741455\":6,\"961548\":0,\"71467\":0,\"2435\":180,\"92681\":1,\"20346\":38,\"635\":1197,\"5547\":71,\"346\":1083,\"44376\":20,\"53\":0,\"19\":0,\"362\":259,\"4664\":24,\"86\":294,\"23\":0,\"131071\":9,\"8554\":43,\"33\":0,\"162772\":0,\"152\":56,\"291\":1160,\"1448\":97,\"30048\":39,\"32767\":1,\"19483\":14,\"2097151\":0,\"14387\":146,\"21247\":1,\"1798\":96,\"49\":0,\"693\":1294,\"149263\":0,\"39\":1857,\"197\":59,\"3158\":48,\"4870\":53,\"16\":11443,\"24196\":0,\"524287\":0,\"1271\":741,\"12633\":19,\"142935\":2,\"21\":0,\"5792\":84,\"1359834\":0,\""
		"22\":0,\"789\":1828,\"469\":556,\"1649\":217,\"824\":817,\"8933\":46,\"158\":140,\"1420039\":0,\"115097\":3,\"422180\":0,\"3756\":22,\"679917\":0,\"490\":601,\"2773\":44,\"1194106\":0,\"62757\":1,\"169979\":1,\"3024\":9,\"48392\":6,\"378\":133,\"26386\":8,\"107\":0,\"2233\":247,\"122\":0,\"9328\":1,\"3444\":59,\"404281\":0,\"202140\":1,\"2286960\":0,\"74631\":4,\"2896\":77,\"3298\":89,\"41\":0,\"2840079\":0,\"27554\":2,\"10623\":67,\"2719669\":0,\"480774\":0,\"60096\":0,\"96785\":0,\"181\":22,\"211090\":4,\"16383\":20,\"597053\":0,\"3097128\":0,\"844360\":0,\"6888\":49,\"394\":792,\"20\":0,\"1048575\":0,\"285870\":0,\"155871\":0,\"2138\":204,\"608\":2132,\"11094\":52,\"2008239\":0,\"881743\":0,\"101070\":23,\"45\":0,\"1327\":200,\"1302182\":2,\"46340\":18,\"317\":1669,\"82\":0,\"185363\":7,\"355009\":0,\"189\":29,\"756\":2148,\"224\":12,\"1961\":185,\"63\":227,\"18657\":55,\"325545\":0,\"9741\":56,\"2604364\":0,\"1143480\":0,\"558\":1504,\"651091\":0,\"449\":634,\"81386\":6,\"4095\":51,\"6596\":22,\"1579\":"
		"148,\"1217\":411,\"26\":0,\"50535\":104,\"66\":0,\"1095000\":0,\"94\":274,\"1246974\":0,\"125514\":5,\"724\":1586,\"165\":18,\"1763487\":0,\"35733\":0,\"98\":0,\"387141\":6,\"38967\":27,\"31\":12,\"1004119\":0,\"3922\":4,\"28\":0,\"230195\":0,\"304\":6728,\"2047\":163,\"177504\":5,\"17\":0,\"215\":116,\"51\":0,\"298526\":0,\"22188\":0,\"193570\":0,\"28774\":0,\"112\":212,\"2493948\":0,\"34218\":0,\"15689\":0,\"12098\":446,\"4277\":70,\"58\":0,\"25267\":18,\"571740\":0,\"1023\":3381,\"173\":19,\"920781\":0,\"5086\":47,\"251029\":0,\"2388212\":0,\"136875\":0,\"110217\":2,\"663\":1324,\"23170\":9,\"1722\":222,\"6316\":64,\"57548\":0,\"29\":0,\"84989\":0,\"2332\":191,\"2190000\":0,\"1841563\":0,\"15024\":1,\"206\":57,\"1166\":1666,\"145\":0,\"1878\":120,\"331\":1721,\"262143\":0,\"10173\":121,\"133\":41,\"1069\":4398,\"88752\":0,\"7512\":22,\"103\":223,\"7193\":79,\"583\":1299,\"25\":0,\"939\":1043,\"77935\":0,\"72\":304,\"90\":0,\"120193\":3,\"267\":831,\"279\":1582,\"76\":0,\"547500\":0,\"56\":173,\"7844\":14"
		",\"1617125\":0,\"40693\":44,\"117\":105,\"5311\":105,\"1386\":116,\"24\":954,\"234\":79,\"623487\":0,\"43\":0,\"8191\":41,\"1482910\":0,\"30\":0,\"245\":154,\"17109\":17,\"55108\":36,\"47\":301,\"710019\":0,\"511\":538,\"105545\":5,\"6049\":48,\"65535\":0,\"412\":754,\"430\":1078,\"311743\":0,\"127\":80,\"1512\":150,\"139\":160,\"68437\":0,\"440871\":0,\"17866\":1,\"38\":0,\"13193\":20,\"339958\":0,\"861\":587,\"1548564\":0,\"240387\":0,\"4466\":88,\"3596\":162,\"534\":877,\"1923096\":0,\"899\":755,\"2965820\":6,\"34\":0,\"79\":306,\"255\":675,\"774282\":0,\"980\":1983,\"69\":0,\"42494\":5,\"52772\":0,\"37315\":0,\"31378\":19,\"1688721\":0,\"61\":0,\"36\":0},\"sum\":120658744},\"glean.database.size\":{\"values\":{\"88752\":1,\"101070\":0,\"96785\":1,\"92681\":1,\"77935\":1,\"81386\":2,\"74631\":0,\"84989\":0,\"71467\":0,\"68437\":1},\"sum\":598880},\"networking.cache_metadata_size\":{\"values\":{\"583\":0,\"469\":0,\"3024\":0,\"4870\":0,\"824\":0,\"5792\":1,\"1023\":0,\"534\":0,\"412\":0,\"331\":0,\"1512\":"
		"0,\"9328\":4,\"11585\":0,\"3444\":0,\"4664\":0,\"7193\":0,\"152\":0,\"2332\":0,\"756\":0,\"1116\":0,\"3298\":0,\"8554\":7,\"635\":4,\"4095\":0,\"449\":0,\"724\":0,\"490\":0,\"8191\":0,\"139\":0,\"939\":0,\"1798\":0,\"98\":7,\"6316\":4,\"430\":0,\"378\":0,\"3596\":0,\"107\":0,\"2543\":0,\"663\":2,\"158\":0,\"12633\":0,\"608\":2,\"1961\":0,\"1649\":0,\"9741\":0,\"181\":2,\"1448\":0,\"245\":0,\"2655\":0,\"122\":0,\"6049\":2,\"165\":0,\"112\":0,\"5311\":0,\"3922\":0,\"1271\":0,\"2047\":0,\"980\":0,\"5086\":0,\"133\":0,\"206\":0,\"117\":0,\"3756\":0,\"317\":0,\"279\":0,\"1722\":0,\"2233\":0,\"1878\":0,\"4277\":0,\"145\":0,\"2773\":0,\"1166\":0,\"255\":0,\"173\":0,\"6596\":0,\"14387\":0,\"511\":0,\"224\":0,\"13193\":0,\"346\":0,\"10623\":0,\"2435\":0,\"10173\":0,\"1327\":0,\"1069\":0,\"13777\":1,\"394\":0,\"215\":0,\"2896\":0,\"1579\":0,\"861\":0,\"189\":0,\"2138\":0,\"127\":0,\"6888\":0,\"4466\":0,\"3158\":0,\"234\":0,\"12098\":0,\"5547\":0,\"11094\":0,\"558\":0,\"197\":0,\"103\":0,\"7844\":6,\"899\":0,\"304\":0"
		",\"7512\":0,\"267\":0,\"362\":0,\"1386\":0,\"1217\":0,\"789\":16,\"693\":2,\"8933\":7,\"291\":0},\"sum\":290036}},\"labeled_timing_distribution\":{\"network.http3_open_to_first_received\":{\"supports_http3_sub\":{\"values\":{\"451452825\":1,\"492312796\":0},\"sum\":461915100}},\"networking.trr_fetch_duration\":{\"h1\":{\"values\":{\"67108864\":11,\"638450708\":0,\"2553802833\":0,\"3311872529\":0,\"134217728\":2,\"94906265\":0,\"246156398\":0,\"1655936264\":0,\"696235434\":6,\"292730940\":6,\"4294967296\":0,\"87029429\":3,\"1805811301\":0,\"206992033\":3,\"56431603\":17,\"827968132\":1,\"492312796\":2,\"61539099\":21,\"984625593\":1,\"2341847523\":0,\"379625062\":3,\"225726412\":2,\"159612677\":0,\"1518500249\":0,\"1170923761\":0,\"146365470\":0,\"3037000499\":0,\"319225354\":8,\"79806338\":0,\"112863206\":3,\"1276901416\":4,\"585461880\":1,\"103496016\":1,\"348117717\":1,\"902905650\":2,\"174058858\":5,\"2784941737\":0,\"268435456\":2,\"123078199\":5,\"1073741824\":2,\"2147483648\":1,\"1392470868\":0,\"3611"
		"622602\":1,\"536870912\":4,\"73182735\":2,\"759250124\":2,\"3938502375\":1,\"189812531\":1,\"413984066\":0,\"1969251187\":1,\"451452825\":5},\"sum\":49862245800},\"h1_network_only\":{\"values\":{\"67108864\":10,\"206992033\":2,\"146365470\":9,\"246156398\":2,\"492312796\":0,\"189812531\":0,\"348117717\":0,\"79806338\":2,\"159612677\":3,\"268435456\":0,\"123078199\":7,\"379625062\":0,\"413984066\":0,\"759250124\":2,\"319225354\":0,\"73182735\":8,\"87029429\":2,\"56431603\":36,\"134217728\":4,\"827968132\":0,\"696235434\":4,\"536870912\":0,\"112863206\":7,\"225726412\":1,\"451452825\":0,\"292730940\":1,\"638450708\":0,\"174058858\":2,\"51748008\":2,\"94906265\":0,\"61539099\":22,\"585461880\":0,\"103496016\":4},\"sum\":16326331900},\"h2\":{\"values\":{\"189812531\":2,\"79806338\":0,\"94906265\":2,\"134217728\":0,\"268435456\":2,\"174058858\":0,\"67108864\":7,\"73182735\":3,\"159612677\":0,\"112863206\":1,\"225726412\":4,\"246156398\":1,\"61539099\":10,\"87029429\":2,\"146365470\":0,\"123078199\":1,\"292730940"
		"\":0,\"56431603\":3,\"206992033\":1,\"103496016\":8},\"sum\":5456959700},\"h2_network_only\":{\"values\":{\"94906265\":2,\"103496016\":0,\"56431603\":9,\"61539099\":14,\"79806338\":8,\"87029429\":7,\"73182735\":0,\"67108864\":7},\"sum\":3454197900},\"h3\":{\"values\":{\"87029429\":0,\"189812531\":0,\"94906265\":0,\"246156398\":1,\"73182735\":0,\"103496016\":0,\"174058858\":0,\"206992033\":0,\"146365470\":4,\"225726412\":0,\"56431603\":11,\"268435456\":0,\"61539099\":4,\"112863206\":3,\"67108864\":9,\"134217728\":0,\"123078199\":2,\"159612677\":5,\"79806338\":0},\"sum\":3795446900},\"h3_network_only\":{\"values\":{\"73182735\":0,\"112863206\":0,\"134217728\":0,\"67108864\":4,\"61539099\":7,\"94906265\":0,\"79806338\":0,\"56431603\":27,\"103496016\":0,\"87029429\":0,\"123078199\":1},\"sum\":2449159300}},\"network.http3_complete_load\":{\"supports_http3_sub\":{\"values\":{\"585461880\":0,\"536870912\":1},\"sum\":560248600}},\"network.sup_http3_tcp_connection\":{\"supports_http3_sub\":{\"values\":{\"319225354\""
		":0,\"292730940\":1},\"sum\":303351000}},\"network.http3_first_sent_to_last_received\":{\"supports_http3_sub\":{\"values\":{\"159612677\":1,\"174058858\":0},\"sum\":165032600}},\"network.http3_open_to_first_sent\":{\"supports_http3_sub\":{\"values\":{\"379625062\":1,\"413984066\":0},\"sum\":395216000}},\"netwerk.http3_0rtt_state_duration\":{\"succeeded\":{\"values\":{\"56431603\":3,\"61539099\":0},\"sum\":176626600}},\"network.http3_tls_handshake\":{\"supports_http3_sub\":{\"values\":{\"225726412\":1,\"246156398\":0},\"sum\":239811100}}},\"object\":{\"browser.ui.toolbar_widgets\":[{\"position\":\"on\",\"widgetId\":\"bookmarks-bar\"},{\"position\":\"off\",\"widgetId\":\"menu-toolbar\"},{\"position\":\"off\",\"widgetId\":\"titlebar\"},{\"position\":\"unified-extensions-area\",\"widgetId\":\"jid1-niffy2ca8fy1tg-jetpack\"},{\"position\":\"nav-bar-start\",\"widgetId\":\"back-button\"},{\"position\":\"nav-bar-start\",\"widgetId\":\"forward-button\"},{\"position\":\"nav-bar-start\",\"widgetId\":\"stop-reload-button"
		"\"},{\"position\":\"nav-bar-end\",\"widgetId\":\"save-to-pocket-button\"},{\"position\":\"nav-bar-end\",\"widgetId\":\"downloads-button\"},{\"position\":\"nav-bar-end\",\"widgetId\":\"fxa-toolbar-menu-button\"},{\"position\":\"nav-bar-end\",\"widgetId\":\"unified-extensions-button\"},{\"position\":\"menu-bar\",\"widgetId\":\"menubar-items\"},{\"position\":\"tabs-bar\",\"widgetId\":\"firefox-view-button\"},{\"position\":\"tabs-bar\",\"widgetId\":\"tabbrowser-tabs\"},{\"position\":\"tabs-bar\",\"widgetId\":\"new-tab-button\"},{\"position\":\"tabs-bar\",\"widgetId\":\"alltabs-button\"},{\"position\":\"bookmarks-bar\",\"widgetId\":\"import-button\"},{\"position\":\"bookmarks-bar\",\"widgetId\":\"personal-bookmarks\"},{\"position\":\"pageaction-urlbar\",\"widgetId\":\"bookmark\"}]},\"labeled_counter\":{\"networking.trr_request_count_per_conn\":{\"h1\":255,\"h2\":71},\"avif.clap\":{\"absent\":4},\"network.system_channel_other_status\":{\"cancel\":12,\"http_status\":6,\"ok\":63,\"other\":2,\"timeout\":2},\"netwerk"
		".http3_0rtt_state\":{\"not_used\":32,\"succeeded\":3},\"avif.lsel\":{\"absent\":4},\"networking.trr_request_count\":{\"private\":15,\"regular\":258},\"power.wakeups_per_process_type\":{\"extension\":32677,\"gpu\":316479,\"parent.active\":419945,\"parent.inactive\":212683,\"prealloc\":10580,\"privilegedabout\":40542,\"socket\":57,\"utility\":1256,\"web.background\":6316,\"web.foreground\":81204},\"network.tls_early_data_negotiated\":{\"not_available\":103},\"networking.https_rr_presented\":{\"none\":48},\"avif.a1lx\":{\"absent\":4},\"network.system_channel_remote_settings_status\":{\"ok\":24,\"other\":1},\"networking.fetch_keepalive_request_count\":{\"main\":2},\"networking.dns_native_count\":{\"https_private\":1,\"https_regular\":13,\"private\":18,\"regular\":591},\"avif.colr\":{\"nclx\":4},\"browser.ui.interaction.tabs_bar\":{\"browser-window-minimize-button\":3,\"cmd-closeWindow\":2,\"tab-close-button\":1,\"tabs-newtab-button\":1},\"glean.validation.pings_submitted\":{\"baseline\":9,\"dau-reporting\":9,\""
		"events\":7,\"messaging-system\":2,\"metrics\":1,\"newtab\":10,\"pageload\":4,\"use-counters\":6},\"gmp.update_xml_fetch_result\":{\"content_sig_success\":1},\"glean.error.invalid_state\":{\"fog.initialization\":6,\"glean.baseline.duration\":1},\"networking.http_channel_disposition_enabled_no_reason\":{\"cancel\":15,\"disk\":46,\"net_early_fail\":17,\"net_ok\":135},\"networking.http_response_version\":{\"http_1\":342,\"http_2\":53,\"http_3\":9},\"networking.speculative_connect_outcome\":{\"aborted_socket_limit\":220,\"successful\":359},\"networking.trr_connection_cycle_count\":{\"mozilla.cloudflare-dns.com\":46},\"pwmgr.form_autofill_result\":{\"no_saved_logins\":11},\"extensions.process_event\":{\"created_fg\":1},\"avif.a1op\":{\"absent\":4},\"power.cpu_time_per_process_type_ms\":{\"extension\":14359,\"gpu\":36273,\"parent.active\":99611,\"parent.inactive\":80893,\"prealloc\":5889,\"privilegedabout\":4988,\"socket\":42,\"utility\":1137,\"web.background\":1162,\"web.foreground\":6258},\"networking.http_chann"
		"el_onstart_status\":{\"fail\":75,\"successful\":499},\"glean.error.invalid_overflow\":{\"gfx.adapter.primary.driver_files\":7},\"search.service.initialization_status\":{\"success\":6},\"power.gpu_time_per_process_type_ms\":{\"gpu\":4040},\"cert_compression.used\":{\"brotli\":8},\"networking.http_channel_disposition\":{\"http_cancelled\":15,\"http_disk\":70,\"http_net_early_fail\":29,\"http_net_ok\":251,\"https_cancelled\":15,\"https_net_early_fail\":17,\"https_net_ok\":148},\"avif.pasp\":{\"absent\":4},\"cert_verifier.crlite_status\":{\"no_filter\":198},\"gfx.content.frame_time.reason\":{\"missed_composite\":27,\"missed_composite_long\":1,\"missed_composite_low\":1,\"missed_composite_mid\":1,\"no_vsync_no_id\":14,\"on_time\":395,\"slow_composite\":24},\"glean.upload.ping_upload_failure\":{\"recoverable\":26},\"networking.http_channel_disposition_enabled_wont\":{\"cancel\":15,\"disk\":20,\"net_early_fail\":29,\"net_ok\":251},\"avif.grid\":{\"absent\":4},\"avif.ipro\":{\"absent\":4},\"network.system_channel_u"
		"pdate_status\":{\"cancel\":1,\"ok\":7},\"browser.ui.interaction.bookmarks_bar\":{\"bookmark-item\":7},\"cert_verifier.cert_revocation_mechanisms\":{\"CachedOCSP\":99,\"OCSP\":114,\"StapledOCSP\":15},\"networking.http_redirect_to_scheme_top_level\":{\"https\":1},\"networking.http_to_https_upgrade_reason\":{\"already_https\":2,\"no_upgrade\":5},\"networking.data_transferred_v3_kb\":{\"Y0_N1Sys\":3268,\"Y13_P1\":88,\"Y1_N1\":1403,\"Y2_N3Oth\":428},\"networking.http_channel_disposition_enabled_upgrade\":{\"disk\":4,\"net_ok\":13}},\"string_list\":{\"background_update.reasons_to_not_update\":[\"WINDOWS_CANNOT_USUALLY_USE_BITS\",\"WINDOWS_CANNOT_USUALLY_USE_BITS\"]},\"counter\":{\"browser.engagement.active_ticks\":93,\"networking.set_cookie\":37,\"tls.certificate_verifications\":185,\"cert_signature_cache.total\":278,\"dom.contentprocess.os_priority_change_considered\":157,\"fog.inits_during_shutdown\":1,\"gfx.skipped_composites\":17,\"media.element_in_page_count\":1,\"opaque.response.blocking.cross_origin_opaque"
		"_response_count\":8,\"power.total_cpu_time_ms\":250612,\"glean.upload.pending_pings\":19,\"power.total_gpu_time_ms\":4040,\"dom.contentprocess.os_priority_lowered\":32,\"opaque.response.blocking.javascript_validation_count\":2,\"power.total_thread_wakeups\":1121739,\"cert_trust_cache.total\":330,\"browser.engagement.uri_count_normal_mode\":3,\"browser.engagement.uri_count\":7,\"page_icon.fit_icon_count\":7,\"dom.contentprocess.os_priority_raised\":28,\"networking.doh_heuristics_attempts\":11,\"networking.doh_heuristics_pass_count\":11},\"custom_distribution\":{\"gfx.content.frame_time.from_vsync\":{\"values\":{\"24\":10,\"688\":0,\"480\":0,\"240\":4,\"448\":0,\"48\":0,\"744\":0,\"376\":0,\"584\":0,\"216\":2,\"528\":0,\"40\":5,\"400\":0,\"656\":0,\"392\":0,\"264\":1,\"152\":16,\"536\":0,\"768\":0,\"80\":0,\"184\":2,\"256\":2,\"8\":0,\"104\":42,\"56\":4,\"344\":0,\"704\":0,\"144\":17,\"544\":0,\"72\":4,\"232\":13,\"120\":115,\"360\":2,\"288\":1,\"304\":0,\"632\":0,\"520\":0,\"208\":4,\"224\":9,\"600\":0,\"696"
		"\":0,\"320\":1,\"456\":0,\"576\":0,\"32\":8,\"712\":0,\"160\":11,\"248\":3,\"568\":0,\"16\":4,\"504\":0,\"136\":25,\"368\":0,\"384\":0,\"648\":0,\"496\":0,\"472\":1,\"512\":1,\"416\":0,\"640\":0,\"608\":0,\"624\":0,\"424\":1,\"408\":0,\"616\":0,\"272\":2,\"312\":0,\"784\":0,\"720\":0,\"664\":0,\"112\":43,\"280\":1,\"200\":0,\"88\":1,\"96\":0,\"464\":0,\"176\":5,\"64\":2,\"0\":0,\"592\":0,\"192\":2,\"728\":1,\"440\":0,\"680\":0,\"792\":18,\"432\":1,\"352\":0,\"296\":0,\"328\":0,\"560\":0,\"128\":67,\"776\":0,\"736\":0,\"336\":0,\"488\":0,\"552\":0,\"752\":0,\"672\":0,\"760\":0,\"168\":12},\"sum\":90974},\"networking.http_3_loss_ratio\":{\"values\":{\"877\":0,\"190\":0,\"986\":1,\"1675\":0,\"8\":0,\"780\":0,\"3\":0,\"1247\":1,\"735\":1,\"169\":0,\"693\":0,\"46\":0,\"20\":0,\"37\":0,\"133\":0,\"7\":0,\"23\":0,\"18\":0,\"271\":0,\"202\":0,\"31\":0,\"17\":0,\"385\":0,\"141\":0,\"256\":0,\"616\":0,\"12\":0,\"33\":0,\"9\":0,\"517\":0,\"548\":0,\"1323\":0,\"179\":0,\"43\":0,\"827\":0,\"118\":0,\"4\":0,\"408\":0,\"1"
		"0\":0,\"150\":0,\"27\":0,\"16\":0,\"433\":0,\"459\":0,\"15\":0,\"304\":0,\"14\":0,\"70\":0,\"5\":0,\"125\":0,\"21\":0,\"1109\":0,\"66\":0,\"83\":0,\"78\":0,\"1403\":0,\"653\":0,\"241\":0,\"88\":0,\"55\":0,\"6\":0,\"1488\":0,\"1176\":0,\"74\":0,\"22\":0,\"29\":0,\"1777\":0,\"159\":0,\"227\":0,\"2000\":4,\"930\":0,\"0\":20,\"487\":0,\"35\":0,\"1885\":0,\"93\":0,\"25\":0,\"214\":0,\"287\":0,\"581\":0,\"342\":0,\"322\":0,\"19\":0,\"24\":0,\"1579\":1,\"1046\":0,\"1\":0,\"41\":0,\"11\":0,\"2\":0,\"111\":0,\"62\":0,\"58\":0,\"52\":0,\"49\":0,\"13\":0,\"105\":0,\"99\":0,\"39\":0,\"363\":0},\"sum\":16014},\"power.battery.percentage_when_user_active\":{\"values\":{\"20\":0,\"6\":0,\"76\":0,\"34\":0,\"62\":0,\"16\":0,\"64\":0,\"23\":0,\"96\":0,\"98\":0,\"79\":0,\"50\":0,\"61\":0,\"75\":0,\"90\":0,\"74\":0,\"100\":87,\"87\":0,\"73\":0,\"1\":0,\"19\":0,\"80\":0,\"13\":0,\"36\":0,\"37\":0,\"5\":0,\"84\":0,\"9\":0,\"30\":0,\"91\":0,\"17\":0,\"8\":0,\"54\":0,\"21\":0,\"45\":0,\"67\":0,\"26\":0,\"10\":0,\"35\":0,\"33\":0,\""
		"82\":0,\"47\":0,\"88\":0,\"89\":0,\"93\":0,\"49\":0,\"42\":0,\"7\":0,\"66\":0,\"41\":0,\"3\":0,\"14\":0,\"52\":0,\"18\":0,\"95\":0,\"72\":0,\"55\":0,\"53\":0,\"0\":0,\"2\":0,\"15\":0,\"24\":0,\"28\":0,\"43\":0,\"57\":0,\"59\":0,\"94\":0,\"46\":0,\"48\":0,\"11\":0,\"85\":0,\"4\":0,\"69\":0,\"31\":0,\"65\":0,\"44\":0,\"97\":0,\"63\":0,\"32\":0,\"71\":0,\"78\":0,\"86\":0,\"77\":0,\"70\":0,\"56\":0,\"51\":0,\"68\":0,\"39\":0,\"92\":0,\"22\":0,\"12\":0,\"27\":0,\"38\":0,\"60\":0,\"25\":0,\"29\":0,\"40\":0,\"58\":0,\"81\":0,\"83\":0},\"sum\":8700},\"geckoview.document_site_origins\":{\"values\":{\"2\":1,\"3\":0,\"1\":0,\"0\":0},\"sum\":2},\"gfx.content.frame_time.from_paint\":{\"values\":{\"40\":21,\"25\":46,\"4281\":1,\"120\":83,\"11\":2,\"1237\":3,\"55\":28,\"192\":9,\"4\":0,\"907\":9,\"75\":48,\"21\":23,\"0\":0,\"5\":0,\"569\":0,\"224\":21,\"140\":31,\"2688\":0,\"1\":0,\"34\":35,\"262\":6,\"164\":13,\"306\":3,\"1688\":3,\"3\":0,\"29\":46,\"88\":68,\"1445\":5,\"7\":0,\"777\":4,\"2\":0,\"3139\":0,\"5000\":9,\"35"
		"7\":2,\"3666\":3,\"1059\":2,\"103\":196,\"2302\":0,\"64\":28,\"665\":2,\"18\":9,\"8\":0,\"1971\":0,\"487\":2,\"13\":7,\"47\":27,\"417\":1,\"9\":0,\"6\":0,\"15\":15},\"sum\":28146275},\"timer_thread.timers_fired_per_wakeup\":{\"values\":{\"3\":226,\"7\":33,\"9\":23,\"6\":25,\"16\":0,\"5\":51,\"0\":10221,\"24\":0,\"13\":2,\"11\":7,\"2\":727,\"20\":1,\"4\":99,\"1\":8169},\"sum\":11687},\"performance.clone.deserialize.items\":{\"values\":{\"1029\":139,\"3\":3311,\"113\":901,\"6002\":11,\"1599\":200,\"176\":433,\"5\":1413,\"2\":6,\"12\":5870,\"426\":891,\"1\":12479,\"2485\":50,\"9328\":20,\"274\":296,\"3862\":14,\"73\":1447,\"19\":13399,\"8\":12691,\"47\":3456,\"0\":0,\"14498\":0,\"662\":357,\"30\":20119},\"sum\":3880726},\"gfx.content.frame_time.with_svg\":{\"values\":{\"777\":0,\"11\":0,\"224\":1,\"1688\":0,\"569\":0,\"1\":0,\"262\":2,\"306\":0,\"357\":1,\"2\":0,\"487\":0,\"417\":1,\"6\":0,\"103\":18,\"18\":0,\"34\":0,\"3\":0,\"75\":0,\"4\":0,\"5\":0,\"1237\":0,\"21\":0,\"0\":0,\"907\":1,\"15\":0,\"88\":0,\"47"
		"\":0,\"13\":0,\"192\":1,\"7\":0,\"1445\":1,\"140\":14,\"8\":0,\"25\":0,\"64\":0,\"55\":0,\"665\":0,\"120\":116,\"1059\":0,\"40\":1,\"29\":0,\"9\":0,\"164\":7},\"sum\":24416},\"gfx.content.frame_time.without_resource_upload\":{\"values\":{\"192\":16,\"64\":8,\"224\":60,\"262\":12,\"907\":8,\"103\":170,\"140\":98,\"9\":0,\"34\":12,\"2688\":0,\"29\":14,\"2\":0,\"7\":0,\"1237\":0,\"40\":10,\"88\":2,\"665\":2,\"120\":396,\"8\":0,\"569\":0,\"0\":0,\"164\":46,\"777\":4,\"4281\":0,\"4\":0,\"1971\":0,\"18\":0,\"2302\":0,\"3139\":0,\"15\":2,\"1\":0,\"75\":4,\"11\":0,\"306\":2,\"3666\":4,\"6\":0,\"21\":8,\"25\":8,\"1688\":6,\"5\":0,\"417\":6,\"487\":2,\"1445\":8,\"55\":8,\"47\":0,\"3\":0,\"13\":0,\"357\":4,\"1059\":6},\"sum\":181948},\"geckoview.per_document_site_origins\":{\"values\":{\"0\":0,\"1\":6,\"2\":0},\"sum\":6},\"cert_compression.brotli_saved_bytes\":{\"values\":{\"553\":0,\"5\":0,\"152\":0,\"17\":0,\"51\":0,\"15\":0,\"9\":0,\"83\":0,\"13\":0,\"56\":0,\"92\":0,\"12\":0,\"910\":0,\"186\":0,\"102\":0,\"0\":0,"
		"\"824\":8,\"6\":0,\"168\":0,\"337\":0,\"3\":0,\"1\":0,\"250\":0,\"138\":0,\"454\":0,\"611\":0,\"125\":0,\"25\":0,\"11\":0,\"62\":0,\"42\":0,\"113\":0,\"31\":0,\"2\":0,\"68\":0,\"411\":0,\"34\":0,\"501\":0,\"746\":0,\"28\":0,\"4\":0,\"23\":0,\"675\":0,\"14\":0,\"21\":0,\"46\":0,\"305\":0,\"8\":0,\"7\":0,\"372\":0,\"226\":0,\"10\":0,\"205\":0,\"19\":0,\"75\":0,\"38\":0,\"276\":0},\"sum\":6712}}}}" ;


# 8 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{\"messageType\":\"hello\",\"uaid\":\"84ade1ae5b7744548dbd3de2f3032f1a\",\"statu"
                        "s\":200,\"use_webpush\":true,\"broadcasts\":{\"remote-settings/monitor_changes\""
                        ":\"\\\"1732784230074\\\"\"}}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 


# 10 "globals.h" 2

# 1 "..\\lib\\randomP.h" 1
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

# 11 "globals.h" 2

# 1 "..\\lib\\transaction.h" 1


void open_home_page(){

	web_reg_save_param("userSession",
		"LB=name=\"userSession\" value=\"",
		"RB=\"",
		"LAST");
		
	web_reg_find("Text=Welcome to the Web Tours site.",
		"LAST");

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"LAST");
}

void login(){
	
	web_reg_find("Text=User password was correct","LAST");
	
	web_reg_find("Text=<blockquote>Welcome, <b>{login}</b>, to the Web Tours","LAST");
	
	web_submit_data("login.pl",
		"Action=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t75.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=userSession", "Value={userSession}", "ENDITEM",
		"Name=username", "Value={login}", "ENDITEM",
		"Name=password", "Value={password}", "ENDITEM",
		"Name=login.x", "Value=49", "ENDITEM",
		"Name=login.y", "Value=8", "ENDITEM",
		"Name=JSFormSubmit", "Value=off", "ENDITEM",
		"LAST");	
}

void flights_page(){
		web_reg_find("Text=Find Flight",
		"LAST");
	
	random();
	
		web_reg_save_param("DepartCity", 
	   "LB=\">",
	   "RB=</option>",
	   "Ordinal=all",
	   "LAST"
	);
	web_reg_save_param("ArriveCity", 
	   "LB=\">",
	   "RB=</option>",
	   "Ordinal=all",
	   "LAST"
	);

	
	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"LAST");
    
	city();
}

void find_flight(){

	web_reg_find("Text=<B>{departCity}</B> to <B>{returnCity}</B>","LAST");
	
	web_reg_save_param("outboundFlight",
        "LB/IC=name=\"outboundFlight\" value=\"",
        "RB/IC=\"",
        "Ordinal=all",
        "LAST");

	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=advanceDiscount", "Value=0", "ENDITEM", 
		"Name=depart", "Value={departCity}", "ENDITEM", 
		"Name=departDate", "Value={departDate}", "ENDITEM", 
		"Name=arrive", "Value={returnCity}", "ENDITEM", 
		"Name=returnDate", "Value={returnDate}", "ENDITEM", 
		"Name=numPassengers", "Value={randNumber}", "ENDITEM", 
		"Name=seatPref", "Value={seatPref}", "ENDITEM", 
		"Name=seatType", "Value={seatType}", "ENDITEM", 
		"Name=findFlights.x", "Value=66", "ENDITEM", 
		"Name=findFlights.y", "Value=7", "ENDITEM", 
		"Name=.cgifields", "Value=roundtrip", "ENDITEM", 
		"Name=.cgifields", "Value=seatType", "ENDITEM", 
		"Name=.cgifields", "Value=seatPref", "ENDITEM", 
		"LAST");
	
	lr_save_string(lr_paramarr_random("outboundFlight"),("outboundFlight"));

}

void select_ticket(){
	web_reg_find("Text=Payment Details","LAST");
	
	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=outboundFlight", "Value={outboundFlight}", "ENDITEM", 
		"Name=numPassengers", "Value={randNumber}", "ENDITEM", 
		"Name=advanceDiscount", "Value=0", "ENDITEM", 
		"Name=seatType", "Value={seatType}", "ENDITEM", 
		"Name=seatPref", "Value={seatPref}", "ENDITEM", 
		"Name=reserveFlights.x", "Value=49", "ENDITEM", 
		"Name=reserveFlights.y", "Value=6", "ENDITEM", 
		"LAST");

}

void itinerary_page(){
	web_reg_find("Text=Itinerary",
		"LAST");
			
	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"LAST");
}

void sign_off(){
		web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");
	
}
# 12 "globals.h" 2

 
 


# 3 "c:\\loadrunner_nt\\\361\352\360\350\357\362\373\\uc02_findflight\\\\combined_UC02_FindFlight.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\loadrunner_nt\\\361\352\360\350\357\362\373\\uc02_findflight\\\\combined_UC02_FindFlight.c" 2

# 1 "Action.c" 1
Action()
{  
	lr_start_transaction("UC02_FindFlight");

	lr_start_transaction("open_home_page");

    open_home_page();
	lr_think_time(3);
    lr_end_transaction("open_home_page",2);
    

	lr_start_transaction("login");

	login();
	lr_think_time(5);
	
	lr_end_transaction("login",2);
	


	lr_start_transaction("flights_page");
	
	flights_page();
	lr_think_time(3);
    	
	lr_end_transaction("flights_page",2);
	

	lr_start_transaction("find_flight");
		
	find_flight();


	lr_end_transaction("find_flight",2);
	
	lr_start_transaction("select_ticket");

	select_ticket();
	lr_think_time(5);

	lr_end_transaction("select_ticket",2);
	

		
	lr_start_transaction("itinerary_page");

	itinerary_page();
	lr_think_time(3);
	
	lr_end_transaction("itinerary_page",2);
		
	lr_end_transaction("UC02_FindFlight", 2);

	return 0;
}
# 5 "c:\\loadrunner_nt\\\361\352\360\350\357\362\373\\uc02_findflight\\\\combined_UC02_FindFlight.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\loadrunner_nt\\\361\352\360\350\357\362\373\\uc02_findflight\\\\combined_UC02_FindFlight.c" 2

