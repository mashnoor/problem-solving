#include<bits/c++locale.h>
#include<vector>
#include<iostream>
#include<algorithm>
using  namespace std;

int lis(vector<int> v, int i)
{
    
    int ans = 0;
    for(int j = i-1; j>=0; j--)
    {
       if(v[i] > v[j])
       ans = max(ans, lis(v, j));
    }

    return ans + 1;
}

int main()
{

    vector<int> v = {1,3,6,7,9,4,10,5,6};
     int ans = 0;
    for(int i = v.size(); i>=0; i--)
        ans = max(ans, lis(v, i));


    cout<<ans;

    return 0;
}

