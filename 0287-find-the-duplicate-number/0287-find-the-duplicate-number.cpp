class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>ans;
        for(int i=0;i<nums.size();i++) {
            ans[nums[i]]++;
        }
        for(auto k:ans) {
            if(k.second > 1) return k.first;
        }
        return 0;
    }
};