class Solution:
    def getSmallestString(self, n: int, k: int) -> str:
        res=""
        while k>0:
            diff = min(k, 26)
            res+=chr(97+diff-1)
            k-=diff
        res = res[::-1]
        if len(res) == n:
            return res
        ans = []
        size=len(res)
        for i in range(len(res)):
            if res[i] == 'a':
                ans.append('a')
                
            else:
                char = res[i]
                while(size<=n-1 and char!='a'):
                    ans.append('a')
                    char = chr(ord(char)-1)
                    size+=1
                ans.append(char)
        return ''.join(ans)
                
        
        
        
        