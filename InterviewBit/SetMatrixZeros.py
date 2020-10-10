class Solution:
    # @param A : list of list of integers
    # @return the same list modified
    def setZeroes(self, arr):
        si = set()
        sj = set()
        for i in range(len(arr)):
            for j in range(len(arr[0])):
                if arr[i][j] == 0:
                    si.add(i)
                    sj.add(j)
       
        for i in range(len(arr)):
            for j in range(len(arr[0])):
                if j in sj:
                    arr[i][j] = 0
                if i in si:
                    arr[i][j] = 0
        return arr
                    