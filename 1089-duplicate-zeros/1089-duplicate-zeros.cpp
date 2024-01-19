class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i=0, j = arr.size()-1;
        while(i<arr.size()) {
            if(arr[i] == 0) {
                while(j > i) {
                    arr[j] = arr[j-1];
                    j--;
                }
                i+=2;
                j = arr.size()-1;
            }
            else i++;
        }
    }
};