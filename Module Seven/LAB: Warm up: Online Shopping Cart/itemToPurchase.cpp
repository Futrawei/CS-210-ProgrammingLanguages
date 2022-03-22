#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase()
{
	itemname = "none";
	itemPrice = 0;
	itemQuantity = 0;
}

//Mutators function to set value of item name
void ItemToPurchase::SetName(string n)
{
	itemname = n;
}

//Accessor function returns the value of item name
string ItemToPurchase::GetName()
{
	return itemname;
}


void ItemToPurchase::SetPrice(int p)
{
	itemPrice = p;
}

int ItemToPurchase::GetPrice()
{
	return itemPrice;
}

void ItemToPurchase::SetQuantity(int q)
{
	itemQuantity = q;
}

int ItemToPurchase::GetQuantity()
{
	return itemQuantity;
}
