class Solution {
public:
    int maxDepth(string s) 
    {
        int mx_dpt = 0;
        int d = 0;
        for(auto c : s)
        {
            if(c == '(')
            {
                ++d;
                mx_dpt = max(mx_dpt, d);
            }
            else if(c == ')')
            {
                --d;
            }
        }
        
        return mx_dpt;
        
    }
};