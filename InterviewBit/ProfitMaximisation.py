from heapq import heappush, heappop
class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return an integer
    def solve(self, A, B):
        heap = []
        for i in A:
            heappush(heap, -i)
        profit = 0
        while heap and B:
            B-=1
            ele = heappop(heap)
            profit+=-ele
            ele+=1
            heappush(heap, ele)
        return profit
