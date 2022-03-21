#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec)
{
  int n = myVec.size();
  int i, j;
  for (i = 0; i < n - 1; i++)
    for (j = 0; j < n - i - 1; j++)
      if (myVec[j] > myVec[j + 1])
      {
        int temp = myVec[j];
        myVec[j] = myVec[j + 1];
        myVec[j + 1] = temp;
      }
}

int main() {
     int i, n, value;
  cin >> n;
  vector<int> myVec;

  for (i = 0; i < n; i++)
  {
    cin >> value;
    myVec.push_back(value);
  }
  SortVector(myVec);
  for (i = 0; i < n; i++)
  cout << myVec[i] << " ";
  cout << '\n';

   return 0;
}
