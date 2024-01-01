class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        int count=-1;
        for(int i=0;i<arr.size();i++) {
            mp[arr[i]]++;
        }
        for(auto k:mp) {
            if(k.first == k.second) count = k.first;
        }
        return count;
    }
};