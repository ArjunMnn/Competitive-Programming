class Solution:
    def buddyStrings(self, A: str, B: str) -> bool:
        da = collections.Counter(A)
        db = collections.Counter(B)
        di = {}
        f = 0
        for k,v in db.items():
            if k not in da:
                return False
            else:
                if v != da[k]:
                    return False
                else:
                    if v>=2:
                        f = 1
        for i,ele in enumerate(B):
            di[i] = ele
        c = 0
        ans = set()
        for i,ele in enumerate(A):
            if di[i]!=ele:
                c+=1
        
        if c == 2 :
            return True
        if c == 0:
            if f:
                return True
        return False