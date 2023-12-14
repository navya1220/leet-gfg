class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> onerows(m,0);
        vector<int> zerorows(n,0);
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                onerows[i] += grid[i][j];
                zerorows[j] += grid[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) {
                grid[i][j] = 2*(onerows[i]+zerorows[j])-m-n;
            }
        }
        return grid;
    }
};