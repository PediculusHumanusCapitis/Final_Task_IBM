#include <..\..\C_scripts\generateRandParameters.c>

Action()
{
	char login[15]; 
    char password[11]; 
    char fname[15]; 
    char sname[15];
	char city[20];
	char state[9];
	char address[20];
	char postalCode[7];
	char phone[12];
	
	generate_login_password(login, 14);
    generate_login_password(password, 10);
    
    generate_alpha_string(fname, 14);
    generate_alpha_string(sname, 14);
    generate_alpha_string(city, 19);
    generate_alpha_string(state, 8);
    generate_alpha_string(address, 19);
    
    generate_digits(postalCode, 6);
    generate_digits(phone, 11);
    
    
    lr_save_string(login, "login");
    lr_save_string(password, "password");
    lr_save_string(fname, "fname");
    lr_save_string(sname, "sname");
    lr_save_string(city, "city");
    lr_save_string(state, "state");
    lr_save_string(address, "address");
    lr_save_string(postalCode, "postalCode");
    lr_save_string(phone, "phone");
	
	lr_start_transaction("US5_RegistrtionRandomUser");
	
	GoToHomePage();
	web_reg_find("Text=ACCOUNT_DETAILS",LAST);
	lr_start_transaction("Go_to_registration");

	web_add_header("Priority", 
		"u=0");

	web_url("register-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/user/views/register-page.html", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);


	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetCountriesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("Go_to_registration",LR_AUTO);
	lr_think_time(5);
	lr_start_transaction("Add_information");
	web_reg_find("Text=New user created successfully",LAST);
	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountCreateRequest");

	web_add_header("Priority", 
		"u=0");

	web_custom_request("AccountCreateRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountCreateRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address>{address}</address><allowOffersPromotion>false</allowOffersPromotion><cityName>{city}</cityName><countryId>{country},{countryShort}</countryId><email"
		">{login}@mail.{countryShort}</email><firstName>{fname}</firstName><lastName>{sname}</lastName><loginName>{login}</loginName><password>{password}</password><phoneNumber>{phone}</phoneNumber><stateProvince>{state}</stateProvince><zipcode>{postalCode}</zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
		LAST);


	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");
    web_reg_save_param_ex("ParamName=authorization",
                            "LB=t_authorization>",
                            "RB=<\/ns2:t_authorization>",
                            "Ordinal=ALL",
                            LAST);
    web_reg_save_param_ex("ParamName=userId",
                            "LB=userId>",
                            "RB=<\/ns2:userId>",
                            "Ordinal=ALL",
                            LAST);
	
	web_reg_find("Text=Login Successful",LAST);
	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>{login}@mail.{countryShort}</email><loginPassword>{password}</loginPassword><loginUser>{login}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_reg_find("Text=userId\":{userId_1},",LAST);
	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");
    web_add_auto_header("Authorization", "Basic {authorization_1}");
	web_url("914910686", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId_1}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Add_information",LR_AUTO);
	lr_end_transaction("US5_RegistrtionRandomUser",LR_AUTO);
	return 0;
}