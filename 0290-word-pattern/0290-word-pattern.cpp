class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        int total_spaces = 0;
        for(int i = 0; i<s.size();i++)
        {
            if(s[i] == ' ')
            {
                total_spaces += 1;
            }
        }
        if(total_spaces+1 != pattern.size())
        {
            return false;
        }
        
        string curr_word = "";
        unordered_map<char, string> pmap;
        unordered_map<string, char> smap;
        
        int j = 0;
        s = s + ' ';
        
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] != ' ') curr_word+=s[i];
            else
            {
                if(pmap.find(pattern[j]) == pmap.end()) 
                {
                    if(smap.find(curr_word) != smap.end()) return false;
                    else
                    {
                        pmap[pattern[j]] = curr_word;
                        smap[curr_word] = pattern[j];
 
                    }
                    
                }
                else
                {
                    string prev_word = pmap[pattern[j]];
                    char prev_char = smap[curr_word];
                    
                    if(prev_word != curr_word || prev_char != pattern[j])
                    {
                        // cout<<prev_word<<" "<<curr_word<<" "<<prev_char<<" "<<pattern[j];
                        return false;
                    }
                }
            
                j += 1;
                curr_word = "";
            }
            
        }
        
        
        return true;
    }
};