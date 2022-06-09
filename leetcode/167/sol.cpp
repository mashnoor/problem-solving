#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target)
{
    unordered_map<int, bool> mp;
    vector<int> res;
    int idx1, idx2;
    int opp;
    for(int i = 0; i<numbers.size(); i++)
    {
        opp = target - numbers[i];
        if(mp.find(opp) != mp.end())
        {
            idx1 = i;
            break;
        }
        mp[numbers[i]] = true;

    }
    for(int i = 0; i<numbers.size();i++)
    {
        if(numbers[i] == opp)
        {
            idx2 = i;
            break;
        }
    }

    res.push_back(idx2+1);
    res.push_back(idx1+1);

    return res;
     
}


int main()
{



    return 0;
}