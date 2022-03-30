#include <vector>
#include <stack>
#include <cmath>
#include <iostream>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  
 
  vector<int> res;
  int j = -1;
	
  for(int i = 0; i<array.size();)
  {
   
		 if(array[i] < 0)
     {
       j = i;
       i++;
     }
     else
     {
       if(j>=0 && array[i] > abs(array[j]))
       {
        
         res.push_back(array[j] * array[j]);
         j--;

       }
       else
       {
         res.push_back(array[i]*array[i]);
         i++;
       }
     }

      
  }
  while(j >= 0)
  {
    res.push_back(array[j] * array[j]);
    j--;
  }

  return res;


}


int main()
{
    vector<int> v = { -10, -5, 0, 5, 10 };
    vector<int> res = sortedSquaredArray(v);
    for(int i = 0; i<res.size(); i++)
    {
      cout<<res[i]<<endl;
    }

    return 0;
}