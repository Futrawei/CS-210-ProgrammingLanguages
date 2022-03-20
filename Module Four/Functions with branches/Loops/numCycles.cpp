#include <iostream>
using namespace std;

void PrintShampooInstructions(int numCycles) {
   if (numCycles < 1) {
      cout << "Too few." << endl;
   }
   else if (numCycles > 4) {
      cout << "Too many." << endl;
   }
   else {
         for(unsigned int i = 1; i <= numCycles; i++) {
            cout << i << ": Lather and rinse." << endl;
         }
         cout << "Done." << endl;
   }
      
   }

int main() {
   int userCycles;

   cin >> userCycles;
   PrintShampooInstructions(userCycles);

   return 0;
}
