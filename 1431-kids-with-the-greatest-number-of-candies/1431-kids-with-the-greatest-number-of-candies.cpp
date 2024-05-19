class Solution {
    
public:
    int getMax(vector<int>candies) {
        int max = INT_MIN;
        for(int i=0;i<candies.size();i++) {
            if(candies[i]>=max) {
                max = candies[i];
            }
        }
        return max;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;
        for(int i=0;i<candies.size();i++) {
            candies[i]+= extraCandies;
            int max = getMax(candies);
            if(candies[i]>=max) {
                result.push_back(true);
            }
            else result.push_back(false);
            candies[i] = candies[i]-extraCandies;
        }
        return result;
    }
};