//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Transaction 1");
	truclient_step("1", "Execute TC.userDataPoint ( 'mic_recv' , 1000 )", "snapshot=Action_1.inf");
	lr_end_transaction("Transaction 1",0);
	lr_start_transaction("Transaction 2");
	truclient_step("2", "Execute TC.userDataPoint ( 'HTTP_200' , 1 )", "snapshot=Action_2.inf");
	truclient_step("3", "Execute TC.userDataPoint ( 'HTTP_300' , 1 )", "snapshot=Action_3.inf");
	truclient_step("4", "Execute TC.userDataPoint ( 'HTTP_400' , 1 )", "snapshot=Action_4.inf");
	truclient_step("5", "Execute TC.userDataPoint ( 'HTTP_500' , 1 )", "snapshot=Action_5.inf");
	lr_end_transaction("Transaction 2",0);
	truclient_step("6", "Execute TC.log ( 'This is error message' , 'Error' )", "snapshot=Action_6.inf");

	return 0;
}
