class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>st;
        int max_len=0, start=0;
        for(int i=0;i<s.size();i++) {
            char curr = s[i];
            if(st.find(curr)!=st.end(curr) && st[curr]>=start) {
                start = st[curr] + 1;
            }
            st[curr] = i;
            max_len = max(max_len, i-start+1);
        }
        return max_len;
    }
};