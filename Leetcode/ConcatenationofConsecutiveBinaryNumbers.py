class Solution:
    # @param A : integer
    # @return an integer
    def solve(self, A):
        sq = math.sqrt(A)
        
        for i in range(1,(round(sq)+1)*2):
            if round(sq)*i>A:
                return round(sq)+i