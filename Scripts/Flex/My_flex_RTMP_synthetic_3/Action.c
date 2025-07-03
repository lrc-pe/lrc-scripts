Action()
{
	lr_start_transaction("My_New_Flex_Trans");

	lr_user_data_point("mic_recv", 1000);  // Throughput
	lr_user_data_point("HTTP_200", 5);	   // Hits per seconds
	
	
	
	//Total number of RTMP connections
	lr_user_data_point("RTMP_ACTIVE_CONNECTIONS", 5);				 //RTMP over TCP Connections
	
	//RTMP Throughput
	lr_user_data_point("RTMP_RECEIVE_SIZE", 50);	                 //RTMP over TCP Throughput
	lr_user_data_point("RTMP_SEND_SIZE", 70);	                     //RTMP over TCP upload throughput
	
	//Other statistics
	lr_user_data_point("RTMP_TCP_SOCKET_CONNECT_DURATION", 2000);	 //Average TCP socket connect duration (millisec)
	lr_user_data_point("RTMP_HANDSHAKE_DURATION", 3000);	         //Average RTMP handshake duration (millisec)
	
	//Total number of succesfully delivered streams
	lr_user_data_point("RTMP_STREAM_DELIVERED_SUCCESSFULLY", 10); 	//Total number of succesfully delivered streams (RTMP)
	
	//Average Buffering Time
   	lr_user_data_point("RTMP_STREAMING_DURATION_MILLISEC", 10);		//Average Buffering Time (millisec) - RTMP over TCP
		
	lr_think_time(1);
	
	lr_end_transaction("My_New_Flex_Trans", LR_PASS);

	
	return 0;
}
