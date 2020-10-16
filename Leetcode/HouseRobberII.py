class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums)==1:
            return nums[0]
        sum1 = sum2 = 0
        for i in range(1,len(nums)):
            sum1,sum2 = sum2,max(sum1+nums[i],sum2)
        sum3 = sum4 = 0
        for i in range(0,len(nums)-1):
            sum3,sum4 = sum4,max(sum3+nums[i],sum4)
        return max(sum2,sum4)
        