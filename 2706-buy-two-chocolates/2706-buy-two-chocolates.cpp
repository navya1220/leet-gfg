class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int ans;
        for(int i=0;i<prices.size();i++) {
            ans = prices[i];
                ans += prices[i+1];
                if(ans == money) return 0;
                else if(ans < money) {
                    return money-ans;
                }
                else 
                    return money;
            }
        return 0;
    }
};