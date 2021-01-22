import heapq
class Solution:
    # @param A : list of list of integers
    # @return an integer
    def solve(self, A):
        # A.sort(key = lambda a: a[0])
        A.sort()
        heap = []
        res=1
        heapq.heappush(heap, A[0][1])
        for i in range(1,len(A)):
            
            ele = heapq.heappop(heap)
            if A[i][0] >= ele:
                pass
            else:
                heapq.heappush(heap, ele)
                res+=1
            heapq.heappush(heap, A[i][1])
        return len(heap)
#   [2, 11]
#   [4, 15]
#   [5, 13]
#   [15, 29]
#   [18, 23]
  
  
  
  
  