class Solution:
    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        q = deque()
        q.append((0,0,1))
        self.maxn = math.inf
        while q:
            r,c,l = q.popleft()
            if r<0 or r>=len(grid) or c<0 or c>=len(grid[0]) or grid[r][c]!=0:
                continue
            grid[r][c] = 2
            if r == len(grid)-1 and c == len(grid)-1:
                return l
            dirs = [[1,0],[0,1],[-1,0],[0,-1],[1,1],[-1,-1],[-1,1],[1,-1]]
            for i,j in dirs:
                q.append((r+i,c+j,l+1))
            
            
        
        return -1