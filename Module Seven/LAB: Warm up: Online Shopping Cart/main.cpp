#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
	string name;
	int price, quantity;
	
	//Prompt & read item name, price & quantity for item 1 from user
	cout << "Item 1" << endl;
	cout << "Enter the item name:" << endl;
	getline (cin, name);
	cout << "Enter the item price:" << endl;
	cin >> price;
	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	
	//Create objecy for item 1
	ItemToPurchase item1;
	//Set values of data memebers of class for item 1
	item1.SetName(name);
	item1.SetPrice(price);
	item1.SetQuantity(quantity);
	
	cin.ignore();
	
	cout << "\nItem 2" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, name);
	cout << "Enter the item price:" << endl;
	cin >> price;
	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	
	ItemToPurchase item2;
	item2.SetName(name);
	item2.SetPrice(price);
	item2.SetQuantity(quantity);
	

	int item1Cost = item1.GetQuantity() * item1.GetPrice();
	int item2Cost = item2.GetQuantity() * item2.GetPrice();
	int TotalCost = item1Cost + item2Cost;
	
	cout << "\nTOTAL COST" << endl;
	cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1Cost << endl;
	cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2Cost << endl;
	cout << "\nTotal: $" << TotalCost << endl;
   
   return 0;
}
