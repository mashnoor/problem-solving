#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int, bool> umap;
        for(int i = 0; i<nums.size(); i++)
        {
            if(umap.find(nums[i]) != umap.end())
            {
                return true;
            }
            umap[nums[i]] = true;
        }

        return false;


        
    }
};