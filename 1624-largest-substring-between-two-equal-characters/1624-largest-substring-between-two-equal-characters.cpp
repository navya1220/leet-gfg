class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxi=-1;
        map<char,int>mp;
        for(int i=0;i<s.length();i++) {
            char c = s[i];
            if(mp.find(c)!=mp.end()) {
                maxi = max(maxi, i-mp[c]-1);
            }
            else mp[c]=i;
        }
        return maxi;
        
    }
};