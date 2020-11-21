class Solution:
    def solve(self, A, B):
        i = 0
        j = 1
        nz = 0
        if A[i] == 0:
            nz = 1
        maxl = 0
        while i<len(A) and j<len(A):
            while i<len(A) and j<len(A):
                if A[j]==0:
                    nz+=1
                if nz>B:
                    nz-=1
                    j-=1
                    break
                if j==len(A)-1:
                    break
                j+=1
            maxl = max(maxl,j-i+1)
            if A[i]==0:
                nz-=1
            i+=1
            j+=1
        return maxl