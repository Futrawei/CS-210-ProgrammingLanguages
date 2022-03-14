#include <iostream>
using namespace std;

int main() {
   char origLetter;

   cin >> origLetter;

   switch (origLetter) {
      
    case 'a':
    cout << "Alpha" << endl;
    break;
    
    case 'A':
    cout << "Alpha" << endl;
    break;
    
    case 'b':
    cout<< "Beta" << endl;
    break;
    
    case 'B':
    cout << "Beta" << endl;
    break;
    
    default:
    cout << "Unknown" << endl;
    break;
   }

   return 0;
}
