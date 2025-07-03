Action()
{
lr_start_transaction("trans1_sapweb");
/*Correlation comment: Automatic rules - Do not change!  
Original value='zjfhlkldjhYTYIjghdhsg7uhu742323' 
Name ='MySapSessionID_1' 
Type ='Rule' 
AppName ='mySAP' 
RuleName ='AutoDetect_MySap1'*/
	web_reg_save_param_ex(
		"ParamName=MySapSessionID_1",
		"LB/IC=/scripts/wgate/",
		"RB/IC=\r",
		"Ordinal=4",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("mySAPCorrelations.html", 
		"URL=http://52.89.65.67/kilimanjaro/SAPcorrelations/mySAPCorrelations.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://52.89.65.67/kilimanjaro/SAPcorrelations/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

    lr_end_transaction("trans1_sapweb", LR_AUTO);

	return 0;
}