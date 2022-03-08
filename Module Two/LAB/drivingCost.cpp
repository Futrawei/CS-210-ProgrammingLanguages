#include <iostream>

#include<iomanip>

using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon)

{

  double dollarCost = 0;

  dollarCost = (dollarsPerGallon * drivenMiles) / milesPerGallon;

  return dollarCost;

}

int main()

{

  double miles = 0;

  double dollars = 0;
  cin >> miles;

  cin >> dollars;

  cout << fixed << setprecision(2);

  cout << DrivingCost(20, miles, dollars) << " ";

  cout << DrivingCost(75, miles, dollars) << " ";

  cout << DrivingCost(500, miles, dollars) << endl;

  return 0;

}
