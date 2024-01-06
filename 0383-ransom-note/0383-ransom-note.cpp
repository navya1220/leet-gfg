class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m;
        for(auto k:ransomNote) {
            m[k]--;
        }
        for(auto k:magazine) {
            m[k]++;
        }
        for(auto k:m) {
            if(k.second <0) return false;
        }
        return true;
    }
};