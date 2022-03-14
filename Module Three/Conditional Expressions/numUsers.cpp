#include <iostream>
using namespace std;

int main() {
   int numUsers;
   int updateDirection;

   cin >> numUsers;
   cin >> updateDirection;

   numUsers = (updateDirection ==1)?(++numUsers):(--numUsers);

   cout << "New value is: " << numUsers << endl;

   return 0;
}
