#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int numberOfWeakCharacters(vector<vector<int>>& properties)
{
    int mxdef = 0;
    int totalcount = 0;
    sort(properties.begin(), properties.end(), [](const vector<int>& x, const vector<int>& y){
        if(x[0] == y[0])
        {
            return x[1] < y[1];
        }
        else
        {
            return x[0] > y[0];
        }

    });


    for(auto& x : properties)
    {
        if(x[1] < mxdef)
        {
            totalcount++;
        }

        mxdef = max(mxdef, x[1]);
    }

    return totalcount;
        
}

int main()
{



    return 0;
}