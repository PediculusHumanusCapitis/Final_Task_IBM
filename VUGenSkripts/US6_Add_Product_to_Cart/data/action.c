Action()
{

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1731790631080\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	lr_start_transaction("US3_Buying _Products");

	lr_start_transaction("Go_to_Home");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("ArtZay", 
		lr_unmask("67392395915509e260b29e15"), 
		"www.advantageonlineshopping.com:443");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1731796963.7.1.1731797703.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.1.1428554695.1731610030; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731797006.7.1.1731797204.6.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.114201075.1731778528; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1731796963.7.1.1731797744.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Priority", 
		"u=0, i");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731797006.7.1.1731797810.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	lr_think_time(21);

	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/vendor/requirejs/require.js", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/css/images/favicon.ico", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/app/tempFiles/popularProducts.json", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3202", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3201", ENDITEM, 
		LAST);

	web_add_cookie("_ga=GA1.2.1428554695.1731610030; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731797006.7.1.1731797747.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731797006.7.1.1731797750.57.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	lr_end_transaction("Go_to_Home",LR_AUTO);

	lr_start_transaction("Login");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("Priority", 
		"u=0");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(23);

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>Haha0070</loginPassword><loginUser>ArtZay</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731797006.7.1.1731797775.32.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("964281101", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/964281101", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	lr_start_transaction("Go_to_Products");

	web_add_header("Priority", 
		"u=0");

	lr_think_time(18);

	web_url("products", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/3/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Go_to_Products",LR_AUTO);

	lr_start_transaction("Click_Product");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731797006.7.1.1731797796.11.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_auto_header("Priority", 
		"u=0");

	lr_think_time(12);

	web_url("17", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/17", 
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
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/3/products", 
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

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("Priority", 
		"u=0");

	lr_think_time(17);

	web_submit_data("414141", 
		"Action=https://www.advantageonlineshopping.com/order/api/v1/carts/964281101/product/17/color/414141?quantity=1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value=408AB4D5B2519FA95653E905929597F3", ENDITEM, 
		LAST);

	lr_end_transaction("Add_to_Cart",LR_AUTO);

	lr_think_time(11);

	lr_start_transaction("Go_to_cart");

	web_url("964281101_2", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/964281101", 
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

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731797006.7.1.1731797842.28.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("Priority", 
		"u=0");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(10);

	web_custom_request("GetAccountByIdRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>964281101</accountId><base64Token>Basic QXJ0WmF5OkhhaGEwMDcw</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>964281101</accountId><base64Token>Basic QXJ0WmF5OkhhaGEwMDcw</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("964281101_3", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/964281101", 
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
		"Body={\"seaddress\":{\"addressLine1\":\"Address 1\",\"addressLine2\":\"\",\"city\":\"Saratov\",\"country\":\"ru\",\"postalCode\":123123123,\"state\":\"Sar\"},\"secustomerName\":\"Art Zay\",\"secustomerPhone\":\"+71231231212\",\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"408AB4D5B2519FA95653E905929597F3\"}", 
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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>964281101</accountId><base64Token>Basic QXJ0WmF5OkhhaGEwMDcw</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("orderPayment-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731797006.7.1.1731797854.16.0.0; DOMAIN=www.advantageonlineshopping.com");

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

	lr_start_transaction("Next");

	lr_end_transaction("Next",LR_AUTO);

	lr_start_transaction("PayNow");

	web_add_header("Priority", 
		"u=0");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceUpdateMasterCreditMethodRequest");

	lr_think_time(24);

	web_custom_request("UpdateMasterCreditMethodRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/UpdateMasterCreditMethodRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><UpdateMasterCreditMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><userId>964281101</userId><cardNumber>4886123123123123</cardNumber><expirationDate>122027</expirationDate><cvvNumber>233</cvvNumber><customerName>artzay</customerName><referenceId"
		">1234567890</referenceId><base64Token>Basic QXJ0WmF5OkhhaGEwMDcw</base64Token></UpdateMasterCreditMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_custom_request("964281101_4", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/964281101", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"112987298763\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"+71231231212\",\"Transaction_MasterCredit_CVVNumber\":233,\"Transaction_MasterCredit_CardNumber\":\"4886123123123123\",\"Transaction_MasterCredit_CustomerName\":\"artzay\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"MasterCredit\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"\",\""
		"Transaction_SafePay_UserName\":\"\",\"Transaction_TransactionDate\":\"16112024\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"Address 1\",\"Shipping_Address_City\":\"Saratov\",\"Shipping_Address_CountryCode\":236,\"Shipping_Address_CustomerName\":\"Art Zay\",\"Shipping_Address_CustomerPhone\":\"+71231231212\",\"Shipping_Address_PostalCode\":123123123,\"Shipping_Address_State\":\"Sar\",\"Shipping_Cost\":1279,\"Shipping_NumberOfProducts\":1,\""
		"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"414141\",\"productId\":17,\"quantity\":1,\"hasWarranty\":false}]}", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1731797006.7.1.1731797881.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_custom_request("964281101_5", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/964281101", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("PayNow",LR_AUTO);

	lr_start_transaction("Logout");

	web_add_header("Priority", 
		"u=0");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(9);

	web_custom_request("AccountLogoutRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>964281101</loginUser><base64Token>Basic QXJ0WmF5OkhhaGEwMDcw</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("Logout",LR_AUTO);

	lr_end_transaction("US3_Buying _Products",LR_AUTO);

	return 0;
}