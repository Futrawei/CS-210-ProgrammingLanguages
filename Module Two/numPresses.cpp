#include <iostream>
using namespace std;

int main() {
   char letterToQuit;
   int  numPresses;

   cin >> letterToQuit;
   cin >> numPresses;
   cout << "Press the " << letterToQuit << " key " << numPresses << " times to quit." << endl;

   return 0;
}
