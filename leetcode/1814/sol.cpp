#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    void printVector(vector<int> v)
    {
        for(auto x : v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    unsigned long long div_val = pow(10,9) + 7;
    int reverse(int n)
    {
        int v = 0;
        while (n!=0)
        {
            v*=10;
            v += n%10;
            n/=10;
        }

        return v;
        
    }
    int countNicePairs(vector<int>& nums) 
    {
        unordered_map<int, int> cnt;
        vector<int> revs;
        for(auto elem : nums)
        {
            revs.push_back(reverse(elem));
        }
        // printVector(revs);

        for(int i = 0; i<nums.size(); i++)
        {
            int diff = nums[i] - revs[i];
            // cout<<diff<<" ";
            // cnt[diff] = cnt.count(diff) + 1;
            if(cnt.find(diff) == cnt.end()) cnt[diff] = 1;
            else cnt[diff]++;
        }
        // cout<<endl;

        unsigned long long result = 0;

        for(auto const& x : cnt)
        {
            if(x.second >= 2)
            {
                // cout<<x.first<<" "<<x.second<<endl;
                int n = x.second;
                unsigned long long a, b;
                if(n%2 == 0) 
                {
                    a = n/2;
                    b = n-1;
                } 
                else
                {
                    a = n;
                    b = (n-1)/2;
                }
                // cout<<a<<" "<<b<<endl;
                a = a % div_val;
                b = b % div_val;
                unsigned long long res = (long long)(a*b) % div_val;
                

                result += res;
                result %= div_val;
            }
        }


        return result % div_val;
        
    }
};


int main()
{

    vector<int> v{42,11,1,97};
    Solution s;
    cout<<s.countNicePairs(v);



    return 0;
}