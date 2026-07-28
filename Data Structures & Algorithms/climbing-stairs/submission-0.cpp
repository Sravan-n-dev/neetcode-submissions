class Solution {
public:
    vector<int>dp=vector<int>(46,-1);
    
    int climbStairs(int n) {
        
        if(n==0)return 0;
        if(n==1 || n == 2) {
            return n;
        }
        if(dp[n]==-1){
        dp[n]=climbStairs(n-1)+climbStairs(n-2);
        }
        return dp[n];
        
    }
};
