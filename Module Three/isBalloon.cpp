#include <iostream>
using namespace std;

int main() {
   bool isRed;
   bool isBalloon;

   cin >> isRed;
   cin >> isBalloon;

   if ((isBalloon && !isRed)) {
      cout << "Balloon" << endl;
   }
   else if ((isBalloon && isRed)) {
      cout << "Red balloon" << endl;
   }
   else {
      cout << "Not a balloon" << endl;
   }

   return 0;
}
