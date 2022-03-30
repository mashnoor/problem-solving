#include <iostream>
#include <vector>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // bool isValid = false;
  int j = 0;
  int c = 0;
  for(int i = 0; i<sequence.size(); i++)
  {
    for(;j<array.size();)
    {
      if(array[j] == sequence[i])
      {
        c++;
        j+=1;
        break;
      }
      j+=1;

    }

  }
  if (c == sequence.size())
  {
    return true;
  }

  return false;
}

int main()
{
  vector<int> v1 = {5, 1, 22, 25, 6, -1, 8, 10};
  vector<int> v2 = {1,6,-1,-1,10};

  cout<<isValidSubsequence(v1, v2);
  
  return 0;
}