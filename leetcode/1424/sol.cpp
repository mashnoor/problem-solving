#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static bool sortPair(pair<int, int> p1, pair<int, int> p2)
    {
        if(p1.first < p2.first) return true;
        if(p1.first > p2.first) return false;
        if(p1.first == p2.first)
        {
            if(p1.second > p2.second) return true;
            else return false;
        }

        return false;
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) 
    {
        vector<int> result;
        vector<pair<int, int>> sum_rows;
        
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = 0; j<nums[i].size(); j++)
            {
                int sum = i+j;
                int row = i;
                sum_rows.push_back(make_pair(sum, row));
            }
            
            
        }

        sort(sum_rows.begin(), sum_rows.end(), sortPair);

        for(int i = 0; i<sum_rows.size(); i++)
        {
            int row = sum_rows[i].second;
            int col = sum_rows[i].first - sum_rows[i].second;
            int val = nums[row][col];
            result.push_back(val);
        }

        return result;        
    }
};



int main()
{

    vector<vector<int>> v;
    v.push_back({1,2,3});
    v.push_back({4,5,6});
    v.push_back({7,8,9});

    Solution s;
    vector<int> res = s.findDiagonalOrder(v);

    for(int i = 0; i<res.size();i++) cout<<res[i]<<" ";
    



    return 0;
}