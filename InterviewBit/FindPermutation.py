from collections import deque
class Solution:
    # @param A : string
    # @param B : integer
    # @return a list of integers
    def findPerm(self, s, n):
        arr = [i for i in range(1,n+1)]
        arr = deque(arr)
        res = []
        if s[0] == "I":
            res.append(arr.popleft())
        else:
            res.append(arr.pop())
        for i in range(0,len(s)):
            if s[i] == "I":
                num = arr.popleft()
                if res[-1]>num:
                    temp = res[-1]
                    res[-1] = num
                    res.append(temp)
                else:
                    res.append(num)
            else:
                num = arr.pop()
                if res[-1]<num:
                    temp = res[-1]
                    res[-1] = num
                    res.append(temp)
                else:
                    res.append(num)
        return res
