class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        res = []
        def back(comb,counter):
            if len(comb) == len(nums):
                res.append(list(comb))
            for num in counter:
                if counter[num]>0:
                    comb.append(num)
                    counter[num]-=1
                    back(comb,counter)
                    comb.pop()
                    counter[num]+=1
        back([],Counter(nums))
        return res