Action()
{
	/* Uncomment the following if implementing the "subscriber" logic. Make sure to also uncomment subscribe/unsubscribe in vuser_init/end.c */
	//
	/* Option 1: Wait for messages, then handle their contents */
	// size_t messageCount = mqtt_await_messages(client, MQTT_DEFAULT);
	// size_t i = 0;
	// for ( ; i < messageCount; i++)

	// {
	//	MQTT_MESSAGE m = mqtt_read_inbox(client);
	// 	const char* p = mqtt_get_payload(m);
	// 	const char* t = mqtt_get_topic(m);
	// 	size_t l = mqtt_get_length(m);
	// 	... do something meaningful with the message
	//	... for instance, print received message information (assuming its payload is not binary data)
	//	lr_message("received message with size %d from %s", l, t);
	//	lr_message("payload %.*s", l, p);
	//
	// 	mqtt_free_message(m);
	// }
	
	/* Option 2: Wait for messages, then clear Inbox (if their handling is not needed) */
	// mqtt_await_messages(client, MQTT_DEFAULT);
	// mqtt_clear_inbox(client);
	
	
	
	/* Uncomment the following if implementing the "publisher" logic */
	
	// mqtt_publish(client, "<topic>", "<payload>", MQTT_AUTO, MQTT_DEFAULT, MQTT_RETAIN);
	 
	lr_start_transaction("pass_Transaction");
	lr_think_time(2);
	lr_user_data_point("MQTT_publish", 1);
	lr_user_data_point("MQTT_publish_payload", 1);		
	lr_user_data_point("MQTT_connection", 1);	
	lr_user_data_point("MQTT_inflight_message", 1);	
	lr_end_transaction("pass_Transaction", LR_PASS);
	
	lr_start_transaction("failed_Transaction");	
	lr_think_time(2);
	lr_end_transaction("failed_Transaction", LR_FAIL);	
	
	return 0;
}
