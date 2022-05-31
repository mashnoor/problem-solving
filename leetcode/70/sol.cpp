#include<iostream>

using namespace std;

int climbStairs(int n)
{
    int dp[50];
    for(int i = 0; i<50; i++) dp[i] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    for(int i = 4; i<=45; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
        
    
}

int main()
{


    return 0;
}