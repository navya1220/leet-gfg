class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>notlost;
        vector<int>oncelost;
        map<int,int>ans;
        for(int i=0;i<matches.size();i++) {
            int lose = matches[i][1];
            ans[lose]++;
        }
        for(int i=0;i<matches.size();i++) {
            int winner = matches[i][0];
            int loses = matches[i][1];
            if(ans.find(winner)==ans.end()) {
                notlost.push_back(winner);
                ans[winner] = 1;
            }
            if(ans[loses] == 1) oncelost.push_back(loses);
        }
        sort(notlost.begin(), notlost.end());
        sort(oncelost.begin(), oncelost.end());
        
        return {notlost, oncelost};
        
    }
};