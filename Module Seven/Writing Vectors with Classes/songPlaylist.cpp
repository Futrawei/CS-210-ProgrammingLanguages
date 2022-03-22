#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song {
   public:
      void SetDurationAndName(int songDuration, string songName) {
         duration = songDuration;
         name = songName;
      }
      void PrintSong() const {
         cout << duration << " - " << name << endl;
      }
      int GetDuration() const { return duration; }
      string GetName() const { return name; }

   private:
      int duration;
      string name;
};

int main() {
   vector<Song> songPlaylist;
   Song currSong;
   int currDuration;
   string currName;
   unsigned int i;

   cin >> currDuration;
   while (currDuration >= 0) {
   
      getline(cin,currName);
      currSong.SetDurationAndName(currDuration,currName);      
      songPlaylist.push_back(currSong);

      cin >> currDuration;
   }

   for (i = 0; i < songPlaylist.size(); ++i) {
      currSong = songPlaylist.at(i);
      currSong.PrintSong();
   }

   return 0;
}
