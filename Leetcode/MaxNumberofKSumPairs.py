class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        d = Counter(nums)
        res = 0
        for i in d:
            if i*2 == k:
                res+=d[i]//2
            elif i>=k/2:
                if k-i in d:
                    res += min(d[i], d[k-i])
                
        return res