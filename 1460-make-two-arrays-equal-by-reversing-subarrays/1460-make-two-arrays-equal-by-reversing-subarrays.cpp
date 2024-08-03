class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        int target_cnt[1001];
        int arr_cnt[1001];
        memset(target_cnt, 0, sizeof(target_cnt));
        memset(arr_cnt, 0, sizeof(arr_cnt));
        
        for(int i : target)
        {
            
            target_cnt[i]++;
        }
        
        for(int i : arr)
        {
            arr_cnt[i]++;
        }
        
        for(int i = 1; i<1001; i++)
        {
            // cout<<target_cnt[i]<<" "<<arr_cnt[i]<<endl;
            if(target_cnt[i] != arr_cnt[i]) return false;
            
        }
        
        return true;
        
    }
};