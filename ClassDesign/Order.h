#pragma once
#include "store.h"

class Order
{private:
	Item order[10];
	int index = 0;
public:
	void addItem(Store S, int i) {
		order[index] = S.getSItem(i);
		index++;
	}
	Item getItem(int i) const {
		return this->order[i];
	}
	int getTotalPrice()const {
		int price = 0;
		for (int i = 0; i <= 9; i++) {
			price = price + order[i].getPrice();
		}
		return price;
	}
};

