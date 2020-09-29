class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        A = set(wordDict)
        lens = sorted(map(len,A))
        memo = set()
        def dfs(i):
            if i in memo:
                return False
            if i==len(s):
                return True
            for x in lens:
                if x+i>len(s):
                    break
                if s[i:i+x] in A and dfs(i+x):
                    return True
            memo.add(i)
            return False
        return dfs(0)