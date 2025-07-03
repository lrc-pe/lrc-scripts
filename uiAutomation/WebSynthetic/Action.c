Action()
{

	//char* status;

	//status = "{num}";
	
	lr_start_transaction("transaction11");

// web page download simulation

	lr_user_data_point("tcp_connect", 2);			// new connections
	lr_user_data_point("tcp_connection_count", 1);	// currently open connections
	lr_user_data_point("mic_recv", 5000);			// downloaded bytes (throughput);
	lr_user_data_point("HTTP_200", 12);				// successful responses
	lr_user_data_point("HTTP_302", 1);				// redirection responses
	lr_user_data_point("tcp_shutdown", 1);			// closed connections

// -------------------------------------------------------------------------------
   
	lr_user_data_point("ThreadCount", 50);
	lr_user_data_point("FreeMemory", 2048000);

		
	lr_end_transaction("transaction11",atoi(lr_eval_string("{num}")));
	lr_think_time(5);

	
	return 0;
}
