import java.util.*;
class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer,Integer> dict = new HashMap<>();
        int mostrepeat = 0;
        int count=0;
        for(int num:nums){
            if(dict.containsKey(num)){
                dict.put(num,dict.get(num)+1);
            }
            else {
                dict.put(num,1);
            }
            int c = dict.get(num);
            if(c>count){
                count=c;
                mostrepeat = num;
            }
        }
    return mostrepeat;
    }
}