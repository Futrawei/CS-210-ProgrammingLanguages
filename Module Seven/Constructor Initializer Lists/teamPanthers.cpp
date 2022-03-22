#include <iostream>
using namespace std;

class GamePoints {
   public:
      GamePoints();
      void Start() const;

   private:
      int teamPanthers;
      int teamGorillas;
};

GamePoints::GamePoints() {

teamPanthers = 100;
teamGorillas = 100;


}

void GamePoints::Start() const {
   cout << "Game started: Panthers " << teamPanthers << " - " << teamGorillas << " Gorillas" << endl;
}

int main() {
   GamePoints myGame;

   myGame.Start();

   return 0;
}
