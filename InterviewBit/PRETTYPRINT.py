class Solution:
    def prettyPrint(self, n):
        res = [[0]*((n*2)-1) for i in range((n*2)-1)]
        top = left = 0
        bottom = right = (n*2)-2
        while top <= bottom and left <= right:
            for i in range(left,right+1):
                res[top][i] = n
            top+=1
            for i in range(top,bottom+1):
                res[i][right] = n
            right-=1
            for i in range(left,right+1):
                res[bottom][i]=n
            bottom-=1
            for i in range(top,bottom+1):
                res[i][left] =n
            left+=1
            n-=1
        return res