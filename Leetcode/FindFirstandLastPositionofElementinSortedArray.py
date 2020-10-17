class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def search(x):
            l = 0
            r = len(nums)-1
            first = len(nums)
            while(l<=r):
                mid = (l+r)//2
                if nums[mid]>=x:
                    first = mid
                    r = mid - 1
                else:
                    l = mid + 1
            return first 
        first = search(target)
        last = search(target+1)-1
    
        if first<=last:
            return [first,last]
        return [-1,-1]