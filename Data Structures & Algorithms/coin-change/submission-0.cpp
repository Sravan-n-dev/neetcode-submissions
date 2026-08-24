class Solution {
public:
    int solve(int idx, vector<int>& coins, int amount, vector<vector<int>>& dp) {
        // Base case 1: We successfully made the exact amount
        if (amount == 0) return 0;
        
        // Base case 2: We ran out of coins but still have amount left
        if (idx < 0) return 1e9; 

        // Return memoized result if already computed
        if (dp[idx][amount] != -1) return dp[idx][amount];

        // Choice 1: Skip this coin and move to the next one (idx - 1)
        int skip = 0 + solve(idx - 1, coins, amount, dp);

        // Choice 2: Take this coin (if it fits in the remaining amount)
        int take = 1e9;
        if (coins[idx] <= amount) {
            // Notice we pass 'idx' (NOT idx - 1) because we can use the same coin multiple times
            take = 1 + solve(idx, coins, amount - coins[idx], dp);
        }

        // Store and return the minimum of the two choices
        return dp[idx][amount] = min(take, skip);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        
        // DP table dimensions: n rows (for indices 0 to n-1) x (amount + 1) columns
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        
        // Start from the last coin index (n - 1)
        int ans = solve(n - 1, coins, amount, dp);
        
        // If the answer is still our "infinity" value, it's impossible to make the amount
        return ans >= 1e9 ? -1 : ans;
    }
};