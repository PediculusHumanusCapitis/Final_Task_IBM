Action()
{

	lr_start_transaction("US2_Search_product");
	GoToHomePage();
	Login();
	lr_start_transaction("Search_Product");

	web_add_header("Priority", 
		"u=0");
	
	web_reg_find("Text=\"categoryId\":{randomCategory},\"categoryName\":",LAST);
	
	web_url("products", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{randomCategory}/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Search_Product",LR_AUTO);
	
	lr_think_time(2);

	Logout();

	lr_end_transaction("US2_Search_product",LR_AUTO);

	return 0;
}