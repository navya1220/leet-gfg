class Solution {
public:
    int climbStairs(int n) {
        int w = 1;
        for(int i=1;i<=n/2;i++) {
            double sum=1;
            for(int j=i;j<2*i;j++) {
                sum *= (double)(n-j)/(j-i+1);
            }
            w += sum;
        }
        return w;
    }
};