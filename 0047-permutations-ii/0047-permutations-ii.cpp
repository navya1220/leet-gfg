class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>  temp = nums;
        result.push_back(nums);
        sort(nums.begin(), nums.end());
        do {
            if(nums!=temp) {
                result.push_back(nums);
            }
        } while(next_permutation(nums.begin(), nums.end()));
        return result;
    }
};