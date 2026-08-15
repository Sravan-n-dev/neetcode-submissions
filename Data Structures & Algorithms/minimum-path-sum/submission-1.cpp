class Solution {
public:
    /*
        f(x,y) = min(grid[x][y]+f(x-1,y),grid[x][y]+f(x,y-1));

        f(0,0) = grid[0][0];

        if()



    */
    
    int dp[201][201];
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        if(m == 0 && n == 0){
            return 0;
        }
        

       
        dp[0][0] = grid[0][0];
        
        // the think i neglected is if m == 0 && n == 0 so ..

        // col 
        for(int j = 1; j < n; j++) {
            dp[0][j] = dp[0][j - 1] + grid[0][j];
        }
        //row
        for(int i = 1; i < m; i++) {
            dp[i][0] = dp[i-1][0] + grid[i][0];
        }
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++){
                dp[i][j] = min(grid[i][j]+dp[i-1][j],grid[i][j]+dp[i][j-1]);

            }   
        }
        
        return dp[m-1][n-1];   
    }
};