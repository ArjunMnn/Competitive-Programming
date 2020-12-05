class Solution:
    # @param A : list of integers
    # @param B : list of integers
    # @param C : list of integers
    # @return a list of integers
    def solve(self, A, B, C):
        A=set(A)
        B=set(B)
        C=set(C)
        res = []
        for i in A:
            if i in B or i in C:
                res.append(i)
        for i in B:
            if i in A or i in C:
                res.append(i)
        for i in C:
            if i in A or i in B:
                res.append(i)
        return sorted(list(set(res)))
        
