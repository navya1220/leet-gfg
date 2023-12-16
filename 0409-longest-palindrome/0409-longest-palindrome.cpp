class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> m;
        int max=0;
        for(int i=0;i<s.length();i++) {
            m[s[i]]++;
            if(m[s[i]]%2==1) {
                max++;
            }
            else max--;
        }
        if(max>1) {
            return s.length() - max+1;
        }
        return s.length();
    }
};