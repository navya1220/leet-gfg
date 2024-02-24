class Solution {
public:
       bool isPrefixAndSuffix(string x, string y){
        int n1 = x.size(), n2 = y.size();
        if(n1>n2) return false;
        for(int i=0; i<n1; i++){
            if(x[n1-i-1]!=y[n2-i-1]) return false;
        }
        auto ans = mismatch(x.begin(),x.end(),y.begin());
        return true && ans.first == x.end();
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int c = 0;
       int n = words.size();
     
       for (int i = 0; i < n; ++i) {
             for (int j = i + 1; j < n; ++j) {
                 if (isPrefixAndSuffix(words[i], words[j])) {
                      c++;
            }
        }
    }
    
    return c;
    }

};