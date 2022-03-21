#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> courseGrades(NUM_VALS);
   int i;

   for (i = 0; i < courseGrades.size(); ++i) {
      cin >> courseGrades.at(i);
   }
	for (i = 0; i < NUM_VALS; i++){
		cout << courseGrades.at(i) << " ";
	}

	cout << endl;

	for (i = NUM_VALS - 1; i >= 0; i--){
		cout << courseGrades.at(i) << " ";
	}
	cout << endl;


   return 0;
}
