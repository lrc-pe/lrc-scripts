//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("1 Seconds");
	truclient_step("1", "Wait 1 seconds", "snapshot=Action_1.inf");
	lr_end_transaction("1 Seconds",0);
	lr_start_transaction("2 Seconds");
	truclient_step("2", "Wait 2 seconds", "snapshot=Action_2.inf");
	lr_end_transaction("2 Seconds",0);
	lr_start_transaction("3 Seconds");
	truclient_step("3", "Wait 3 seconds", "snapshot=Action_3.inf");
	lr_end_transaction("3 Seconds",0);
	lr_start_transaction("4 Seconds");
	truclient_step("4", "Wait 4 seconds", "snapshot=Action_4.inf");
	lr_end_transaction("4 Seconds",0);
	lr_start_transaction("5 Seconds");
	truclient_step("5", "Wait 5 seconds", "snapshot=Action_5.inf");
	lr_end_transaction("5 Seconds",0);

	return 0;
}
