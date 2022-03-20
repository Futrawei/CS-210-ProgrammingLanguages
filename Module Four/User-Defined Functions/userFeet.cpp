#include <iostream>
using namespace std;

   void PrintFeetInchShort(int numFeet,int numInches) {
      cout << numFeet << "' " << numInches << "\"" << endl;
   }

int main() {
   int userFeet;
   int userInches;

   cin >> userFeet;
   cin >> userInches;

   PrintFeetInchShort(userFeet, userInches);  // Will be run with (5, 8), then (4, 11)

   return 0;
}
