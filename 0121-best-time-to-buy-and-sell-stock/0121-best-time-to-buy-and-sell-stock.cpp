class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min1=prices[0],max1=0;
        for(int i=1;i<prices.size();i++) {
            if(prices[i]<min1) {
                min1 = prices[i];
            }
            max1 = max(max1, prices[i]-min1);
        }
        return max1;
        
    }
};