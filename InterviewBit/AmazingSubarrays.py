class Solution:
    # @param A : string
    # @return an integer
    def solve(self, A):
        c = 0
        for i in range(len(A)):
            if A[i] in 'aeiouAEIOU':
                c+=len(A)-i;
        return c%10003