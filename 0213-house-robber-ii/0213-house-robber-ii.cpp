class Solution {
public:
    int houserobber(int k, int arr[]) 
    {
        int p2 = arr[0];
        if(k==1) return p2;
        int p1 = max(arr[0],arr[1]);
        for(int i=2;i<=k-1;i++) {
            int pick = arr[i] + p2;
            int not_pick = p1;
            int cur = max(pick, not_pick);
            p2 = p1;
            p1 = cur;
        }
        return p1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int arr1[n-1], arr2[n-1];
        for(int i=0;i<=n-2;i++) {
            arr1[i] = nums[i];
            arr2[i] = nums[i+1];
        }
        int x = houserobber(n-1, arr1);
        int y = houserobber(n-1, arr2);
        return max(x,y);
    }
};