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
			if (order.getItem(i).getStock() > 0) {
				for (int j = 0; j <= 99; j++) {

					if (order.getItem(i).getID() == this->getSItem(j).getID()) {
						if (this->getSItem(j).getStock() >= order.getItem(i).getStock()) {
							this->StoreA[j].setStock(this->StoreA[j].getStock() - order.getItem(i).getStock());//subtracting stock from item in store
							order.getItem(i).setStock(0);


						}
						else {
							std::cout << "there is not enough stock to place that order" << std::endl;
						}
					    if (this->StoreA[j].getStock() == 0) {
							this->StoreA[j].setID(9999);
							this->StoreA[j].setName("n/a");
							this->StoreA[j].setPrice(0);
							this->StoreA[j].setStock(0);


						}


					}



				}
			}

		}
		
	}
	Store();


};

std::ostream& operator<<(std::ostream& out, const Store& store);