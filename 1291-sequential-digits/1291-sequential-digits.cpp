class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        
        for(int i=1;i<=9;i++)
        {
            int n = i;
            int next = i+1;
            while(n<high && next<=9) 
            {
                n = n*10+ next;
                if(low<=n && n<=high) ans.push_back(n);
                next++;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};