class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int f=0 ,s =0;
        vector<int>count(nums.size()+1,0);
        count[nums[0]]++;
        for(int i=1;i<nums.size();i++) {
            count[nums[i]]++;
        }
        for(int i=1;i<count.size();i++) {
            if(count[i] > 1) f = i;
            if(count[i] == 0) s = i;
        }
      return {f,s};
    }
};