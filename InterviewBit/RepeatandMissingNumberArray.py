import collections
class Solution:
    # @param A : tuple of integers
    # @return a list of integers
    
    def repeatedNumber(self, A):
        n = len(A)
      
        sumac = (n*(n+1))//2;
        sumsqac = ((n*(n+1))*(2*n+1))//6
        summ = 0
        sumsq = 0
        for i in range(n):
           sumsq+= A[i]**2
           summ+=A[i]
        diff = sumac - summ
        diffsq = sumsqac - sumsq
        xpy = diffsq//diff
        xpyd = (xpy+diff)//2
        xpydd = xpy-xpyd
        return [xpydd,xpyd]