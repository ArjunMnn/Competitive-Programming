from __future__ import division, print_function
# from sortedcontainers import SortedList, SortedSet, SortedDict
import os
import operator as op
from functools import reduce
import heapq
# import sys
import bisect
from sys import stdout
from io import BytesIO, IOBase
import sys
import collections

# sys.stdout = open("output.txt",'w')
# sys.stdin = open("input.txt",'r')
import math

def ncr(n, r):
    r = min(r, n-r)
    numer = reduce(op.mul, range(n, n-r, -1), 1)
    denom = reduce(op.mul, range(1, r+1), 1)
    return numer // denom

        





        
if __name__ == "__main__":
    n,x = map(int,input().split())
    arr = list(map(int,input().split()))
    d = collections.defaultdict(list)
    for i in range(len(arr)):
        d[arr[i]].append(i)
    # print(d)
    for i in range(len(arr)):
        if x-arr[i] in d and x-arr[i]!=0:

            if arr[i] == x-arr[i]:
               
                if len(d[arr[i]])>1:
                    print(d[arr[i]][0]+1,d[arr[i]][1]+1)
                    break

            else:

                print(d[arr[i]][0]+1,d[x-arr[i]][0]+1) 
                break
    else:
        print("IMPOSSIBLE")   
            
            

    
    






    

    
                                                                                                    