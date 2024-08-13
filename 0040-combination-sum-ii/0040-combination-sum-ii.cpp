class Solution {
public:
    vector<vector<int>> result;
    
    void dfs(int sum, vector<int> values, int j, int target, vector<int>& candidates)
    {
        if(sum > target) return;
        if(sum == target)
        {
            result.push_back(values);
            return;
        }
        
        for(int i = j; i<candidates.size(); i++)
        {
            if (i > j && candidates[i] == candidates[i-1]) continue;
            if(sum+candidates[i] > target) break;
            values.push_back(candidates[i]);
            dfs(sum+candidates[i], values, i+1, target, candidates);
            values.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(), candidates.end());
        dfs(0, {}, 0, target, candidates);
        
        // vector<vector<int>>  result (all_combinations.begin(), all_combinations.end());
        
        return result;
        
    }
};