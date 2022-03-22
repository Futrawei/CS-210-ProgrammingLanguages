#include <iostream>
using namespace std;

class FamilyVacation {
   public:
      void  SetNumDays(int dayCount);
      void  SetNumPeople(int peopleCount);
      void  Print() const;
      FamilyVacation operator+(int moreDays);
   private:
      int   numDays;
      int   numPeople;
};

void FamilyVacation::SetNumDays(int dayCount) {
   numDays = dayCount;
}

void FamilyVacation::SetNumPeople(int peopleCount) {
   numPeople = peopleCount;
}

// FIXME: Overload + operator so can write newVacation = oldVacation + 5,
//        which adds 5 to numDays, while just copying numPeople.

FamilyVacation FamilyVacation:: operator+(int moreDays){
numDays=this->numDays+moreDays; 
return *this; 
}

void FamilyVacation::Print() const {
   cout << "Days: " << numDays << ", People: " << numPeople << endl;
}

int main() {
   FamilyVacation firstVacation;
   FamilyVacation secondVacation;
   int userDays;
   int userPeople;

   cin >> userDays;
   cin >> userPeople;

   cout << "First vacation: ";
   firstVacation.SetNumDays(userDays);
   firstVacation.SetNumPeople(userPeople);
   firstVacation.Print();

   cout << "Second vacation: ";
   secondVacation = firstVacation + 5;
   secondVacation.Print();

   return 0;
}
