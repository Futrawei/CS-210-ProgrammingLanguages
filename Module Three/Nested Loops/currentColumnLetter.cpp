#include <iostream>
using namespace std;

int main() {
   int numRows;
   int numColumns;
   int currentRow;
   int currentColumn;
   char currentColumnLetter;

   cin >> numRows;
   cin >> numColumns;

   for (int i = 1; i < numRows + 1; i++) {
      currentColumnLetter = 'A';
      
   for (int j = 0; j < numColumns; j++) {
      cout << i << currentColumnLetter << ' ';
      currentColumnLetter++;
   }
   
   }

   cout << endl;

   return 0;
}
