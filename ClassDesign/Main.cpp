#include "URLParser.h"
#include "MetaCamera.h"
#include "Store.h"
#include "Order.h"


int main() {

	URLParser test("https://canvas.highline.edu/courses/2039824/files/159478660?wrap=1");
	std::cout << test.getURL() << std::endl;
	std::cout << test.getScheme() << std::endl;
	std::cout << test.getAuthority() << std::endl;
	std::cout << test.getPath() << std::endl;

	//printURL(test);
	std::cout << test;
		
	MetaCamera Ctest("testFile",".png","05/08/2021",0,"TuckerB",256,256,8,30,600,false);
	//printImageData(Ctest);
	std::cout << Ctest;
	Store Stest;

	//Stest.getAllItems();
	
	Stest.setSItem("red gum", 1121, 15.37, 15, 3);
	Stest.setSItem("red gum", 1121, 15.37, 15, 5);
	Stest.setSItem("red gum", 1121, 15.37, 15, 7);
	Stest.setSItem("red gum", 1121, 15.37, 15, 8);
	std::cout << Stest.getSItem(3);
	std::cout << Stest;
	//Stest.getAllItems();

	Order order;

	order.addItem(Stest, 3);
	order.addItem(Stest, 5);
	order.addItem(Stest, 7);
	order.addItem(Stest, 8);
	order.getTotalPrice();

}