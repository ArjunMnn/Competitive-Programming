import collections
class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return a list of integers
    def solve(self, A, B):
        d = collections.defaultdict(int)
        for i in range(len(A)):
            d[A[i]] = i
            
        length = len(A)
        
        for i in range(len(A)):
            if A[i]!=length:
                temp = A[i]
                A[i] = length
                A[d[length]] = temp
                temp1 = d[A[i]]
                d[A[i]] = i
                d[temp] = temp1
                B-=1
                if B==0:
                    break
            length-=1
        return A
