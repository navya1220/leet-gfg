class Solution:
    def duplicates(self, arr, n): 
    	
        arr1 = set()
    	mp ={}
    	flag = 0
    	for i in range(n):
    	    if arr[i] in mp:
    	        arr1.add(arr[i])
    	        flag = 1
    	    else:
    	        mp[arr[i]] = 1
    	lst = list(arr1)
    	lst = sorted(lst)
    	if flag == 1:
    	    return lst
    	return [-1]


#{ 
 # Driver Code Starts
if(__name__=='__main__'):
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = Solution().duplicates(arr, n)
        for i in res:
            print(i,end=" ")
        print()



# } Driver Code Ends