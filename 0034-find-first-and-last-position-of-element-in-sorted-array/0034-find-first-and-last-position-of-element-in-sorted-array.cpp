class Solution {
    int firstoccur(vector<int>& nums, int target) {
         int low =0, high=nums.size()-1, ans=-1;
        while(low<=high) {
            int mid = (low+high)/2;
            if(nums[mid] == target) {
                ans = mid;
                high = mid-1;
            }
            else if(nums[mid]>target) high = mid-1;
            else low = mid+1;
        }
        return ans;
    }
     int lastoccur(vector<int>& nums, int target) {
         int low =0, high=nums.size()-1, ans=-1;
        while(low<=high) {
            int mid = (low+high)/2;
            if(nums[mid] == target) {
                ans = mid;
                low = mid+1;
            }
            else if(nums[mid]>target) high = mid-1;
            else low = mid+1;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> ans;
        int first = firstoccur(nums, target);
        ans.push_back(first);
        int last = lastoccur(nums, target);
        ans.push_back(last);
     return ans;
    }
};