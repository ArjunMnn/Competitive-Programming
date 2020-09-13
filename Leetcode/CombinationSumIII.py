class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        it = [i for i in range(1,10)]
        res = []
        for i in itertools.combinations(it,k):
            if sum(i) == n:
                res.append(i)
        return res