#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maxProfit(vector<int>& prices)
{
    unordered_map<int, int> mp;
    int cmax = prices[prices.size()-1]-1;
    for(int i = prices.size()-1; i>=0; i--)
    {
        if(prices[i]>cmax)
        {
            cmax = prices[i];
        }

        mp[i] = cmax;
    }

    int mxp = 0;
    for(int i = 0; i<prices.size(); i++)
    {
        if(mp[i] - prices[i] > mxp)
        {
            mxp = mp[i] - prices[i];
        }

    }

    return mxp;
        
}




// Alternate
int maxProfit(vector<int>& prices)
{
    int min = INT32_MAX;
    int prof = 0;
    for(int i = 0;i<prices.size(); i++)
    {
        if(prices[i]<min)
        {
            min = prices[i];
        }

        if(prices[i] - min > prof)
        {
            prof = prices[i] - min;
        }
    }

    return prof;
        
}



int main()
{


    return 0;
}