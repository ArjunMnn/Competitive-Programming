class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort()
        j = 0
        c = 0
        for i in range(1,len(points)):
            if points[i][0]<=points[j][1]:
                points[i][1] = min(points[j][1],points[i][1])
                c+=1
            j = i
        return len(points) - c