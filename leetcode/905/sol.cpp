#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums)
{
    vector<int> res, odd;
    for(int i = 0; i<nums.size(); i++)
    {
        if(nums[i]%2 == 0)
        {
            res.push_back(nums[i]);
        }
        else
        {
            odd.push_back(nums[i]);
        }
    }

    for(int i = 0; i<odd.size(); i++)
    {
        res.push_back(odd[i]);
    }

    return res;
        
}


int main()
{



    return 0;
}