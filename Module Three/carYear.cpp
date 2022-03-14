#include <iostream>
using namespace std;

int main() {
   int carYear;

   cin >> carYear;

   if (carYear < 1968) {
      cout << "Probably has few safety features." << endl;
   }
   if (carYear > 1971) {
      cout << "Probably has head rests." << endl;
   }
   if (carYear > 1991) {
      cout << "Probably has electronic stability control." << endl;
   }
   if (carYear > 2001) {
      cout << "Probably has airbags." << endl;
   }

   return 0;
}
