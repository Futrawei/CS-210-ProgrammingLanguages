#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
   int stringSize;

   getline(cin, userInput);

  stringSize = userInput.length();

   cout << "Size of userInput: " << stringSize << endl;

   return 0;
}
