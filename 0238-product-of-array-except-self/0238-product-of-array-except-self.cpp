class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        
        int pre[nums.size()];
        int post[nums.size()];

        vector<int> result;

        pre[0] = nums[0];
        post[nums.size() - 1] = nums[nums.size() - 1];
        for(int i = 1; i<nums.size(); i++)
        {
            pre[i] = nums[i] * pre[i-1];
        }

        for(int i = nums.size() - 2; i>= 0 ; i--)
        {
            post[i] = nums[i] * post[i+1];
        }

        for(int i = 0; i<nums.size(); i++)
        {
            if(i == 0)
            {
                result.push_back(post[i+1]);
            }
            else if (i == nums.size() - 1)
            {
                result.push_back(pre[i-1]);        
            }
            else
            {
                result.push_back(pre[i-1] * post[i+1]);
            }



        }

        return result;
    }
};