class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>finalans;
        for(int i=0;i<nums.size();i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l = i+1;
            int r = nums.size()-1;
            while(l<r) {
                int currsum = nums[i]+nums[l]+nums[r];
                if(currsum == 0) {
                    vector<int> ans ={nums[i], nums[l], nums[r]};
                    finalans.push_back(ans);
                    l++;
                    r--;
                    while(l<r && nums[l] == nums[l-1]) l++;
                    while(l<r && nums[r] == nums[r+1]) r--;
                }
                else if(currsum<0) l++;
                else r--;
            }
            
        }
        return finalans;
    }
};