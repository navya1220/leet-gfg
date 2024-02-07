class Solution {
    int uniquePaths(int i, int j, vector<vector<int>> & dp){
    if(i == 0 || j == 0){
        return 1;
    }
    if(dp[i][j] != -1)
        return dp[i][j];
    int right = uniquePaths(i, j-1, dp);
    int down = uniquePaths(i-1, j, dp);
    return dp[i][j] = right + down;
}
    
public:
    int uniquePaths(int m, int n) {
         vector<vector<int>> dp(m, vector<int>(n, -1));
         int a =  uniquePaths(m-1, n-1, dp);
        return a;
    }
};