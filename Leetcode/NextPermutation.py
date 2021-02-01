class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        f=0
        for i in range(len(nums)-2, -1, -1):
            if nums[i]<nums[i+1]:
                break
        else:
            f=1
            nums.sort()
        if not f:
            for j in range(len(nums)-1,-1,-1):
                if nums[j]>nums[i]:
                    nums[i],nums[j] = nums[j], nums[i]
                    break
            

            temp = [i for i in nums]
            while nums:
                nums.pop()
            
            for k in temp[:i+1]+temp[i+1:][::-1]:
                nums.append(k)
            # return nums[:i+1]+nums[i+1:][::-1]
            
        