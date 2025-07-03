Action()
{
	lr_start_transaction("tran_pass");
	lr_user_data_point("mic_recv", 1000);
	lr_user_data_point("HTTP_200", 1);
	lr_think_time(5);
	lr_end_transaction("tran_pass",LR_PASS);

	lr_start_transaction("tran_fail");
	lr_user_data_point("mic_recv", 1000);
	lr_user_data_point("HTTP_200", 1);
	lr_error_message("This is error message");
	lr_think_time(3);
	lr_end_transaction("tran_fail",LR_FAIL);

	return 0;
}