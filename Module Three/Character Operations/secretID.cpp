#include <iostream>
#include <string>
using namespace std;

int main() {
   string secretID;
   string firstName;
   string lastName;

   cin >> firstName;
   cin >> lastName;

   secretID = firstName + " " + lastName;

   cout << secretID << endl;
   return 0;
}
