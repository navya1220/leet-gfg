class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int mini = strs[0].size();
        for(int i=0;i<n-1;i++) {
            int count=0;
            string str1 = strs[i];
            string str2 = strs[i+1];
            for(int j=0;j<min(str1.size(), str2.size());j++) {
                if(str1[j]==str2[j]) {
                    count += 1;
                }
                else break;
            }
            mini = min(mini, count);
        }
        if(mini==0) return "";
        return strs[0].substr(0,mini);
    }
};