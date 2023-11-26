#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
        sort(piles.begin(), piles.end());
        int can_take = piles.size()/3;
        int l = piles.size();
        int j = 2;
        int res = 0;
        while (can_take--)
        {
            res += piles[l-j];
            j += 2;
                        
        }


        return res;
        
    }
};