class Solution:
    def nextPermutation(self, A):
        n = len(A)
        ind = -1
        for i in range(0,n-1):
            if A[i]<A[i+1]:
                ind = i
        if ind == -1:
            return sorted(A)
        for j in range(n-1,ind,-1):
            if A[j]>A[ind]:
                A[ind],A[j] = A[j],A[ind]
                break
        return A[:ind+1]+list(reversed(A[ind+1:]))