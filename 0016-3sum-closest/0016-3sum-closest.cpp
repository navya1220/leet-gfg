class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int max=nums[0]+nums[1]+nums[2], currsum;
        for(int i=0;i<nums.size();i++) {
            int l = i+1;
            int r = nums.size()-1;
            while(l<r) {
                currsum = nums[i]+nums[l]+nums[r];
                if(abs(max-target)>=abs(currsum-target)) max= currsum;
                if(currsum<target) l++;
                else if(currsum>target) r--;
                else return currsum;
            }
        }
        return max;
    }
};