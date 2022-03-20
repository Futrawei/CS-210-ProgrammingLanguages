#include <iostream>
#include <vector>
using namespace std;

void SwapVectorEnds(vector<int>& regVector){
	int i = 0;
	int tempVal = regVector.at(0);
	int vectorsize = regVector.size();

	tempVal = regVector.at(i);
	regVector.at(i) = regVector.at(vectorsize - 1 - i);
	regVector.at(vectorsize - 1 - i) = tempVal;

	return;
}


int main() {
   vector<int> sortVector(4);
   unsigned int i;
   int userNum;

   for (i = 0; i < sortVector.size(); ++i) {
      cin >> userNum;
      sortVector.at(i) = userNum;
   }

   SwapVectorEnds(sortVector);

   for (i = 0; i < sortVector.size(); ++i) {
      cout << sortVector.at(i) << " ";
   }
   cout << endl;

   return 0;
}
