#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> countDown(0);
   int newSize;
   unsigned int i;

   cin >> newSize;
   
	countDown.resize(newSize);

	for(i = 0; i < newSize; i++){
		countDown.at(i) = newSize - i;
	}
   

   for (i = 0; i < countDown.size(); ++i) {
      cout << countDown.at(i) << " ";
   }
   cout << "Go!" << endl;

   return 0;
}
