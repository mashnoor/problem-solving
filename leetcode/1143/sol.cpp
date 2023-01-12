#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
int dp[1001][1001];
int lcs(string txt1, string txt2, int m, int n)
{
    if(m == -1 || n == -1) return 0;
    if(txt1[m] == txt2[n])
    {
        if(dp[m][n] == -1)
        dp[m][n] = 1 + lcs(txt1, txt2, m-1, n-1);
    }
    else
    {
        if(dp[m][n] == -1)
        dp[m][n] =  max(lcs(txt1, txt2, m-1, n), lcs(txt1, txt2, m, n-1));
    }

    return dp[m][n];
}

int llcs(string txt1, string txt2)
{
    return lcs(txt1, txt2, txt1.size()-1, txt2.size()-1);
}


int main()
{
    memset(dp, -1, sizeof(dp));
    string txt1 = "", txt2 = "";
    cout<<llcs(txt1, txt2);





    return 0;
}