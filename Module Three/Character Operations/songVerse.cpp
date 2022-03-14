#include <iostream>
#include <string>
using namespace std;

int main() {
   string userName;
   string songVerse;

   getline(cin, userName);
   userName = userName.substr(1, userName.size() - 1);  // Remove first character

   getline(cin, songVerse);

   // Modify songVerse to replace (Name) with userName without first character
   int i = songVerse.find("(Name)",0);
   songVerse = songVerse.substr(0, i-0) + userName + songVerse.substr(i+6, songVerse.length()-1);


   cout << songVerse << endl;

   return 0;
}
