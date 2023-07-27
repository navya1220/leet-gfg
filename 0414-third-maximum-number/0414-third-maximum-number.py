class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        if len(nums)>=3:
            nums.sort()
            p = set()
            c=0
            for i in range(len(nums)-1,-1,-1):
                if nums[i] not  in p:
                    if c==2:
                        return nums[i]
                    else:
                        p.add(nums[i])
                        c = c+1
            return max(nums)
        else:
            return max(nums)