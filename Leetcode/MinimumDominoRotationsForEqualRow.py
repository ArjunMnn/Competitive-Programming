class Solution:
    def minDominoRotations(self, A: List[int], B: List[int]) -> int:
        d = Counter(A)+Counter(B)
        maxv = 0
        for k,v in d.items():
            if v>maxv:
                maxv = v
                maxk = k
        if maxv<len(A):
            return -1
        overlap = 0
        for i in range(len(A)):
            if A[i] == B[i]:
                overlap+=1
        if maxv-overlap<len(A):
            return -1
        c = c1 = 0
        for i in range(len(A)):
            if A[i]!=maxk:
                c+=1
            if B[i]!=maxk:
                c1+=1
        return min(c,c1)
        