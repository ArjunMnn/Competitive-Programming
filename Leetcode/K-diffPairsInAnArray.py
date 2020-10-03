class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        d = collections.Counter(nums)
        nums = set(nums)
        res = []
        for i in nums:
            diff = i - k
            if diff!=i:
                nums.discard(i)
                if diff in nums:
                    res.append((i,diff))
                nums.add(i)
            elif diff == i:
                if d[i]>1:
                    res.append((i,i))
        
        return len(res)