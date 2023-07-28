class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> a;
          for(int i=0;i<nums.size();i++){
              a.insert(nums[i]);
          }
          int ans=a.size();
          nums.clear();
          for(auto i:a){
              nums.push_back(i);
          }
          return ans;
    }
};