#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val)
{
    int j = nums.size()-1;
    int i = 0;
    int k = 0;
    for(;i<=j;)
    {
        if(nums[i] == val)
        {
            swap(nums[i], nums[j]);
            j--;
        }
        else
	{
	    i++;
        k++;
	}
    }
    return k;

	        
}
