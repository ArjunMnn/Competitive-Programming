class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        stack = []
        res = []
        for i in range(len(s)):
            if s[i] == ")":
                if stack:
                    stack.pop()
                    res.append(s[i])
            elif s[i] == "(":
                stack.append(s[i])
                res.append(s[i])
            else:
                res.append(s[i])
        ans = ''.join(res)
        stack = []
        res = []
        for i in range(len(ans)-1,-1,-1):
            if ans[i] == "(":
                if stack:
                    stack.pop()
                    res.append(ans[i])
            elif ans[i] == ")":
                stack.append(ans[i])
                res.append(ans[i])
            else:
                res.append(ans[i])
        return ''.join(res[::-1])