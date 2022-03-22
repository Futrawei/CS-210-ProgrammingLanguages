#include <iostream>
using namespace std;

class GamePoints {
   public:
      GamePoints();
      void Start() const;

   private:
      int teamWhales;
      int teamDogs;
};

GamePoints::GamePoints() :teamWhales(1000), teamDogs(1000){
}

void GamePoints::Start() const {
   cout << "Game started: Whales " << teamWhales << " - " << teamDogs << " Dogs" << endl;
}

int main() {
   GamePoints myGame;

   myGame.Start();

   return 0;
}
