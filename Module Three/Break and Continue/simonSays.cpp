#include <iostream>
#include <string>
using namespace std;

int main() {
   string simonPattern;
   string userPattern;
   int userScore;
   int i;

   userScore = 0;

   cin >> simonPattern;
   cin >> userPattern;
   
   	for(i = 0; i <= simonPattern.size(); i++){
		if(userPattern.at(i) != simonPattern.at(i)){
			break;
		}
		else{
			userScore++;
		}
	}

   cout << "userScore: " << userScore << endl;

   return 0;
}
