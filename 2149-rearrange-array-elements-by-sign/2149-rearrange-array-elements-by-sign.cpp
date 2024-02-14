class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>p;
        vector<int>n;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>=0) p.push_back(nums[i]);
            else n.push_back(nums[i]);
        }
        int j=0,k=0;
        for(int i=0;i<nums.size();i++) {
            if(i%2==0){
                ans.push_back(p[j]);
                j++;
            } 
            else {
                ans.push_back(n[k]);
                k++;
            }
        }
        return ans;
    }
};