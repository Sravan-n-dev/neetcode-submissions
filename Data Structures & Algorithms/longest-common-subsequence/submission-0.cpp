class Solution {
public:
    int solve(string& text1, string& text2, int n, int m,
              vector<vector<int>>& dp) {

        // Base case
        if(n == 0 || m == 0) {
            return 0;
        }

        // Already calculated
        if(dp[n][m] != -1) {
            return dp[n][m];
        }

        // Characters match
        if(text1[n-1] == text2[m-1]) {
            return dp[n][m] =
                1 + solve(text1, text2, n-1, m-1, dp);
        }

        // Characters don't match
        return dp[n][m] =
            max(
                solve(text1, text2, n-1, m, dp),
                solve(text1, text2, n, m-1, dp)
            );
    }

    int longestCommonSubsequence(string text1, string text2) {

        int n = text1.size();
        int m = text2.size();

        vector<vector<int>> dp(
            n + 1,
            vector<int>(m + 1, -1)
        );

        return solve(text1, text2, n, m, dp);
    }
};