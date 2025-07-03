Action()
{

lr_start_transaction("tran");
	lr_user_data_point("mic_recv", 1000);  // Throughput
	lr_user_data_point("HTTP_200", 5);	   // Hits per seconds
	
	
	//Total number of RTMPT connections
	lr_user_data_point("RTMP_TUNNELED_ACTIVE_CONNECTIONS", 7);		 //RTMP over HTTP Connections
	
	//Total number of RTMP connections
	lr_user_data_point("RTMP_ACTIVE_CONNECTIONS", 5);				 //RTMP over TCP Connections
		
	//RTMPT Throughput
	lr_user_data_point("RTMP_TUNNELED_SEND_RESPONSE_BODY_SIZE", 70);	    //RTMP over HTTP Throughput (only tunneled body)
	lr_user_data_point("RTMP_TUNNELED_SEND_REQUEST_BODY_SIZE", 90);	        //RTMP over HTTP upload throughput (RTMP messages from client to server)
	
	//RTMP Throughput
	lr_user_data_point("RTMP_RECEIVE_SIZE", 50);	                 //RTMP over TCP Throughput
	lr_user_data_point("RTMP_SEND_SIZE", 70);	                     //RTMP over TCP upload throughput
	
	//Other statistics
	lr_user_data_point("RTMP_TUNNELD_HANDSHAKE_DURATION", 4000);	 //Average RTMP over HTTP handshake duration (millisec)
	
	//Other statistics
	lr_user_data_point("RTMP_TCP_SOCKET_CONNECT_DURATION", 2000);	 //Average TCP socket connect duration (millisec)
	lr_user_data_point("RTMP_HANDSHAKE_DURATION", 3000);	         //Average RTMP handshake duration (millisec)
	
	//Total number of succesfully delivered streams
	lr_user_data_point("RTMP_TUNNELED_STREAM_DELIVERED_SUCCESSFULLY", 15); 	//Total number of succesfully delivered streams (RTMP over HTTP)
	
	//Total number of succesfully delivered streams
	lr_user_data_point("RTMP_STREAM_DELIVERED_SUCCESSFULLY", 10); 	//Total number of succesfully delivered streams (RTMP)

	
	//Average Buffering Time
   	lr_user_data_point("RTMP_TUNNELED_SEND_STREAM_DURATION_MILISECONDS", 20);		//Average Buffering Time (millisec) - RTMP over HTTP
		
	
	//Average Buffering Time
   	lr_user_data_point("RTMP_STREAMING_DURATION_MILLISEC", 10);		//Average Buffering Time (millisec) - RTMP over TCP
		
	lr_think_time(4);
	
lr_end_transaction("tran", LR_PASS);


lr_start_transaction("tran_fail");
	flex_rtmp_receive("recv_step0", 
		"ConnectionID=27", 
		"Snapshot=tRTMP2.inf", 
		CHANNEL, 
		"ChunkStreamID=2", 
		CHANNEL, 
		"ChunkStreamID=2", 
		CHANNEL, 
		"ChunkStreamID=3", 
		LAST);
lr_end_transaction("tran_fail", LR_AUTO);

return 0;

}