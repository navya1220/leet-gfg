class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left=0, right=sqrt(c);
        while(left<=right) {
            long long d = left*left + right*right;
            if(c == d) return true;
            else if(c>d) left++;
            else right--;
        }
        return false;
    }
};