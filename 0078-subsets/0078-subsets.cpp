class Solution {
    void subsets(vector<vector<int>>& finalans, vector<int>ans, int x, vector<int>& nums) {
        if(x == nums.size()) {
            finalans.push_back(ans);
            return;
        }
        
        ans.push_back(nums[x]);
        subsets(finalans, ans, x+1, nums);
        
        ans.pop_back();
        subsets(finalans, ans, x+1, nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> finalans;
        vector<int> ans;
        subsets(finalans, ans, 0, nums);
        return finalans;
    }
};