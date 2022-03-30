#include <iostream>
#include <vector>
#include <map>

using namespace std;
int firstMissingPositive(vector<int>& nums) 
{
    int l = nums.size();
    int sm = 1;
    map<int, bool> m;
    for(int i = 0; i<l; i++)
    {
        // m[nums[i]] = true;
        m.insert({nums[i], true});
        if(nums[i] == sm)
        {
            sm ++;
            
        }
        
    }
    while(m.find(sm) != m.end())
    {
        sm ++;        
    }


    
    return sm;
        
}
int main()
{
    vector<int> v = {1,2,3,6,5,4};
    cout<<firstMissingPositive(v)<<endl;



    return 0;
}