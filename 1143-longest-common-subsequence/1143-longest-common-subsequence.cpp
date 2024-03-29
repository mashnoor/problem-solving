class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) 
    {
        int m = text1.length(), n = text2.length();
        int dp[m+1][n+1];
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i<=m; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                if(text1[i-1] == text2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        
        return dp[m][n];
        
    }
};
auto init = []() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();