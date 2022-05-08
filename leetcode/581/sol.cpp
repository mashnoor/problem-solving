#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findUnsortedSubarray(vector<int>& nums)
{
    vector<int> nnums = nums;
    sort(nnums.begin(), nnums.end());

    int i = 0, j = 0;
    for (int k = 0;k<nums.size(); k++)
    {
        if(nums[k] != nnums[k])
        {
            i = k;
            break;
        }
    }

    for (int k = nums.size()-1;k>=0; k--)
    {
        if(nums[k]!=nnums[k])
        {
            j = k;
            break;
        }
    }

    if(i == j) return 0;
    else return j - i + 1;
        
}

int main()
{



    return 0;
}