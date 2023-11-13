class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
       if(s.length() <=1 ) return false;
    int i = 0;
    string curr_ss = "";
    while (i < s.length()-1)
    {
        
        curr_ss += s[i];
        if(s.length() % curr_ss.length() == 0)
        {
            string comp_s = "";
            while(comp_s.length() < s.length())
            {
                comp_s += curr_ss;
            }
            if(comp_s.compare(s) == 0)
            {
                return true;
            }
        }

        i++;
    
    }

    return false; 
    }
};