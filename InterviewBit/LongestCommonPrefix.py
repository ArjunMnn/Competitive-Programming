class Solution:
    # @param A : list of strings
    # @return a strings
    def longestCommonPrefix(self, A):
        if not A:
            return
        if len(A)==1:
            return A[0]
        A.sort()
        res = ""
        for i,j in zip(A[0],A[-1]):
            if i==j:
                res+=i
            else:
                break
        return res