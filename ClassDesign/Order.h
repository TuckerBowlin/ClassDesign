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
	int getTotalPrice() {
		int price = 0;
		for (int i = 0; i <= 10; i++) {
			price = price + order[i].getPrice();
		}
		return price;
	}
};

