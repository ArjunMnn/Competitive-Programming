class Solution:
    def maxDistToClosest(self, seats: List[int]) -> int:
        n = len(seats)
        k = 0
        ans = 0
        for i in range(n):
            if seats[i] == 1:
                k = 0
            else:
                k+=1
                ans = max(ans,(k+1)//2)
        for i in range(n):
            if seats[i] == 1:
                ans = max(ans,i)
                break
        for i in range(n-1,-1,-1):
            if seats[i] == 1:
                return max(ans,n-i-1)