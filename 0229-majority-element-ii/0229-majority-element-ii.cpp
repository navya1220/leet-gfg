class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> a;
        map<int,int>m;
        int n = nums.size();
        for(int i=0;i<nums.size();i++) {
            m[nums[i]]++;
        }
        for(auto k:m) {
            if(k.second > n/3) {
                a.push_back(k.first);
            } 
        }
        return a;
    }
};