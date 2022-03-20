#include <iostream>
using namespace std;

void PrintPopcornTime(int bagOunces) {

   if (bagOunces < 2) {
      cout << "Too small" << endl;
   }
   else if (bagOunces > 10) {
      cout << "Too large" << endl;
   }
   else {
      cout << 6 * bagOunces << " seconds" << endl;
}
}

int main() {
   int userOunces;

   cin >> userOunces;
   PrintPopcornTime(userOunces);

   return 0;
}
