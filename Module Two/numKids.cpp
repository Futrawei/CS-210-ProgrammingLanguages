#include <iostream>
using namespace std;

int main() {
   int numKidsA;
   int numKidsB;
   int numKidsC;
   int numFamilies;
   double avgKids;

   cin >> numKidsA;
   cin >> numKidsB;
   cin >> numKidsC;
   cin >> numFamilies;

   avgKids = static_cast<double>(numKidsA + numKidsB + numKidsC) / numFamilies;

   cout << avgKids << endl;

   return 0;
}
