class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxx = 0
        i = 0
        j = len(height)-1
        while(i<j):
            maxx = max(maxx, min(height[i],height[j])*(j-i))
            if height[i]<height[j]:
                i+=1
            elif height[i]>height[j]:
                j-=1
            else:
                i+=1
                j-=1
        return maxx
        