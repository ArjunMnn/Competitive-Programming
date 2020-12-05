from collections import Counter
class Solution:
    def solve(self, A):
        d = Counter(A)
        f=0
        for v in Counter(A).values():
            if v%2==1 and f==1:
                return 0
            elif v%2:
                f=1
        return 1
        