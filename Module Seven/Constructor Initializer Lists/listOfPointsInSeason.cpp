#include <iostream>
#include <vector>
using namespace std;

class TeamInfo {
   public:
      TeamInfo();
      void PrintGamesInSeason() const;

   private:
      vector<int> listOfPointsInSeason;
};

TeamInfo::TeamInfo() : listOfPointsInSeason(5) {
}

void TeamInfo::PrintGamesInSeason() const {
   cout << "There are " << listOfPointsInSeason.size() << " games in a season." << endl;
}

int main() {
   TeamInfo myTeam;

   myTeam.PrintGamesInSeason();

   return 0;
}
