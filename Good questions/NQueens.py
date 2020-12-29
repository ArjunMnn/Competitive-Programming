class Solution:
    # @param A : integer
    # @return a list of list of strings
    def solveNQueens(self, A):
            
        def can_place(row,col):
            return not (cols[col] + hill[row - col] + dale[row + col])
        def place(row,col):
            queens.add((row,col))
            cols[col] = 1
            hill[row-col] = 1
            dale[row+col] = 1
        
        def addsol():
            sol = []
            for row, col in sorted(queens):
                sol.append('.'*col + 'Q' + '.'*(A-col-1))
            res.append(sol)
            
        def remove(row,col):
            queens.remove((row,col))
            cols[col] = 0
            hill[row-col] = 0
            dale[row+col] = 0
                
        def backtrack(row=0):
            for col in range(A):
                if can_place(row,col):
                    place(row,col)
                    if row+1 == A:
                        addsol()
                    else:
                        backtrack(row+1)
                    remove(row,col)
        
        cols = [0]*A
        hill = [0]*(2*A - 1)
        dale = [0]*(2*A - 1)
        res = []
        queens = set()
        backtrack()
        return res
        
