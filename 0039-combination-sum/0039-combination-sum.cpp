class Solution {
  void combination(vector<int>& candidates, int target, int sum, int index, vector<vector<int>>& result, vector<int> subans) {
      if(sum>target) return;
      if(sum == target) {
          result.push_back(subans);
          return;
      }
      for(int i=index;i<candidates.size();i++) {
          sum += candidates[i];
          subans.push_back(candidates[i]);
          combination(candidates, target, sum, i,result, subans);
          subans.pop_back();
          sum-=candidates[i];
      }
  }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> subans;
        int sum=0, index=0;
        combination(candidates, target, sum, index, result, subans );
        return result;
    }
};