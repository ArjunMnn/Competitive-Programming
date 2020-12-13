class Solution:
    # @param A : string
    # @return a strings
    def solve(self, A):
        words = A.split()
        res = ''
        for word in words:
            res = word+' '+res
        return res.strip()
