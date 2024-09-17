class Solution {
  
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool>prim(n, true);
        prim[0] = false;
        prim[1] = false;
        int count = 0;
        
        for (int i = 2; i * i < n; i++) {
            if (prim[i]) {
                for (int j = i * i; j < n; j += i) {
                    prim[j] = false;
                }
            }
        }
        
        for (int i = 2; i < n; i++) {
            if (prim[i]) count++;
        }
        
        return count;
    }
};