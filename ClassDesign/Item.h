#pragma once
#include <string>
#include <iostream>

class Item
{
	std::string Name = "n/a";
	long ID = 0000;
	double price = 0000;
	int stock = 0000;
public:
	std::string getName() { return Name; }
	long getID() { return ID; }
	double getPrice(){ return price; }
	int getStock() { return stock; }

	void setName(std::string newName) {Name = newName;}
	void setID(long newID) { ID = newID; }
	void setPrice(double newPrice) { price = newPrice; }
	void setStock(int newStock) { stock = newStock; }

	Item(std::string,long, double,int);
	Item();
};

