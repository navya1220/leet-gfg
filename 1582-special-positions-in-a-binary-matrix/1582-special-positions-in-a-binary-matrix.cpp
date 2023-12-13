class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rowsize = mat[0].size();
        int  pos=-1;
        int  ans=0;
        for(int i=0;i<mat.size();i++) {
            int count=0;
            for(int j=0;j<rowsize;j++) {
                if(mat[i][j] == 1) {
                    count++;
                    pos=j;
                }
            }
            if(count==1) {
                count=0;
                for(int k=0;k<mat.size();k++) {
                    if(mat[k][pos] == 1) {
                        count++;
                    }
                }
            }
            if(count==1)  ans++;
        }
        return ans;
    }
};