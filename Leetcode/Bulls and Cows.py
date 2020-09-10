class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        s = set()
        sec = collections.defaultdict(int)
        b = 0
        for i,ele in enumerate(secret):
            if ele == guess[i]:
                s.add(i)
                b+=1
            else:
                sec[ele]+=1
        c = 0
        # print(s)
        for i in range(len(guess)):
            if i not in s:
                
                if guess[i] in sec and sec[guess[i]]>0:
                    sec[guess[i]]-=1
                    c+=1
        res=str(b)+"A"+str(c)+"B"
        return res
                
        
        
        
        
        
          