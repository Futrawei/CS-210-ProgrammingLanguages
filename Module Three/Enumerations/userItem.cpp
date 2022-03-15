#include <iostream>
using namespace std;

int main() {
   enum GroceryItem {GR_APPLES, GR_BANANAS, GR_JUICE, GR_WATER};
   GroceryItem userItem;

   userItem = GR_APPLES;

   	if((userItem == GR_APPLES) || (userItem == GR_BANANAS)){
		cout << "Fruit";
	}
	else if((userItem == GR_JUICE) || (userItem == GR_WATER)){
		cout << "Drink";
	}
	else{
		cout << "Unknown";
	}

	cout << endl;

   return 0;
}
