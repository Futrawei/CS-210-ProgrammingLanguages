#include <iostream>
using namespace std;

int main() {
   int userNum1;
   int userNum2;

   cin >> userNum1;
   cin >> userNum2;

   if (userNum1 < 0) {
      cout << "userNum1 is negative." << endl;
   }
   if (userNum2 > 15) {
      userNum2 = 2;
   }
   else {
      cout << "userNum2 is less or equal 15." << endl;
   }
   

   cout << "userNum2 is " << userNum2 << endl;

   return 0;
}
