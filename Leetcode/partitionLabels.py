class Solution:
    def partitionLabels(self, S: str) -> List[int]:
        last = {}
        for i in range(len(S)-1,-1,-1):
            if S[i] not in last:
                last[S[i]] = i
        # print(last)
        lasti = 0
        res = []
        anchor = 0
        for i in range(len(S)):
            lasti = max(lasti,last[S[i]])
            if i == lasti:
                res.append(i-anchor+1)
                anchor = i+1
        # res1 = [i for i in res]
        # for i in range(1,len(res)):
        #     res1[i] = res[i] - res[i-1]
        return (res)
            
            