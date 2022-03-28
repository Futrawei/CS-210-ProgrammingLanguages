#include <iostream>
using namespace std;

int main() {
   int* numItemsPointer;
   int numItems;

   cin >> numItems;

  if(numItems < 0){
    numItemsPointer = NULL;
   }
   else{
    numItemsPointer = &numItems;
    numItems = numItems * 10;
   }

   if (numItemsPointer == nullptr) {
      cout << "Items is negative" << endl;
   }
   else {
      cout << "Items: " << *numItemsPointer << endl;
   }


   return 0;
}
