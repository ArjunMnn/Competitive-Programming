class Solution:
    def countArrangement(self, n: int) -> int:
        arr = [i for i in range(1,n+1)]
        self.res = 0
        def back(l,r):
            if l == r+1:
                self.res+=1
            for i in range(l,r+1):
                arr[l],arr[i] = arr[i],arr[l]
                if (arr[l]%(l+1) == 0 or (l+1)%arr[l] == 0):
                    back(l+1,r)
                arr[l],arr[i] = arr[i],arr[l]
        back(0,n-1)
        return self.res