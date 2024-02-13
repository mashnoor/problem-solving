class Solution {
public:
    bool isPalindrom(string s)
    {
        string t = s;
        reverse(t.begin(), t.end());
        
        return t == s;
    }
    string firstPalindrome(vector<string>& words) 
    {
        for(const string s : words)
        {
            if(isPalindrom(s)) return s;
        }
        
        return "";
        
    }
};