class Solution {
    void combination(vector<int>& candidates, int target,int index, int sum, vector<vector<int>>& result, vector<int>subans) {
        if(sum>target) return;
        if(sum==target) {
            result.push_back(subans);
            index=0;
            return;
        }
        for(int i=index;i<candidates.size();i++) {
            if(i!=index && candidates[i] == candidates[i-1]) {
                continue;
            }
            sum += candidates[i];
            subans.push_back(candidates[i]);
            combination(candidates, target,i+1, sum, result, subans);
            subans.pop_back();
            sum -= candidates[i];
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> subans;
        int sum=0,index=0;
        sort(candidates.begin(), candidates.end());
        combination(candidates, target,index, sum, result, subans);
        return result;
    }
};