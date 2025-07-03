//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("TC_MeasurementOnPeaceFull");
	truclient_step("1", "Navigate to http://50.112.197.225", "snapshot=Action_1.inf");
	lr_end_transaction("TC_MeasurementOnPeaceFull",0);

	return 0;
}
