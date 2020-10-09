class Solution:
    def insert(self, a, b):
        p= b.start
        q = b.end
        res = []
        
        for k in range(len(a)):
            f = 0
            i = a[k].start
            j = a[k].end
            if p<=i and q>=j:
                f = 1
            if p>=i and p<=j:
                p = i
                f = 1
            if q>=i and q<=j:
                q = j
                f = 1
            if f == 1:
                continue
            res.append([i,j])
        res+=[[p,q]]
        res.sort()
        ans = []
        for i,j in res:
            ans.append(Interval(i,j))
        return ans