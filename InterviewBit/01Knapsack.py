class Solution:
    # @param A : list of integers
    # @param B : list of integers
    # @param C : integer
    # @return an integer
    def solve(self, A, B, C):
        dp = [[0 for i in range(C+1)] for j in range(len(A)+1)]
        n = len(A)
        for i in range(1,len(A)+1):
            for j in range(1,C+1):
                if B[i-1]<=j:
                    dp[i][j] = max(A[i-1]+dp[i-1][j-B[i-1]], dp[i-1][j])
                else:
                    dp[i][j] = dp[i-1][j]
        return dp[n][C]
