#include <iostream>
#include <algorithm>
using namespace std;

int reductionOperations(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    int current_val = nums[nums.size() - 1];
    int steps = 0;
    for(int i = nums.size() - 1; i>=0; i--)
    {
        int val = nums[i];
        if(current_val!=val)
        {
            steps += (nums.size() - 1) - i;
            
        }
        current_val = val;
    }

    return steps;

}