#include <iostream>
using namespace std;

class CarCounter {
   public:
      CarCounter();
      CarCounter(const CarCounter& origCarCounter);
      void SetCarCount(const int count) {
          carCount = count;
      }
      int GetCarCount() const {
          return carCount;
      }
   private:
      int carCount;
};

CarCounter::CarCounter() {
   carCount = 0;
}

// FIXME add copy constructor
CarCounter::CarCounter(const CarCounter &origCarCounter) {
   carCount = origCarCounter.GetCarCount();
}
void CountPrinter(CarCounter carCntr) {
   cout << "Cars counted: " << carCntr.GetCarCount();
}

int main() {
   CarCounter parkingLot;
   int count;

   cin >> count;

   parkingLot.SetCarCount(count);
   CountPrinter(parkingLot);

   return 0;
}
