/*
 * LoadRunner Java script. (Build: _build_number_)
 * 
 * Script Description: 
 *                     
 */

import lrapi.lr;

public class Actions
{

	public int init() throws Throwable {
		lr.start_transaction("Init Transaction");
        lr.think_time(5);
        lr.user_data_point("mic_recv", 1000);
        lr.user_data_point("HTTP_200", 5);
        lr.end_transaction("Init Transaction", lr.PASS);
		return 0;
	}//end of init


	public int action() throws Throwable {
        lr.start_transaction("Action Transaction1");
        lr.think_time(5);
        lr.user_data_point("mic_recv", 1000);
        lr.user_data_point("HTTP_200", 5);
        lr.end_transaction("Action Transaction1", lr.PASS);
		
        lr.start_transaction("Action Transaction2");
        lr.think_time(5);
        lr.user_data_point("mic_recv", 1000);
        lr.user_data_point("HTTP_200", 5);
        lr.end_transaction("Action Transaction2", lr.PASS);
        
        lr.start_transaction("Action Transaction3");
        lr.think_time(5);
        lr.user_data_point("mic_recv", 1000);
        lr.user_data_point("HTTP_200", 5);
        lr.end_transaction("Action Transaction3", lr.PASS);
		return 0;
	}//end of action


	public int end() throws Throwable {
		
		lr.start_transaction("End Transaction");
        lr.think_time(5);
        lr.user_data_point("mic_recv", 1000);
        lr.user_data_point("HTTP_200", 5);
        lr.end_transaction("End Transaction", lr.PASS);
		return 0;
	}//end of end
}
