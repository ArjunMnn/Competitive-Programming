class Solution:
    def smallestDivisor(self, nums: List[int], threshold: int) -> int:
        l = 1
        r = max(nums)
        maxc = math.inf
        while(l<=r):
            # print(l,r)
            mid = (l+r)//2
            summ = 0
            for i in nums:
                div = ceil(i/mid)
                # print(div)
                summ+=div
            # print(mid,summ)
            if summ<=threshold:
                maxc = min(maxc,mid)
                r = mid - 1
            elif summ>threshold:
                l = mid + 1
            else:
                r = mid - 1
        return maxc