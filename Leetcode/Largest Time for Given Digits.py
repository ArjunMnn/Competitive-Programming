class Solution:
    def largestTimeFromDigits(self, A: List[int]) -> str:
        maxs = -1
        for h,i,j,k in permutations(A):
            hour = h*10+i
            minute = j*10+k
            if hour<24 and minute<60:
                maxs = max(maxs, hour*60+minute)
        if maxs == -1:
            return ""
        print(maxs)
        return "{:02d}:{:02d}".format(maxs // 60, maxs % 60)
        return maxs
            
        
            
        
            
        