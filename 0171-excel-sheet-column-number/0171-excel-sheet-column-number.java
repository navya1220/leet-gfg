class Solution {
    public int titleToNumber(String columnTitle) {
        int sum=0,c,d=0;
        for(int i=columnTitle.length()-1;i>=0;i--){
            char a = columnTitle.charAt(i);
            int b=a;
            c = b-64;
            sum=sum+(int)(Math.pow(26,d)*c);
            d=d+1;
        }
        return sum;
        
    }
}