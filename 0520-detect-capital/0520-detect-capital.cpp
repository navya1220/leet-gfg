class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital= 0, notcapital = 0, first=0;
        for(int i=0;i<word.size();i++) {
            if(i==0) {
                if(word[i]>=65 && word[i]<=90) first++;
            }
            if(word[i]>=97 && word[i]<=122) {
                notcapital++;
            }
            else {
                capital++;
            }
        }
        if(notcapital==word.size() && capital==0) return true;
        if(first==1 && notcapital==word.size()-1) return true;
        if(capital==word.size() && notcapital==0) return true;
        return false;
    }
};