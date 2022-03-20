#include <iostream>
using namespace std;



int NumberOfPennies(int dollars, int pennies = 0)
{
    int totalPennies = (dollars * 100) + pennies;
    return  totalPennies;
}

int main() {
   cout << NumberOfPennies(5, 6) << endl; // Should print 506
   cout << NumberOfPennies(4) << endl;    // Should print 400
   return 0;
}
