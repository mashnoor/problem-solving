class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) 
    {
        vector<pair<int, int>> newmp;
        newmp.reserve(nums.size());
        for(int i = 0; i<nums.size(); i++)
        {
            int num = nums[i];
            string val = to_string(num);
            int ival = 0;
            for(auto c : val)
            {
                int ic = c - '0';
                ival *= 10;
                ival += mapping[ic];
            }
            newmp.emplace_back(ival, i);
        }
        
        sort(newmp.begin(), newmp.end(), [](const pair<int,int>& a, const pair<int,int>& b){
            if(a.first == b.first)
            {
                return a.second < b.second;
            }
            
            return a.first < b.first;
            
        });
        vector<int> result;
        for(int i = 0; i<newmp.size(); i++)
        {
            result.push_back(nums[newmp[i].second]);
        }
        
        return result;
        
    }
};