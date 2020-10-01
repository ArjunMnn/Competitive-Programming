class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        for i,num in enumerate(nums):
            if num <= 0:
                nums[i] = 0

        for i in range(len(nums)):
            if abs(nums[i])-1 >=0 and abs(nums[i])-1<len(nums):
                if nums[abs(nums[i])-1] == 0:
                    nums[abs(nums[i])-1] = -inf
                elif nums[abs(nums[i])-1]>0:
                    nums[abs(nums[i])-1] *= -1
        for i in range(len(nums)):
            if nums[i]>=0:
                return i+1
        return len(nums)+1