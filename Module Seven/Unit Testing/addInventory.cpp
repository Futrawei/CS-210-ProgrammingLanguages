#include <iostream>
using namespace std;

class InventoryTag {
public:
   InventoryTag();
   int getQuantityRemaining() const;
   void addInventory(int numItems);

private:
   int quantityRemaining;
};

InventoryTag::InventoryTag() {
   quantityRemaining = 0;
}

int InventoryTag::getQuantityRemaining() const {
   return quantityRemaining;
}

void InventoryTag::addInventory(int numItems) {
   if (numItems > 10) {
      quantityRemaining = quantityRemaining + numItems;
   }
}

int main() {
   InventoryTag redSweater;
   int sweaterShipment;
   int sweaterInventoryBefore;

   sweaterInventoryBefore = redSweater.getQuantityRemaining();
   cin >> sweaterShipment;

   cout << "Beginning tests." << endl;

   // FIXME add unit test for addInventory

  redSweater.addInventory(sweaterShipment);
  
    if (redSweater.getQuantityRemaining() != sweaterShipment + sweaterInventoryBefore) {
        cout << "   UNIT TEST FAILED: addInventory()" << endl;
    }

   cout << "Tests complete." << endl;

   return 0;
}
