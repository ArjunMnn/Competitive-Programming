#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'maximumStones' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def maximumStones(arr):
    n = len(arr)
    sume = 0
    sumo = 0
    for i in range(0,n,2):
        sume+=arr[i]
    for i in range(1,n,2):
        sumo+=arr[i]
    return min(sumo,sume)*2

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = maximumStones(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
