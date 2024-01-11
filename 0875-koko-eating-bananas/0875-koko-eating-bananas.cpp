class Solution {
    
public:
    long long timetaken(vector<int>& piles, long long mid) {
      long long totaltime = 0;
   for(auto i:piles){
         
          long long val=i;
        
        if(val<mid) totaltime+=1;
        
        else if(val%mid==0) totaltime+=(val/mid);   
        
        else totaltime+=(val/mid+1);
    }
        return totaltime;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low=1;
        long long  high = *max_element(piles.begin(), piles.end());
        int ans = 0;
        while(low<=high) {
            long long mid = (low+high)/2;
            if(timetaken(piles, mid)<=h) {
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
};