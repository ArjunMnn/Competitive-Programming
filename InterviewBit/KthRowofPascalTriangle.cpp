class Solution:
    # @param A : integer
    # @return a list of integers
    def getRow(self, A):
        A+=1
        if not A:
            return []
        if A==1:
            return [1]
        ans = [[1],[1,1]]
        for i in range(2,A):
            temp = []
            for j in range(len(ans[i-1])-1):
                c = ans[i-1][j]+ans[i-1][j+1]
                temp.append(c)
            temp.append(1)
            temp.insert(0,1)
            ans.append(temp)
        return ans[A-1]
