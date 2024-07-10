class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
        stack<string> stk;
        for(string lg : logs)
        {
            if(lg == "../" && !stk.empty())
            {
                stk.pop();
            }
            else if(lg == "../" && stk.empty())
            {
                continue;
            }
            
            else if(lg == "./")
            {
                continue;
            }
            else
            {
                stk.push(lg);                
            }
        }
        
        return stk.size();
        
    }
};