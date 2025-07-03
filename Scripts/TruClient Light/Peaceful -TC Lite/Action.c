//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("First-page");
	truclient_step("1", "Navigate to 'http://50.112.197.225/'", "snapshot=Action_1.inf");
	lr_end_transaction("First-page",0);
	lr_start_transaction("second-page");
	truclient_step("2", "Click on Go to second page button", "snapshot=Action_2.inf");
	lr_end_transaction("second-page",0);
	truclient_step("3", "Click on Back to home button", "snapshot=Action_3.inf");
	lr_start_transaction("Third-Page");
	truclient_step("4", "Click on Go to third page button", "snapshot=Action_4.inf");
	lr_end_transaction("Third-Page",0);
	truclient_step("5", "Click on Back to home button", "snapshot=Action_5.inf");
	lr_start_transaction("Fourth-Page");
	truclient_step("6", "Click on Go to fourth page button", "snapshot=Action_6.inf");
	lr_end_transaction("Fourth-Page",0);
	truclient_step("8", "Click on Back to home button", "snapshot=Action_8.inf");

	return 0;
}
