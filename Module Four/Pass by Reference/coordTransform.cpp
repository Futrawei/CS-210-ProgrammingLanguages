#include <iostream>
using namespace std;

void CoordTransform(int xval, int yval, int &xValNew, int &yValNew){
	xValNew = (xval + 1) * 2;
	yValNew = (yval + 1) * 2;
}

int main() {
   int xValNew;
   int yValNew;
   int xValUser;
   int yValUser;

   cin >> xValUser;
   cin >> yValUser;

   CoordTransform(xValUser, yValUser, xValNew, yValNew);
   cout << "(" << xValUser << ", " << yValUser << ") becomes (" << xValNew << ", " << yValNew << ")" << endl;

   return 0;
}
