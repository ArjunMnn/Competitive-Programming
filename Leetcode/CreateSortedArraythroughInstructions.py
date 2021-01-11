from sortedcontainers import SortedList
class Solution:
    def createSortedArray(self, instructions: List[int]) -> int:
        slist = SortedList()
        res = 0 
        for num in instructions:
            res += min(slist.bisect_left(num), len(slist) - slist.bisect_right(num))
            res%=(10**9 + 7)
            slist.add(num)
        return res