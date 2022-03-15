#include <iostream>
using namespace std;

int main() {
   int userNum;
   int i;
   int j;

   cin >> userNum;
   	for(i = 0; i <= userNum; i++){
		for(j = 0; j < i; j++){
			cout << " ";
		}
		cout << i << endl;
	}
   

   return 0;
}
