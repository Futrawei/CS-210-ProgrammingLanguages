#include <iostream>

using namespace std;

int main() {

string name; 

int number;

cin >> name >> number; 

while(number != 0) {

cout << "Eating " << number << " " << name << " a day keeps you happy and healthy." << endl;
cin >> name >> number;

}

}
