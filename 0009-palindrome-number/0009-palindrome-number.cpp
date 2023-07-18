class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        long int palin=0;
        int rem;
        while(x!=0) {
            rem=x%10;
            palin = palin*10 +rem;
            x=x/10;
        }
        if(y<0)
        return false;
        else if(y==palin)
        return true;
        else{
            return false;
        }
    }
};