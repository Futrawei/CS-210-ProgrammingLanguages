#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string passCode;

   cin >> passCode;

   if (isalpha(passCode[0])) {
      passCode[0] = '_';
   }
   
      if (isalpha(passCode[1])) {
      passCode[1] = '_';
   }
   
   cout << passCode << endl;
   return 0;
}
