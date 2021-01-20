class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        heap = []
        for i in nums:
            heapq.heappush(heap, -i)
            
        while heap and k:
            ele = heapq.heappop(heap)
            k-=1
        return ele*-1