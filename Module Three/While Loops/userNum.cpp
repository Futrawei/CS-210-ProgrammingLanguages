#include <iostream>
using namespace std;

int main() {
   int userNum;

   cin >> userNum;

   while (userNum != 2 && userNum > 2) {  
   userNum = userNum / 4;
   cout << userNum << " ";  
   }

   cout << endl;

   return 0;
}
