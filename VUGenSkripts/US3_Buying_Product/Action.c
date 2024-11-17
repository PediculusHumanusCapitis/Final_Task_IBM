Action()
{

	lr_start_transaction("US3_Buying _Products");

	GoToHomePage();

	Login();

	Search_Product();

	lr_start_transaction("Click_Product");
    web_reg_find("Text=\"productId\":{randomProduct},\"categoryId\":",LAST);
    
	web_add_auto_header("Priority", 
		"u=0");

	web_reg_save_param_ex("ParamName=colorCode",
                    "LB={\"code\":\"",
                    "RB=\",\"name\"",
                    "Ordinal=ALL",
                    LAST);
	web_url("product", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/{randomProduct}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");

	web_url("products_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{randomCategory}/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Click_Product",LR_AUTO);

	lr_start_transaction("Add_to_Cart");
	
	lr_save_string(lr_paramarr_random("colorCode"), "randomColor");
	
	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("Priority", 
		"u=0");



	web_submit_data("Add", 
		"Action=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId_1}/product/{randomProduct}/color/{randomColor}?quantity=1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value={sessionId}", ENDITEM, 
		LAST);

	lr_end_transaction("Add_to_Cart",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("Go_to_cart");
	web_reg_find("Text=\"code\":\"{randomColor}\",\"name",LAST);
	web_url("964281101_2", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId_1}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");

	web_url("shoppingCart.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Go_to_cart",LR_AUTO);

	lr_start_transaction("Checkout");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("Priority", 
		"u=0");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountByIdRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId_1}</accountId><base64Token>Basic {authorization_1}</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdNewRequest");

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId_1}</accountId><base64Token>Basic {authorization_1}</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("964281101_3", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId_1}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_custom_request("shippingcost", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/shippingcost/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"seaddress\":{\"addressLine1\":\"{address}\",\"addressLine2\":\"\",\"city\":\"{city}\",\"country\":\"{countryShort}\",\"postalCode\":{postalCode},\"state\":\"{state}\"},\"secustomerName\":\"{fname} {sname}\",\"secustomerPhone\":\"{phone}\",\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"{sessionId}\"}", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId_1}</accountId><base64Token>Basic {authorization_1}</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("orderPayment-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t54.inf", 
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
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("Checkout",LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("PayNow");
	web_reg_find("Text=Successful",LAST);

	web_add_header("Priority", 
		"u=0");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceUpdateMasterCreditMethodRequest");

	web_custom_request("UpdateMasterCreditMethodRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/UpdateMasterCreditMethodRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><UpdateMasterCreditMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><userId>{userId_1}</userId><cardNumber>4886{cardNumber}</cardNumber><expirationDate>{expirationDate}</expirationDate><cvvNumber>{cvvNumber}</cvvNumber><customerName>{customerName}</customerName><referenceId"
		">1234567890</referenceId><base64Token>Basic {authorization_1}</base64Token></UpdateMasterCreditMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("X-Requested-With");
	web_reg_find("Text=order completed successfully",LAST);
	web_custom_request("964281101_4", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/{userId_1}", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"112987298763\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"{phone}\",\"Transaction_MasterCredit_CVVNumber\":{cvvNumber},\"Transaction_MasterCredit_CardNumber\":\"4886{cardNumber}\",\"Transaction_MasterCredit_CustomerName\":\"{customerName}\",\"Transaction_MasterCredit_ExpirationDate\":\"{expirationDate}\",\"Transaction_PaymentMethod\":\"MasterCredit\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"\",\""
		"Transaction_SafePay_UserName\":\"\",\"Transaction_TransactionDate\":\"{Date}\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"{address}\",\"Shipping_Address_City\":\"{city}\",\"Shipping_Address_CountryCode\":236,\"Shipping_Address_CustomerName\":\"{fname} {sname}\",\"Shipping_Address_CustomerPhone\":\"{phone}\",\"Shipping_Address_PostalCode\":{postalCode},\"Shipping_Address_State\":\"{state}\",\"Shipping_Cost\":1279,\"Shipping_NumberOfProducts\":1,\""
		"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"{randomColor}\",\"productId\":{randomProduct},\"quantity\":1,\"hasWarranty\":false}]}", 
		LAST);


	web_custom_request("964281101_5", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId_1}", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("PayNow",LR_AUTO);
	lr_think_time(5);

	Logout();

	lr_end_transaction("US3_Buying _Products",LR_AUTO);

	return 0;
}