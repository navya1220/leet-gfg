class Solution {
private:
    int number(int n){
       int sum=0;
        while(n!=0){
           int rem = n%10;
           sum=sum+rem*rem;
           n=n/10;
        }
     return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        while(n!=1 && !set.count(n)) {
            set.insert(n);
            n=number(n);
        }
        if(n==1)
        return true;
        return 0;
    }
};