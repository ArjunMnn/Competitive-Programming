class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return an integer
    def threeSumClosest(self, A, target):
        A.sort()
        diff = math.inf
        for i in range(len(A)):
            
            beg = i+1
            end = len(A)-1
            while(beg<end):
                if A[beg]+A[end]+A[i]>target:
                    
                    mdiff = abs(target-(A[beg]+A[end]+A[i]))
                    if mdiff<diff:
                        diff = mdiff
                        ans = A[beg]+A[end]+A[i]
                    end-=1
                elif A[beg]+A[end]+A[i]<target:
                    
                    mdiff = abs(target-(A[beg]+A[end]+A[i]))
                    if mdiff<diff:
                        diff = mdiff
                        ans = A[beg]+A[end]+A[i]
                    beg+=1
                else:
                    return target
        return ans
