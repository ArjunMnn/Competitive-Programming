class Solution:
    # @param A : unsigned integer
    # @return an unsigned integer
    def reverse(self, A):
        res=0
        for i in range(32):
            if A&1:
                res=res<<1
                res=res^1
            else:
                res=res<<1
            A=A>>1
        return res
