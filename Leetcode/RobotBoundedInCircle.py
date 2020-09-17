class Solution:
    def isRobotBounded(self, instructions: str) -> bool:
        vis = set()
        pos = [0,0]
        dirs = [[0,1],[-1,0],[0,-1],[1,0]]
        dirr = 0
        #direction = 0 means north
        #direction = 1 means west
        #direction = 2 means south
        #direction = 0 means east
        for j in instructions:
            if j == 'G':
                pos[0]+=dirs[dirr][0]
                pos[1]+=dirs[dirr][1]
            elif j == 'L':
                dirr = (dirr + 1)%4
            elif j == 'R':
                dirr = dirr - 1
                if dirr == -1:
                    dirr = 3
        # we will be in a cirlce if we end up in the same spot as we started or the final direction is north
        if pos == [0,0] or dirr!=0:
            return True
        return False
    
                