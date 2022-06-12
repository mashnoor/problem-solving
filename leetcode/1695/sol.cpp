#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int maximumUniqueSubarray(vector<int>& nums)
{
    unordered_map<int, int> mp;
    // int i = 0;
    int mxsum = 0;
    int currSum = 0;
    int window_start = -1;
    // while(i<nums.size())
    // {
    //     int currentNum = nums[i];
    //     // cout<<window_start<<endl;
        
    //     if(mp.find(currentNum) != mp.end() && mp[currentNum] != i)
    //     {
    //         //reset
    //         i = mp[currentNum] + 1;
    //         // window_start = mp[currentNum] + 1;
    //         currSum = 0;
    //         mp.clear();
    //         // cout<<"Resetting i = "<<i-1<<"Curr num = "<<currentNum<<endl;
    //         // cout<<"Skipping "<<currentNum<<endl;
    //         // cout<<"MP - "<<currentNum<<"="<<mp[currentNum]<<endl;
    //     }
    //     else
    //     {
    //         currSum += currentNum;
    //         if(mxsum < currSum)
    //         {
    //             mxsum = currSum;
    //         }
    //         mp[currentNum] = i;
    //         // cout<<currentNum<<endl;
    //         i++;
    //     }

        

    // }
    // cout<<mxsum;

    int mem[nums.size()];
    for(int i = 0; i<nums.size(); i++)
    {
        int currentNum = nums[i];
        
        if(mp.find(currentNum) != mp.end() && mp[currentNum] != i && mp[currentNum] > window_start)
        {
            
            currSum = (currentNum +  mem[i-1]) - mem[mp[currentNum]];
            cout<<"i = "<<i<<" curr num = "<<currentNum<<" Found = "<<mem[i]<<endl;
            window_start = mp[currentNum];
            cout<<"Window = "<<window_start<<endl;
            mp.erase(currentNum);
            
        }
        else
        {
            if(i == 0) mem[i] = currentNum;
            else mem[i] = currentNum + mem[i-1];
            mp[currentNum] = i;
        }
    }


    for(int i = 0; i<nums.size(); i++)
    {
        cout<<mem[i]<<endl;
    }

    return -1;
    
        
}



int main()
{
    // vector<int> v = {4,2,4,5,6};
    // vector<int> v = {5,1,5,1,1,1,1,1,1};
    vector<int> v = {1,2,3,1,2,3,4,5,6};
    // vector<int> v = {187,470,25,436,538,809,441,167,477,110,275,133,666,345,411,459,490,266,987,965,429,166,809,340,467,318,125,165,809,610,31,585,970,306,42,189,169,743,78,810,70,382,367,490,787,670,476,278,775,673,299,19,893,817,971,458,409,886,434};

    maximumUniqueSubarray(v);


    return 0;
}