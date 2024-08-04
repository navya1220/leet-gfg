class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       map<int,int>mp;
       for(int i=0;i<nums.size();i++) {
           mp[nums[i]]++;
       }
        int c=0;
       for(auto i:mp) {
           c += ((i.second)*((i.second)-1))/2;
       }
        return c;
    }
};