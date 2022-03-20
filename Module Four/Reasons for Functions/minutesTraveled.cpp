#include <iostream>
using namespace std;
   
   double MphAndMinutesToMiles(double milesPerHour, double minutesTraveled) {

   return (minutesTraveled / 60.0)*milesPerHour;

   }


int main() {
   double milesPerHour;
   double minutesTraveled;

   cin >> milesPerHour;
   cin >> minutesTraveled;

   cout << "Miles: " << MphAndMinutesToMiles(milesPerHour, minutesTraveled) << endl;

   return 0;
}
