class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int ans;
        for(int i=0;i<prices.size()-1;i++) {
            ans = prices[i];
            for(int j=i+1;j<prices.size();j++) {
                ans += prices[j];
                if(ans == money) return 0;
                else if(ans < money) {
                    return money-ans;
                }
                else 
                    return money;
            }
        }
        return 0;
    }
};