#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
   double sphereVolume;
   double sphereRadius;

   cin >> sphereRadius;
   double sphere = sphereRadius * sphereRadius * sphereRadius;
   sphereVolume = (4.0 / 3.0) * sphere * 3.14159;
   cout << fixed << setprecision(2) << sphereVolume << endl;

   return 0;
}
