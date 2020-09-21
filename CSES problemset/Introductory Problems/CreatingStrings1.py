import sys
import collections
import math
import itertools



if __name__ == "__main__":
    s = input()
    perm = set()
    for i in itertools.permutations(s):
        perm.add(''.join(i))
    print(len(perm))
    perm = list(perm)
    perm.sort()
    for i in perm:
        print(i)





	