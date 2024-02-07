class Solution {
public:
    
   int cnt[75];
   
    string frequencySort(string s) 
    {
        memset(cnt, 0, sizeof(cnt));
        for(char c : s) {
            cnt[c - '0']++;
        }
        
        
        sort(s.begin(), s.end(), [this](char a, char b) {
            if(cnt[a - '0'] != cnt[b - '0']) {
                return cnt[a - '0'] > cnt[b - '0'];
            }
            return a < b;
        });
        
        return s;
        
        
    }
};

auto init = []() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();