class Solution:
    def getMaximumGenerated(self, n: int) -> int:
        if n == 0:
            return 0
        arr = [0]*(n+1)
        arr[1] = 1
        try:
            for i in range(1,n+1):
                arr[2*i] = arr[i]
                arr[2*i+1] = arr[i]+arr[i+1]
        except:
            pass
        # print(arr)
        return max(arr)