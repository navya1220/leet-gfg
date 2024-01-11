class Solution {
    
public:
    long long findHours(vector<int> &nums,long long speed){
     
     long long totalHours=0;
    
    for(auto i:nums){
         
          long long val=i;
        
        if(val<speed) totalHours+=1;
        
        else if(val%speed==0) totalHours+=(val/speed);   
        
        else totalHours+=(val/speed+1);
    }
       
       return totalHours;
}

int minEatingSpeed(vector<int>& nums, int h) {
    
    long long low=1;
    long long high=*max_element(nums.begin(),nums.end());
    
       int ans=0;
    
    while(low<=high){
        
        long long mid=(low+high)/2;
        
        if(findHours(nums,mid)<=h){
             ans=mid;
            high=mid-1;
        }
        
        else{
           low=mid+1;
        }
        
    }
   
    
    return ans;
}
};