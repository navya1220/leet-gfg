class Solution {
    void combinations(vector<vector<int>>& finalans, vector<int>& ans, int x, int n, int k) {
        if(ans.size() == k) {
            finalans.push_back(ans);
            return;
        }
        for(int i=x;i<=n;i++) {
            ans.push_back(i);
            combinations(finalans, ans, i+1, n, k);
            ans.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> finalans;
        vector<int> ans;
        combinations(finalans,ans,1,n,k);
        return finalans;
    }
};