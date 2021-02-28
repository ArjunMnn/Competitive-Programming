class Solution:
    def letterCasePermutation(self, S: str) -> List[str]:
        res = set()
        st = [i for i in S]
        def rec(st,i):
            if i == len(st):
                res.add(''.join(st))
                return
            
            st[i] = st[i].upper() if st[i].islower() else st[i].lower()
            rec(st,i+1)
            st[i] = st[i].upper() if st[i].islower() else st[i].lower()
            rec(st,i+1)
        rec(st,0)
        return list(res)
            
            