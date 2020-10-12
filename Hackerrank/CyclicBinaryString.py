#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'maximumPower' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#

def maximumPower(s):
    maxc = 0
    c = 0
    if s.count('0') == len(s):
        return -1
    for i in s:
        if i == '0':
            c+=1
            maxc = max(maxc,c)
        else:
            c = 0
    c = 0
    for i in range(len(s)):
        if s[i]=='0':
            c+=1
        else:
            break
    c1 = 0
    for i in range(len(s)-1,-1,-1):
        if s[i] == '0':
            c1+=1
        else:
            break
    
    return max(maxc,c+c1)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = maximumPower(s)

    fptr.write(str(result) + '\n')

    fptr.close()
