class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        self.res = []
        def rec(target,curr,k):
            if target == 0:
                self.res.append(curr)
            if target<0 or k>=len(candidates):
                return
            for i in range(k,len(candidates)):
                rec(target - candidates[i],curr+[candidates[i]],i)
        rec(target,[],0)
        return self.res