class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            m[nums[i]]++;
        }
        for(auto k:m) {
            if(k.second==1) {
                ans.push_back(k.first);
            }
        }
        return ans;
    }
};