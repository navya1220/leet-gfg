class Solution {
    int uniquepath(int m, int n, vector<vector<int>> &obstacleGrid) 
    {
         vector<vector<int>> dp(m+4, vector<int>(n+4,0));
         for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
             if(i==0 && j==0 && !obstacleGrid[i][j]) dp[i][j] = 1;
                else if(!obstacleGrid[i][j]) {
                    if(j) dp[i][j] += dp[i][j-1];
                    if(i) dp[i][j] += dp[i-1][j];
                
                }
                
           }
         }
        return dp[m-1][n-1];
         
    }
public:
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
      
        return uniquepath(m, n, obstacleGrid);
    }
};