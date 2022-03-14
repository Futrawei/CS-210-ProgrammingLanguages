#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;

   getline(cin, userInput);

   int isPresent = userInput.find("darn");

   if (isPresent > 0){
   cout << "Censored" << endl;
   }

   else{
   cout << userInput << endl;
   }

   return 0;
}
