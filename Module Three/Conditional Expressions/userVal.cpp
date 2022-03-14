#include <iostream>
#include <string>
using namespace std;

int main() {
   string condStr;
   int userVal;

   cin >> userVal;

   condStr = (userVal >= 0)? "non-negative" : "negative";

   cout << userVal << " is " << condStr << "." << endl;

   return 0;
}
