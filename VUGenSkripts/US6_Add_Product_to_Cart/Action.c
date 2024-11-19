Action()
{

	lr_start_transaction("US6_Add_Product_to_Cart");

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
	
	lr_think_time(2);
	
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

	lr_think_time(2);


	Logout();

	lr_end_transaction("US6_Add_Product_to_Cart",LR_AUTO);

	return 0;
}