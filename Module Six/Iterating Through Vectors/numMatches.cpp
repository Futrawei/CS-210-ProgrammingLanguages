#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int matchValue;
   unsigned int i;
   int numMatches = -99; // Assign numMatches with 0 before your for loop
   vector<int> userValues(NUM_VALS);

   cin >> matchValue;

   for (i = 0; i < userValues.size(); ++i) {
      cin >> userValues.at(i);
   }
   numMatches = 0;

   for (i = 0; i < NUM_VALS; ++i) {

   if(userValues[i] == matchValue) {
   numMatches++;

   }

   }
   

   cout << "matchValue: " << matchValue << ", numMatches: " << numMatches << endl;

   return 0;
}
