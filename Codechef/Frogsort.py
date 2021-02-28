# cook your dish here
import collections
import math
import itertools

def solve(w,l):
     dd = collections.defaultdict(int)
     dpos = collections.defaultdict(int)
     for i in range(len(w)):
          dd[w[i]] = l[i]
     n = len(w)
     if n == 2:
          if w[0]==1 and w[1]==2:
               return 0
          else:
               if l[0]==1:
                    return 2
               else:
                    return 1
     else:
          if n == 3:
               ans = 0
               for i in range(len(w)):
                    if w[i] == 1:
                         a = i
                         ap = 1
                    elif w[i] == 2:
                         b = i
                         bp = 2
                    elif w[i] == 3:
                         c = i
                         cp = 3
               
               while c<=b or b<=a or c<=a:
                    while b<=a:
                         b+=dd[bp]
                         ans+=1
                    while c<=b or c<=a:
                         c+=dd[cp]
                         ans+=1
               return ans
          elif n == 4:
               ans = 0
               for i in range(len(w)):
                    if w[i] == 1:
                         a = i
                         ap = 1
                    elif w[i] == 2:
                         b = i
                         bp = 2
                    elif w[i] == 3:
                         c = i
                         cp = 3
                    elif w[i] == 4:
                         d = i
                         dp = 4
              
               while d<=a or d<=b or d<=c or c<=b or b<=a or c<=a:
                    while b<=a:
                         b+=dd[bp]
                         ans+=1
                    while c<=b or c<=a:
                         c+=dd[cp]
                         ans+=1
                    while d<=b or d<=a or d<=c:
                         d+=dd[dp]
                         ans+=1
               return ans

t = int(input())
for i in range(t):
     n = int(input())
     w = list(map(int,input().split()))
     l = list(map(int,input().split()))
     print(solve(w,l))
     