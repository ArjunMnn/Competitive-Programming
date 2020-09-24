# Chefina has two sequences A1,A2,…,AN and B1,B2,…,BN. She views two sequences with length N as identical if, after they are sorted in non-decreasing order, the i-th element of one sequence is equal to the i-th element of the other sequence for each i (1≤i≤N).

# To impress Chefina, Chef wants to make the sequences identical. He may perform the following operation zero or more times: choose two integers i and j (1≤i,j≤N) and swap Ai with Bj. The cost of each such operation is min(Ai,Bj).

# You have to find the minimum total cost with which Chef can make the two sequences identical.
def solve(da,db,minm):
     l = []
     c = 0
     c1 = 0
     for k,v in da.items():
          if db[k]==v:
               continue
          elif abs(db[k]-da[k])%2==0 and da[k]>db[k]:
               while(db[k]!=da[k]):
                    
                    db[k]+=1
                    da[k]-=1
                    l.append(k)
                    c+=1
          elif abs(db[k]-da[k])%2:
               return -1
     for k,v in db.items():
          if da[k]==v:
               continue
          elif abs(db[k]-da[k])%2==0 and db[k]>da[k]:
               while(da[k]!=db[k]):
                    
                    da[k]+=1
                    db[k]-=1
                    l.append(k)
                    c1+=1
          else:
               return -1
     if c1!=c:
          return -1
     l.sort()
     if not l:
          return 0
     s = 0
     for i in range(c):
          if l[i]==minm:
               s+=minm
          else:
               s+=min((minm*2),l[i])
     return s
     
    
import collections
t = int(input())
for i in range(t):
     n = int(input())
     a = list(map(int,input().split()))
     b = list(map(int,input().split()))
     da = collections.defaultdict(int)
     db = collections.defaultdict(int)
     minm = float('inf')
     for i in a:
          da[i]+=1
          minm = min(minm,i)
     for j in b:
          db[j]+=1
          minm = min(minm,j)
     
     print(solve(da,db,minm))
     
