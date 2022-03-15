#include <iostream>
using namespace std;

int main() {
   int userNum;

   cin >> userNum;

   while (userNum >= 0) {
      cout << "Body" << endl;
      cin >> userNum;
   }
   cout << "Done." << endl;

   return 0;
}
