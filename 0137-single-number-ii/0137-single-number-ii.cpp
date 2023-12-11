class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for(int i=0;i<nums.size();i++) {
            m[nums[i]]++;
        }
        for(auto k: m) {
            if(k.second == 1) 
                return k.first;
        }
        return 0;
    }
};