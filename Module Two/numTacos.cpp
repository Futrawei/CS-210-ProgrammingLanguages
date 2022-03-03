#include <iostream>
using namespace std;

    int main() {
   int numDrinks;
   int numTacos;
   int totalCost;

   cin >> numDrinks;
   cin >> numTacos;

   totalCost = numDrinks * 2 + numTacos * 4;
   

   cout << "Total cost: " << totalCost << endl;

   return 0;
}
