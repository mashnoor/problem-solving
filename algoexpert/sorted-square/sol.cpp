#include <vector>
#include <stack>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  vector<int> v;
  for(int i = 0; i<array.size(); i++)
  {
      v.push_back(array[i] * array[i]);
  }
  return v;
}


int main()
{


    return 0;
}