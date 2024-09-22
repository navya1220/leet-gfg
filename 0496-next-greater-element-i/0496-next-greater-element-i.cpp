class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vp(nums1.size());
        stack<int>stk;
        unordered_map<int,int>mp;
        int ind;
        for(ind = nums2.size()-1; ind>=0; ind--) {
            while(!stk.empty() && nums2[ind]>=stk.top()) {
                stk.pop();
            }
            if(!stk.empty() && nums2[ind]<=stk.top()) {
                mp[nums2[ind]] = stk.top();
            }
            else {
                mp[nums2[ind]] = -1;
            }
            
            stk.push(nums2[ind]);
        }
        for(ind = 0; ind<nums1.size(); ind++) {
            vp[ind] = mp[nums1[ind]];
        }
        return vp;
    }
};