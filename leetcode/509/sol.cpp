#include <iostream>

using namespace std;


int dp[31];
int fib2(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;

    if(dp[n] == -1)
    {
        dp[n] = fib2(n-1) + fib2(n-2);
    }

    return dp[n];
}
int fib(int n) 
{
    memset(dp, -1, sizeof(dp));
    return fib2(n);
    
        
}

int main()
{

    cout<<fib(5);
    return 0;
}