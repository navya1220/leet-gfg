class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int>m;
        int ans=0;
        for(int i=0;i<s.length();i++) {
            m[t[i]]++;
            m[s[i]]--;
        }
        for(auto i:m) {
            if(i.second>0) ans+=i.second;
        }
        return ans;
    }
};