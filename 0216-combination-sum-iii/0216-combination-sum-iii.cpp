class Solution {
    void combinations(vector<vector<int>>& finalans, vector<int>& ans, int x, int k, int n) {
        if(ans.size()==k && n==0) {
            finalans.push_back(ans);
            return;
        }
        if(ans.size()==k && n!=0) {
            return;
        }
        for(int i=x;i<=9;i++) {
            ans.push_back(i);
            combinations(finalans, ans, i+1, k, n-i);
            ans.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
         vector<vector<int>> finalans;
         vector<int>ans;
         combinations(finalans,ans,1,k,n);
         return finalans;
    }
};