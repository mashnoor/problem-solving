class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int ans;
        int cnt = 0;
        for(const int num : nums)
        {
            if(cnt == 0)
            {
                ans = num;
            }
            if(num != ans)
                cnt--;
            else
                cnt++;
            
        }
        
        return ans;
        
        
    }
};