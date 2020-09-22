class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n1,n2,c1,c2 = -1,-1,0,0
        for i in nums:
            if i == n1:
                c1+=1
            elif i == n2:
                c2+=1
            elif c1 == 0:
                n1 = i
                c1+=1
            elif c2 == 0:
                n2 = i
                c2+=1
            else:
                c1-=1
                c2-=1
        res = []
        for i in [n1,n2]:
            if nums.count(i)>len(nums)//3:
                res.append(i)
        return res