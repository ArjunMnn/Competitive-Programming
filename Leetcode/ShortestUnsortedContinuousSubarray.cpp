class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        temp = sorted(nums)
        res = 0
        s = 0
        e = 0
        f = 0
        for i in range(len(nums)):
            if temp[i]!=nums[i] and f == 0:
                s = i
                f = 1
            elif temp[i]!=nums[i]:
                e = i

        return e - s + 1 if e!=0 else 0