class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
       int depth = 0;
        for(string lg : logs)
        {
            if (lg == "../") 
            {
                if (depth > 0) 
                {
                    depth--;
                }
            } 
            else if (lg != "./") 
            {
                depth++;
            }
        }
        return depth;
        
    }
};