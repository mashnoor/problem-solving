#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

//      
//     vector<int> getSumAbsoluteDifferences(vector<int>& nums) 
//     {
//         vector<int> cumsum;
//         vector<int> result;
//         cumsum.push_back(nums[0]);
//         int l = nums.size() - 1;
//         for(int i = 1; i<=l;i++)
//         {
//             int v = cumsum[i-1] + nums[i];
//             cumsum.push_back(v);
//         }

//         for(int i = 0; i<=l; i++)
//         {
//             int p1 = cumsum[l] - cumsum[i];
//             int p2 = cumsum[i] - nums[i];
//             int p3 = nums[i] * (2*i - l);

//             int r = p1 - p2 + p3;
//             result.push_back(r);
//         }

//         return result;



                
//     }
// };

int main()
{
    Solution s;
    vector<int> inp{24,15,13,15,21};
    vector<int> res = s.getSumAbsoluteDifferences(inp);

    for(int i = 0; i<res.size(); i++)
    {
        cout<<res[i]<<" ";
    }



    



    return 0;
}