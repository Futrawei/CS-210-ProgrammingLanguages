#include <iostream>
using namespace std;

int main() {
   int userAge;

   cin >> userAge;

   if (userAge >= 18 && userAge <= 25) {
      cout << "Eligible" << endl;
   }
   else {
      cout << "Ineligible" << endl;
   }

   return 0;
}
