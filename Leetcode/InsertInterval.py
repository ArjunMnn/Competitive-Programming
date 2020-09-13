class Solution:
    def insert(self, a: List[List[int]], b: List[int]) -> List[List[int]]:
        p,q = b[0],b[1]
        res = []
        for i,j in a:
            f = 0
            if p<=i and q>=j:
                f = 1
            if p>=i and p<=j:
                p = i
                f = 1
            if q>=i and q<=j:
                q = j
                f = 1
            if f == 1:
                continue
            res.append([i,j])
        res+=[[p,q]]
        return sorted(res)