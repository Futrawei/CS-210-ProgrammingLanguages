#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) {

  double dollarCost = 0;

  dollarCost = (dollarsPerGallon * drivenMiles) / milesPerGallon;

  return dollarCost;

}

int main() {
   
  double miles = 0;

  double dollars = 0;

  cin >> miles;

  cin >> dollars;

  cout << fixed << setprecision(2);
 
  cout << DrivingCost(10, miles, dollars); 
  cout << " ";
  cout << DrivingCost(50, miles, dollars); 
  cout << " ";
  cout << DrivingCost(400, miles, dollars) << endl;

   return 0;
}
