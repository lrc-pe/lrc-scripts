Action()
{
	
	lr_start_transaction("tran");
	lr_think_time(5);
	lr_end_transaction("tran",LR_PASS);

	
	lr_start_transaction("tran_fail");
	lr_error_message("This is error message");
	lr_think_time(5);
	lr_end_transaction("tran_fail",LR_FAIL);

	return 0;
}
