
import math
t = int(input())
for i in range(t):
     n = int(input())
     summ = (n*(n+1))//2
     if summ%2:
          print(0)
     else:
          x = (1+(4*summ))**0.5
          x-=1
          x = x//2
          x = int(x)
          total = n - x
          left = (x*(x+1))//2
          right = (n*(n+1))//2 - left
          if left == right:
               r = n - x
               total += (x*(x-1))//2
               total += (r*(r-1))//2
          print(total)
     