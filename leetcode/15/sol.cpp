#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) 
{
    unordered_map<int, int> cnt;
    vector<vector<int>> res; 
    for(int i = 0; i<nums.size(); i++)
    {
        cnt[nums[i]] = cnt.count(nums[i]) - 1;
        int target = -nums[i];
        for(int j = 0;j<nums.size(); j++)
        {
            if(i == j) continue;
            int v = target - nums[j];
            if(cnt.count(v) > 0)
            {
                vector<int>curr{nums[i], nums[j], v};
                res.push_back(curr);
            }
            cnt[nums[j]] += cnt.count(nums[j]) + 1;

        }
        cnt[nums[i]] = cnt.count(nums[i]) + 1;
    }

    return res;
    
        
}
int main()
{
    unordered_map<int, int> p;
    // p[1] = 2;
   p[1] += p.count(1);


    return 0;

}

   