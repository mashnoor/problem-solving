#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int>& nums)
{

    int l = nums.size();
    int sum = l*(l+1);
    sum /= 2;
    for(int i = 0; i<nums.size(); i++)
    {
        sum -= nums[i];

    }

    return sum;
    
}


int main()
{

    vector<int> v = {3, 0, 1};
    cout<<missingNumber(v);


    return 0;
}
