class Solution {
public:
    
    vector<int> merge(vector<int>& left, vector<int>& right)
{
    vector<int> result;
    
    int i = 0, j = 0;
    
    while(i<left.size() && j<right.size())
    {
        if(left[i] < right[j])
        {
            result.push_back(left[i]);
            i++;
        }
        else
        {
            result.push_back(right[j]);
            j++;
        }
    }
    
    while(i<left.size())
    {
        result.push_back(left[i]);
        i++;
    }
    
    while(j<right.size())
    {
        result.push_back(right[j]);
        j++;
    }
    
    return result;
}

vector<int> mergeSort(vector<int>& arr)
{
    if(arr.size() <= 1) return arr;
    
    int l = arr.size();
    int mid = l / 2;
    
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());
    
    vector<int> sl = mergeSort(left);
    vector<int> sr = mergeSort(right);
    
    return merge(sl, sr);
    
    
}
    
    vector<int> sortArray(vector<int>& nums)
    {
        
        return mergeSort(nums);        
        
    }
};