#include <iostream>
using namespace std;

void OutputMinutesAsHours(double origMinutes) {
   double hours = origMinutes / 60.0;
   cout << hours;

}

int main() {
   double minutes;

   cin >> minutes;

   OutputMinutesAsHours(minutes); // Will be run with 210.0, 3600.0, and 0.0.
   cout << endl;

   return 0;
}
