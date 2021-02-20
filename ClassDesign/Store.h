#pragma once
#include "Item.h"
class Store
{
	Item StoreA[100];
public:
	void getAllItems() {
		for (int i = 0; i <= 99; i++) {
			std::cout << StoreA[i].getName() << " x " << StoreA[i].getStock() << std::endl;
		}
	}
	Item getSItem(int index) {
		return StoreA[index];
	}
	void setSItem(std::string Name, long ID, double Price, int Stock, int index) {
		StoreA[index].setName(Name);
		StoreA[index].setID(ID);
		StoreA[index].setPrice(Price);
		StoreA[index].setStock(Stock);
	}
	Store();
};

