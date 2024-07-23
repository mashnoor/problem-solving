class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        int mem[202];
        memset(mem, 0, sizeof(mem));
        for(auto n : nums)
        {
            mem[n+100]++;
        }
        
        vector<pair<int, int>> cnts;
        
        for(int i = 0; i <202; i++)
        {
            if(mem[i] != 0)
            {
                cnts.emplace_back(i-100, mem[i]);
            }
        }
        
        sort(cnts.begin(), cnts.end(), [](const pair<int, int>& a, const pair<int, int>& b)
        {
            if (a.second < b.second) return true;
            if (a.second > b.second) return false;
            return a.first > b.first;
        });
        
        vector<int> result;
        
        // Reconstruct the sorted array
        for (const auto& p : cnts) {
            for (int i = 0; i < p.second; ++i) {
                result.push_back(p.first);
            }
        }
        
        return result;
    }
};