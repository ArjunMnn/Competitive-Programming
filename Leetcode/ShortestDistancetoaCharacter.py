class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        idx_list = [idx for idx, x in enumerate(s) if x == c]
        curr_ind = 0
        res = []
        for i in range(len(s)):
            curr = abs(idx_list[curr_ind] - i)
            if curr_ind>=len(idx_list)-1:
                res.append(curr)
            else:
                next_ind = abs(idx_list[curr_ind+1] - i)
                if next_ind<curr:
                    curr = next_ind
                    curr_ind+=1
                res.append(curr)
        return res