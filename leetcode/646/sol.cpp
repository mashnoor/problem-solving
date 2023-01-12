#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool custSort(vector<int>& left, vector<int>& right)
{
    if(right[0] > left[1]) return true;
    return false;
}

int findLong(vector<vector<int>>& pairs, int i)
{
    if(i == 0) return 1;
    vector<int> nowPair = pairs[i];
    int prevLong = findLong(pairs, i-1);
    if(custSort(pairs[i], pairs[i-1]))
    {
        
        return prevLong + 1;
    }
    else
    {
        return prevLong;
    }


}

int findLongestChain(vector<vector<int>>& pairs)
{
    sort(pairs.begin(), pairs.end(), custSort);
    int ans = 0;
    for(int i = pairs.size() - 1; i>=0; i--)
    {
        ans = max(ans, findLong(pairs, i));        
    }
    return ans;
        
}

int main()
{

    vector<vector<int>> v = {{1,2}, {7,8}, {4,5}};
    cout<<findLongestChain(v);


    return 0;
}