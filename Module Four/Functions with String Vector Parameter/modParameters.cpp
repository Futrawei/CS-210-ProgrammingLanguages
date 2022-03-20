#include <iostream>
#include <string>
using namespace std;

void MakeSentenceExcited(string& sentenceText) {

	for (int i = 0; i < sentenceText.length(); i++){
		if (sentenceText.at(i) == '.'){
			sentenceText.at(i) = '!';
		}
	}
return;

}

int main() {
   string testStr;

   getline(cin, testStr);
   MakeSentenceExcited(testStr);
   cout << testStr;

   return 0;
}
