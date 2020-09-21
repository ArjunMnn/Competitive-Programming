class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        m = max([i for j,k,i in trips])
        times = [0]*(m)
        
        for i,j,k in trips:
            times[j - 1]+=i
            times[k - 1]-=i
        return max(accumulate(times))<=capacity
    