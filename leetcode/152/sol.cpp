#include<iostream>
#include<vector>

using namespace std;


int maxProduct(vector<int>& nums)
{
    int currMul = 0;
    int currMaxNeg = 1;
    vector<int> results;
    
    for(int i = 0; i<nums.size(); i++)
    {
        if(nums[i] == 0)
        {
            if(currMul <= 0)
            {
                results.push_back(currMul / currMaxNeg);
                currMaxNeg = 1;
            }
        }
        else
        {
            if(nums[i] < 0)
            {
                if(currMaxNeg == 1)
                {
                    currMaxNeg = nums[i];
                }
                else if(nums[i] > currMaxNeg)
                {
                    currMaxNeg = nums[i];
                }
            }

        }

    }

    return maxMul;

}

int main()
{



    return 0;
}