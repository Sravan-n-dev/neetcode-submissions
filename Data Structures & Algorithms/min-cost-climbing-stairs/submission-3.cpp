class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        /*
        base case: if(n==0) return 0;
        if
        
        dp[n] = min(dp[n-1] + cost[i - 1],dp[n-2] + cost[i - 2])
        
        */
        if(n == 2) return min(cost[0],cost[1]);
        vector<int> dp(n+1,0);
        dp[0]=0;
        dp[1]=0;
        for(int i = 2; i <= n; i++) {
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        return dp[n];
        
        
    }
};
