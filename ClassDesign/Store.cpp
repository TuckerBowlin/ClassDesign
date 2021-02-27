#include "Store.h"
Store::Store() {
	
}

std::ostream& operator<<(std::ostream& out, const Store& store)
{
	for (int i = 0; i <= 99; i++) {
		out << store.getSItem(i).getName() << " x " << store.getSItem(i).getStock() << std::endl;
		
	}
	return out;
}
