class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        vector<int> res;
        unordered_map<int, int> mp;
        for(auto i : nums)
        {
            mp[i]++;            
        }
        
        int t = -1, m = -1;
        for(int i = 1; i<=nums.size(); i++)
        {
            if(mp[i] == 0) t = i;
            if(mp[i] > 1) m = i;
            
            if(t!=-1 && m!=-1)
            {
                res.push_back(m);
                res.push_back(t);
                
                break;
            }
            
        }
        
        return res;
        
    }
};