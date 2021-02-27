#pragma once
#include "Item.h"
#include "Order.h"
class Store
{
	Item StoreA[100];
public:
	void getAllItems() const {
		for (int i = 0; i <= 99; i++) {
			std::cout << StoreA[i].getName() << " x " << StoreA[i].getStock() << std::endl;
		}
	}
	Item getSItem(int index) const {
		return StoreA[index];
	}
	void setSItem(std::string Name, long ID, double Price, int Stock, int index) {
		StoreA[index].setName(Name);
		StoreA[index].setID(ID);
		StoreA[index].setPrice(Price);
		StoreA[index].setStock(Stock);
	}
	void processOrder(const Order& order) {
		
		for (int i = 0; i <= 9; i++) {
			order.getItem(i).getID();
		}
		
	}
	Store();


};

std::ostream& operator<<(std::ostream& out, const Store& store);