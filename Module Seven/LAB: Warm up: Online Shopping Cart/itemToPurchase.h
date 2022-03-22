#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
public:
	
	ItemToPurchase();
	
	void SetName(string n);
	string GetName();
	void SetPrice(int p);
	int GetPrice();
	void SetQuantity(int q);
	int GetQuantity();
	
private:
	
	string itemname;
	int itemPrice;
	int itemQuantity;
};

#endif
