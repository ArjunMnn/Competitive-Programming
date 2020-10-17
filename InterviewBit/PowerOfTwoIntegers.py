import math
class Solution:
    # @param A : integer
    # @return an integer
    def isPower(self, A):

        if A==1:
            return 1
        
        for i in range(2,int(math.sqrt(A)+1)):
            p=math.log(A,i)
            p=float("{0:.5f}".format(p))
            if p%2==0 or (p+1)%2==0:
                return 1
        return 0