#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) 
    {
        vector<bool> results;
        for(int i = 0; i<l.size(); i++)
        {
            int low = l[i];
            int high = r[i];
            vector<int> tmp;
            tmp.assign(nums.begin() + low, nums.begin() + high);
            sort(tmp.begin(), tmp.end());
            int diff = tmp[1] - tmp[0];
            bool ok = true;
            for(int j = 2; i<tmp.size()-1; j++)
            {
                if((tmp[j+1] - tmp[j]) != diff)
                {
                    ok = false;
                    break;
                }
            }

            results.push_back(ok);

        }

        return results;

                
    }
};


int main()
{



    return 0;
}
