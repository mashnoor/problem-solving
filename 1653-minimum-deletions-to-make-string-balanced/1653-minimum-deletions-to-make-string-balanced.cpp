class Solution {
public:
    int minimumDeletions(string s) 
    {
        int cnt = 0;
        int numb = 0;
        for(char c : s)
        {
            if(c == 'a')
            {
                if(numb > 0)
                {
                    cnt++;
                    numb--;
                }
            }
            
            else
            {
                numb++;
            }
        }
        
        return cnt;
        
    }
};