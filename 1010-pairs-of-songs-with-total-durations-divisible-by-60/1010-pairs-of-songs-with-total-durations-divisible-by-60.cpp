class Solution {
    
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int c=0;
        vector<int>ans(60,0);
        for(int i=0;i<time.size();i++)
        {
            int b=time[i]%60;
            if(b==0)
                c+=ans[0];
            else
                c+=ans[60-b];
            ans[b]++;
        }
        return c;
    }
};