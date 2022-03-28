#include <iostream>
using namespace std;

class CarCounter {
   public:
      CarCounter();
      ~CarCounter();
   private:
      int carCount;
};

CarCounter::CarCounter() {
   carCount = 0;
}
// This is a destructor for CarCounter
CarCounter::~CarCounter() {
   cout << "Destroying CarCounter" << endl;
}

int main() {
   CarCounter* parkingLot = new CarCounter();
   delete parkingLot;

   return 0;
}
