class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        d = collections.Counter(s)
        stack = []
        vis = set()
        for i in s:
            d[i]-=1
            if i in vis:
                continue
            while stack and stack[-1]>i and d[stack[-1]]>0:
                vis.discard(stack[-1])
                stack.pop()
            stack.append(i)
            vis.add(i)
        return ''.join(stack)
                