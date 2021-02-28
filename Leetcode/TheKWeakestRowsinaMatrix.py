class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        heap = []
        for i in range(len(mat)):
            heapq.heappush(heap,(mat[i].count(1),i))
        res = []
        while k and heap:
            c,i = heapq.heappop(heap)
            res.append(i)
            k-=1
        return res