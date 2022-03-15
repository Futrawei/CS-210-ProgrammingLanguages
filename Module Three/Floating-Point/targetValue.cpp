#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double targetValue;
   double sensorReading;

   cin >> targetValue;
   cin >> sensorReading;

   if (fabs(sensorReading - targetValue) < 0.3333) {
      cout << "Equal" << endl;
   }
   else {
      cout << "Not equal" << endl;
   }

   return 0;
}
