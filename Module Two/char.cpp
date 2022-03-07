#include <iostream>
using namespace std;

int main() {
   char a;
   char b;
   char c;

   cin >> a;
   cin >> b;
   cin >> c;
   
  cout << a << b << c << " ";
  cout << a << c << b << " ";
  cout << b << a << c << " ";
  cout << b << c << a << " ";
  cout << c << a << b << " ";
  cout << c << b << a << "";

   cout << endl;

   return 0;
}
