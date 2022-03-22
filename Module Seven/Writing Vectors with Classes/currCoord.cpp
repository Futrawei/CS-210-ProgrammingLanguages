#include <iostream>
#include <vector>
using namespace std;

class Coordinate {
   public:
      void SetXAndY(int coordinateX, int coordinateY) {
         x = coordinateX;
         y = coordinateY;
      }
      void PrintCoordinate() const {
         cout << x << " - " << y << endl;
      }
      int GetX() const { return x; }
      int GetY() const { return y; }

   private:
      int x;
      int y;
};

int main() {
   vector<Coordinate> criticalPoints;
   Coordinate currCoord;
   int currX;
   int currY;
   unsigned int i;

   cin >> currX;
   cin >> currY;
   while ((currX >= 0) && (currY >= 0)) {
   
   currCoord.SetXAndY(currX,currY);
   criticalPoints.push_back(currCoord);

      cin >> currX;
      cin >> currY;
   }

   for (i = 0; i < criticalPoints.size(); ++i) {
      currCoord = criticalPoints.at(i);
      currCoord.PrintCoordinate();
   }

   return 0;
}
