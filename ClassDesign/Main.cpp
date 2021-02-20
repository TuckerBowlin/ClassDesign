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
		
	MetaCamera Ctest("testFile",".png","05/08/2021",0,"TuckerB",256,256,8,30,600,false);
	std::cout << "File Name: " << Ctest.getFileName() << std::endl;
	std::cout << "Image Type: " << Ctest.getImageType() << std::endl;
	std::cout << "Date Created: " << Ctest.getdateCreated() << std::endl;
	std::cout << "File Size: " << Ctest.getSize() << std::endl;
	std::cout << "Author: " << Ctest.getAuthor() << std::endl;
	std::cout << "Width: " << Ctest.getXDimension() << std::endl;
	std::cout << "Height: " << Ctest.getYDimension() << std::endl;
	std::cout << "Apature: " << "f/"<< Ctest.getApertureSize() << std::endl;
	std::cout << "Exposure Time: " << "1/" << Ctest.getExposureTime() << std::endl;
	std::cout << "ISO: " << Ctest.getISO() << std::endl;
	std::cout << "Flash: " << Ctest.getFlash() << std::endl;

	Store Stest;

	Stest.getAllItems();
	
	Stest.setSItem("red gum", 1121, 15.37, 15, 3);
	Stest.setSItem("red gum", 1121, 15.37, 15, 5);
	Stest.setSItem("red gum", 1121, 15.37, 15, 7);
	Stest.setSItem("red gum", 1121, 15.37, 15, 8);
	Stest.getAllItems();

	Order order;

	order.addItem(Stest, 3);
	order.addItem(Stest, 5);
	order.addItem(Stest, 7);
	order.addItem(Stest, 8);
	std::cout << order.getTotalPrice() << std::endl;

}