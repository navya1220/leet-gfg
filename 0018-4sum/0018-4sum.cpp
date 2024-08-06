class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++) {
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int l = j+1;
                int r = nums.size()-1;
               
                while(l<r) {
                    if(l>j+1 && nums[l]==nums[l-1]) {
                        l++;
                        continue;
                    }
                    long long sum = nums[l];
                    sum += nums[r];
                    long long t = target;
                    t -= nums[i];
                    t -= nums[j];
                    if(sum == t) {
                        vector<int> temp = {nums[i], nums[j], nums[l],nums[r]};
                        ans.push_back(temp);
                        l++;
                    }
                    else if(sum<t) l++;
                    else r--;
                }
            }
        }
        return ans;
    }
};