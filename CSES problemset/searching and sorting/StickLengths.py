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
    n = int(input())
    arr = list(map(int,input().split()))
    arr.sort()
    i = (len(arr)//2)
    ele = arr[i]
    c = 0
    for i in range(len(arr)):
        c+=abs(ele - arr[i])
    print(c)
            
            

    
    






    

    
                                                                                                    