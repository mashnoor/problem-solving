#include<iostream>
#include<vector>

using namespace std;

void sortColors(vector<int>& nums)
{
    int cnt[3] = {0, 0, 0};
    for(int i=0; i<nums.size(); i++)
    {
        int val = nums[i];
        cnt[val]++;
    }

    // for(int i = 0; i<3; i++) cout<<cnt[i]<<" ";

    for(int i = 0; i<nums.size(); i++)
    {
        if(cnt[0] > 0)
        {
            nums[i] = 0;
            cnt[0]--;
        }
        else if(cnt[1] > 0)
        {
            nums[i] = 1;
            cnt[1]--;
        }
        else if(cnt[2] > 0)
        {
            nums[i] = 2;
            cnt[2]--;
        }
    }
        
}

int main()
{

    vector<int> v = {2, 0, 2, 1, 1, 0};
    sortColors(v);

    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}