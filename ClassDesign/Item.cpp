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

std::ostream& operator<<(std::ostream& out, const Item& item)
{
	out << "Name: " << item.getName() << std::endl;
	out << "ID:  " << item.getID() << std::endl;
	out << "Price: $" << item.getPrice() << std::endl;
	out << "Stock:  " << item.getStock() << std::endl; 
	return out;
}
