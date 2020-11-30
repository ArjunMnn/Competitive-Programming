class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        if sum(nums)%2:
            return False
        summ = sum(nums)
        dp = [[None]*summ for i in range(len(nums)+1)]
        target = summ//2
        def rec(summ,i,dp):
            if summ==target:
                return True
            if summ>target:
                return False
            if i==len(nums):
                return False
            if dp[i][summ] is not None:
                return dp[i][summ]
            res = rec(summ+nums[i],i+1,dp) or rec(summ,i+1,dp)
            dp[i][summ] = res
            return res
        return rec(0,0,dp)