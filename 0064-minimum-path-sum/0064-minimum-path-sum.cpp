class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n, vector<int>(m, 0));
        int ind; 
        dp[0][0] = grid[0][0];
        for(ind=1;ind<m;ind++) {
            dp[0][ind] = grid[0][ind] + dp[0][ind-1];
        }
        for(ind=1;ind<n;ind++) {
            dp[ind][0] = grid[ind][0] + dp[ind-1][0];
        }
        int inind;
        for(ind=1;ind<n;ind++) {
            for(inind=1; inind<m; inind++) {
                dp[ind][inind] = grid[ind][inind] + min(dp[ind-1][inind], dp[ind][inind-1]);
            }
        }
        return dp[n-1][m-1];
    }
};