from __future__ import division, print_function

import os
import operator as op
from functools import reduce
import sys
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
    n,m,k = map(int,input().split())
    app = list(map(int,input().split()))
    apart = list(map(int,input().split()))
    app.sort(reverse = True)
    apart.sort(reverse = True)
    i = 0
    j = 0
    c = 0
    # print(app)
    # print(apart)
    while i<n and j<m:
        
        if abs(app[i] - apart[j])<=k:
            c+=1
            i+=1
            j+=1
        else:
            if app[i]>apart[j]:
                i+=1
            else:
                j+=1
    print(c)


    

    
                                                                                                    