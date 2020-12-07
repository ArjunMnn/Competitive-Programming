from collections import defaultdict
class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return an integer
    def solve(self, A, B):
        odd = 0
        res = 0
        d = defaultdict(int)
        d[0]=1
        for i in A:
            odd+=i%2
            res+=d[odd-B]
            d[odd]+=1
        return res