#include <iostream>
using namespace std;

int main() {
   int userNum;

   cin >> userNum;

   if (userNum > 0) {
        cout << "Positive." << endl;
    }
    else {
        cout << "Not positive, converting to 1." << endl;
        userNum = 0; 
    }
    cout << "Final: " << userNum << endl;

   return 0;
}
