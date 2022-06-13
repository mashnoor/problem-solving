#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int maximumUniqueSubarray(vector<int>& nums)
{
    unordered_map<int, int> mp;
    int totalSum = 0;
    int boundary = -1;
    int allmem[nums.size()];

    for(int i = 0; i<nums.size();i++)
    {
        int currVal = nums[i];
        totalSum += currVal;
        allmem[i] = totalSum;

        if(mp.find(currVal) != mp.end() && mp[currVal] > boundary)
        {
            
        }
        else
        {
            

        }
    }

    
        
}



int main()
{
    // vector<int> v = {4,2,4,5,6};
    // vector<int> v = {5,1,5,1,1,1,1,1,1};
    vector<int> v = {1,2,3,1,2,3,4,5,6};
    // vector<int> v = {187,470,25,436,538,809,441,167,477,110,275,133,666,345,411,459,490,266,987,965,429,166,809,340,467,318,125,165,809,610,31,585,970,306,42,189,169,743,78,810,70,382,367,490,787,670,476,278,775,673,299,19,893,817,971,458,409,886,434};

    maximumUniqueSubarray(v);


    return 0;
}