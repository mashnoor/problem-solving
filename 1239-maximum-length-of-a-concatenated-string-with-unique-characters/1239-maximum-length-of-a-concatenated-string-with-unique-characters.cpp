class Solution {
public:
    bool not_overlap(string& s1, string& s2)
    {
        int mp[26] = {0};
        for(auto& c : s1)
        {
            int v = c - 'a';
            mp[v]++;
        }
        for(auto& c : s2)
        {
            int v = c - 'a';
            mp[v]++;
        }
        for(auto& v: mp)
        {
            if(v > 1) return false;
        }
        
        return true;
    }
    
    int bt(vector<string>& arr, int i, string  s)
    {
        if(i == arr.size()) return s.length();
        string sn = "";
        if(not_overlap(arr[i], s))
        {
            sn = s + arr[i];
            return max(bt(arr, i+1, s), bt(arr, i+1, sn));
        }
        else
        {
            return bt(arr, i+1, s);
        }
        
        
    }
    int maxLength(vector<string>& arr) 
    {
        return bt(arr, 0, "");
        
    }
};