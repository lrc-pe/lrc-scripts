Action()
{

	sapgui_open_connection_ex("   /SAP_CODEPAGE=1100  /FULLMENU  calderone.hpeswlab.net 00 /3 /UPDOWNLOAD_CP=2", 
		"calderone", 
		"con[0]");

	sapgui_select_active_connection("con[0]");

	sapgui_select_active_session("ses[0]");

	sapgui_select_active_window("wnd[0]");

	sapgui_window_resize("98", 
		"17", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui104", 
		END_OPTIONAL);

	/*Before running script, enter password in place of asterisks in logon function*/

	lr_think_time(12);

	sapgui_logon("qa01", 
		"Bb123456", 
		"800", 
		"EN", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1012", 
		END_OPTIONAL);

	sapgui_window_resize("266", 
		"40", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1013", 
		END_OPTIONAL);

	lr_think_time(24);

	sapgui_press_button("Cancel   (F12)", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1018", 
		END_OPTIONAL);

	lr_think_time(21);

	lr_start_transaction("LogOff");

	sapgui_press_button("Log off   (Shift+F3)", 
		btn2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1021", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Yes", 
		btnSPOP1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1024", 
		END_OPTIONAL);

	lr_end_transaction("LogOff",LR_AUTO);

	return 0;
}