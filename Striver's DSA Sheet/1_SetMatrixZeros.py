import collections
class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        # print(matrix)
        m = len(matrix)
        n = len(matrix[0])
        fr = fc = 0
        for i in range(m):
            if matrix[i][0] == 0:
                fr = 1
                break
        for j in range(n):
            if matrix[0][j] == 0:
                fc = 1
                break
   
        for i in range(1,m):
            for j in range(1,n):
                if matrix[i][j] == 0:
                    matrix[0][j] = 0
                    matrix[i][0] = 0
        
        for i in range(1,m):
            for j in range(1,n):
                if matrix[i][0] == 0 or matrix[0][j] == 0:
                    matrix[i][j] = 0
        for i in range(m):
            if fr == 1:
                matrix[i][0] = 0
        for j in range(n):
            if fc == 1:
                matrix[0][j] = 0

        
        
        
