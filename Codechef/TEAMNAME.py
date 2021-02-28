import collections
t = int(input())
for i in range(t):
   n = int(input())
   arr = list(map(str,input().split()))
   s = set()
   d = collections.defaultdict(lambda: set())
   for i in arr:
        d[i[1:]].add(i[0]) 
   l = list(d.keys())
   res = 0
   for i in range(len(l)):
        for j in range(i+1,len(l)):
             ans = len(d[l[i]] | d[l[j]])
             res+=(ans - len(d[l[i]])) * (ans - len(d[l[j]]))
   print(res*2)
   