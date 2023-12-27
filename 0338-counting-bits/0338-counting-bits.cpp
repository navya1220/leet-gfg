class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++) {
            int sum=0;
            int m =i;
            while(m!=0) {
                sum += m%2;
                 m  = m/2;
            }
            ans.push_back(sum);
        }
        return  ans;
    }
};