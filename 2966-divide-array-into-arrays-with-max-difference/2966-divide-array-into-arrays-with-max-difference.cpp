class Solution {
    
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>finalans;

        sort(nums.begin(),nums.end()); 
       
        for(int i=0;i<nums.size();i+=3) {

            if((nums[i+2]-nums[i+1])<=k && (nums[i+1]-nums[i])<=k && (nums[i+2]-nums[i])<=k) {
                finalans.push_back({nums[i],nums[i+1],nums[i+2]});
            }
            else {
                return {};
            }
        }
        return finalans;
    }
};