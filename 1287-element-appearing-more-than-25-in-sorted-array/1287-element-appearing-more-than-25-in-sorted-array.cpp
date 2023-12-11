class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int, int> m;
        for(int i=0;i<arr.size();i++) {
            m[arr[i]]++;
        }
        int max=0, n;
        for(auto k: m) {
            if(k.second > max) {
                max = k.second;
                 n = k.first;
            }
        }
        return n;
    }
};