#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums)
{
    int currSum = 0;
    vector<int> rs;
    for(int i = 0; i<nums.size(); i++)
    {
        currSum += nums[i];
        rs.push_back(currSum);
    }

    return rs

}
int main()
{



    return 0;
}