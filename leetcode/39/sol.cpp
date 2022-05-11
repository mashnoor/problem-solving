#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> combinationSum(vector<int>& candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> final_result;
    for(int i = 0; i<candidates.size(); i++)
    {
        int val = candidates[i];
        int sum = target;
        while(sum >= 0)
        {
            
        }


    }     
}

int main()
{


    return 0;
}