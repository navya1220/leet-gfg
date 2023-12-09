class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size()+1;i++) {
             temp.push_back(0);
        }
        for(int i=0;i<nums.size();i++) {
            temp[nums[i]] = 1;
        }
        for(int i=1;i<nums.size()+1;i++) {
            if(temp[i] == 0) {
                return i;
            }
        }
        return 0;
    }
};