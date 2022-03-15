#include <iostream>
using namespace std;

int main() {
   int numInsects;

   cin >> numInsects; // Must be >= 1

   while (numInsects < 200){
   cout << numInsects << " ";
   numInsects = numInsects * 2;

}
   cout << endl;

   return 0;
}
