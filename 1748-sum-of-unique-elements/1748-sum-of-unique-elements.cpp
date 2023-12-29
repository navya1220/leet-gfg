class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>m;
        int sum=0;
        for(int i=0;i<nums.size();i++) {
            m[nums[i]]++;
        }
        for(auto k:m) {
            if(k.second == 1) sum+=k.first;
        }
        return sum;
    }
};