#include <iostream>
#include <cstdlib>   // Enables use of rand()
#include <ctime>     // Enables use of time()
using namespace std;

int main() {
   int seedVal;

   cin >> seedVal;
   srand(seedVal);


   cout << 100 + rand() % 50 << endl;
   cout << 100 + rand() % 50 << endl;

   return 0;
}
