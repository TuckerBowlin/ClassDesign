#include "Item.h"
Item::Item(std::string name, long id, double price, int stock) {
	setName(name);
	setID(id);
	setPrice(price);
	setStock(stock);
}
Item::Item() {
	setName("");
	setID(0);
	setPrice(0);
	setStock(0);
}