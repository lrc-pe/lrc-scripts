/*
 * LoadRunner Java script. (Build: 3020)
 * 
 * Script Description: 
 *                     
 */

import lrapi.lr;

public class Actions
{

	public int init() throws Throwable {
		return 0;
	}//end of init


	public int action() throws Throwable {
		lr.start_transaction("pass_transaction");		
		lr.user_data_point("HTTP_200", 5);
		lr.user_data_point("mic_recv", 1000);
		lr.end_transaction("pass_transaction", lr.PASS);
        
		//Failed transaction  
		lr.start_transaction("failed_transaction");
		lr.user_data_point("HTTP_200", 5);
		lr.user_data_point("mic_recv", 1000);
		lr.end_transaction("failed_transaction", lr.FAIL);	
		
		lr.error_message("this is an error message");
		lr.think_time(5);
		
		return 0;
	}//end of action


	public int end() throws Throwable {
		return 0;
	}//end of end
}
