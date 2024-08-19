class Solution {
public:
    int minSteps(int n) {
        if (n == 1) return 0; // No operation is needed if n is 1

        int dp[n + 1];
        for (int i = 0; i <= n; ++i) {
            dp[i] = i; // Initialize dp array where the worst case is i operations
        }
        
        for (int i = 2; i <= n; ++i) {
            for (int j = i - 1; j > 1; --j) {
                if (i % j == 0) { 
                    dp[i] = dp[j] + (i / j); // dp[j] + (i/j) paste operations
                    break;
                }
            }
        }
        
        return dp[n];
    }
};
