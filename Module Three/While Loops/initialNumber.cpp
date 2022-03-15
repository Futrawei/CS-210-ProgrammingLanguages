#include <iostream>
using namespace std;

int main() {
   int initialNumber;
   int finalNumber;
   int i;

   cin >> initialNumber;
   cin >> finalNumber;

   for(i = initialNumber; i <= finalNumber; i++) {
      cout << i << " ";
   }

   return 0;
}
