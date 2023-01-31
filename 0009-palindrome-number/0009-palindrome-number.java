class Solution {
    public boolean isPalindrome(int x) {
        if (x<0)
            return false;
        int rever=0,rem,n=x;
        while(x!=0){
            rem=x%10;
            rever=rever*10+rem;
            x/=10;
        }
        return n==rever;
    }
}