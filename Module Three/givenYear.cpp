#include <iostream>
using namespace std;

int main() {
   int givenYear;

   cin >> givenYear;

   if (givenYear >= 2101) {
      cout << "Distant future" << endl;
   }
   else if ( givenYear >= 2001) {
      cout << "21st century" << endl;
   }
   else if (givenYear >= 1901) {
      cout << "20th century" << endl;
   }
   else {
      cout << "Long ago" << endl;
   }

   return 0;
}
