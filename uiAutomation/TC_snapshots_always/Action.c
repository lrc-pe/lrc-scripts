//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Transaction 1");
	truclient_step("1", "Navigate to http://52.39.153.71", "snapshot=Action_1.inf");
	lr_end_transaction("Transaction 1",0);
	lr_start_transaction("Transaction 2");
	truclient_step("2", "Click on Go to second page button", "snapshot=Action_2.inf");
	lr_end_transaction("Transaction 2",0);
	truclient_step("3", "Click on Back to home button", "snapshot=Action_3.inf");
	lr_start_transaction("Transaction 3");
	truclient_step("4", "Click on Go to third page button", "snapshot=Action_4.inf");
	lr_end_transaction("Transaction 3",0);
	truclient_step("5", "Click on Back to home button", "snapshot=Action_5.inf");
	lr_start_transaction("Transaction 4");
	truclient_step("6", "Click on Go to fourth page button", "snapshot=Action_6.inf");
	lr_end_transaction("Transaction 4",0);
	truclient_step("7", "Click on Back to home button", "snapshot=Action_7.inf");
	lr_start_transaction("Transaction 5");
	truclient_step("8", "Navigate to 'taobao.com'", "snapshot=Action_8.inf");
	lr_end_transaction("Transaction 5",0);
	lr_start_transaction("Transaction 6");
	truclient_step("10", "Navigate to 'http://www.flipkart.com/'", "snapshot=Action_10.inf");
	lr_end_transaction("Transaction 6",0);
	lr_start_transaction("Transaction 7");
	truclient_step("12", "Click on Tops, Dresses...Minimum... link", "snapshot=Action_12.inf");
	lr_end_transaction("Transaction 7",0);
	truclient_step("13", "Click on Tops, Dresses...Minimum... link", "snapshot=Action_13.inf");
	truclient_step("14", "Mouse down on Minimum 55% Off image", "snapshot=Action_14.inf");

	return 0;
}
