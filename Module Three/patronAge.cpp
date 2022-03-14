#include <iostream>
using namespace std;

int main() {
   int patronAge;

   cin >> patronAge;

   if (patronAge >= 55) {
      cout << "Senior citizen" << endl;
   }
   else {
      cout << "Not senior citizen" << endl;
   }

   return 0;
}
