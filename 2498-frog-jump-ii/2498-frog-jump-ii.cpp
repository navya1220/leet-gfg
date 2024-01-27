class Solution {
public:
    int maxJump(vector<int>& stones) {
        int res;
        res = max(stones[1]-stones[0], 0);
        for(int i=2;i<stones.size();i+=2) {
            res = max(stones[i]-stones[i-2] , res);
        }
        for(int i=3;i<stones.size();i+=2) {
            res = max(stones[i]-stones[i-2], res);
        }
        return res;
    }
};