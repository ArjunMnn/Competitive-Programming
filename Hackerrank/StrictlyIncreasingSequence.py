#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'whoIsTheWinner' function below.
#
# The function is expected to return a STRING.
# The function accepts INTEGER_ARRAY arr as parameter.
#
import collections
import heapq
def whoIsTheWinner(arr):
    d = collections.Counter(arr)
    heap = []
    maxc = -1
    for k,v in d.items():
        heapq.heappush(heap,v)
        maxc = max(maxc,v)
    if maxc == 1:
        return "First"
    f = 1
    while heap:
        f ^=1
        
            
        v = heapq.heappop(heap)
        if len(heap) == 0 and v == 1:
            if f == 0:
                return "First"
            else:
                return "Second"
        v-=1
        if v!=0:
            heapq.heappush(heap,v)
        
        
        
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        result = whoIsTheWinner(arr)

        fptr.write(result + '\n')

    fptr.close()
