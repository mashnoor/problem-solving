class Solution {
public:
    
    bool is_vowel(char c)
    {
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        {
            return true;
        }

        return false;
    }
    string sortVowels(string s) 
    {
        
         string vow;
        for(int i = 0; i<s.length(); i++)
        {
            if(is_vowel(s[i])) vow += s[i];

        }

        sort(vow.begin(), vow.end());
        int j = 0;
        for(int i =0; i<s.length();i++)
        {
            if(is_vowel(s[i]))
            {
                s[i] = vow[j];
                j++;
            }
        }

        return s;        
    }
};