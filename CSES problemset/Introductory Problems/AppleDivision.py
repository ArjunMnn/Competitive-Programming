from __future__ import division, print_function

import os
import operator as op
from functools import reduce
import sys
from sys import stdout
from io import BytesIO, IOBase
import sys
import collections
sys.stdout = open("output.txt",'w')
sys.stdin = open("input.txt",'r')
import math

def ncr(n, r):
    r = min(r, n-r)
    numer = reduce(op.mul, range(n, n-r, -1), 1)
    denom = reduce(op.mul, range(1, r+1), 1)
    return numer // denom







def printSubsequences(arr, index, subarr,subar): 
      
    # Print the subsequence when reach  
    # the leaf of recursion tree 
    if index == len(arr): 
          
        # Condition to avoid printing 
        # empty subsequence 
        if len(subarr) != 0: 
            return abs(subarr - subar)
      
    else: 
        # Subsequence without including  
        # the element at current index 
        yes = printSubsequences(arr, index + 1, subarr,subar+arr[index]) 
          
        # Subsequence including the element 
        # at current index 
        no = printSubsequences(arr, index + 1,subarr+arr[index],subar)

    return min(yes,no)

if __name__ == "__main__":

      
    n = int(input())
    arr = list(map(int,input().split()))

    s = set()

    print(printSubsequences(arr, 0, 0,0)) 
    