class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        i = len(mat)-1
        j = 0
        f = 0
        for _ in range(len(mat)+len(mat[0])-1):
            # print(i,j)
            temp = []
            ic = i
            jc = j
            while i<len(mat) and i>=0 and j<len(mat[0]) and j>=0:
                # print(i,j)
                temp.append(mat[i][j])
                j+=1
                i+=1
            temp.sort()
            i = ic
            j = jc
            it = 0
            while i<len(mat) and i>=0 and j<len(mat[0]) and j>=0:
                mat[i][j] = temp[it]
                i+=1
                j+=1
                it+=1
            i = ic
            j = jc
            i-=1
            if i<0:
                f = 1
                i = 0
                j+=1
            else:
                j=0
        return mat
        