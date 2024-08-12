class Solution {
public:
    bool isPrime(int n) {
        if(n<=1) return false;
        if(n==2 || n==3) return true;
        if(n%2==0 || n%3==0) return false;
        for(int i=5;i*i<=n;i+=6) {
            if(n%i==0 || n%(i+2)==0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int start=0, end=0;
        for(int i=0;i<nums.size();i++) {
            if(isPrime(nums[i])) {
                start = i;
                break;
            }
        }
        for(int i=0;i<nums.size();i++) {
            if(isPrime(nums[i])) {
                end = i;
            }
        }
        return end-start;
    }
};