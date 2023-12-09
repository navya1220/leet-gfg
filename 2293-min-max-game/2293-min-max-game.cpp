class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        while(nums.size() != 1) {
            vector<int> temp;
        int c=0;
        for(int i=0;i<nums.size()-1;i=i+2) {
            if(c%2==0) {
                temp.push_back(min(nums[i], nums[i+1]));
                c++;
            }
            else {
                temp.push_back(max(nums[i],nums[i+1]));
                c++;
            }
        }
            nums = temp;
        }
        return nums[0];
    }
};