class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = list(s.split())
        d = {}
        if len(words)!= len(pattern):
            return False
        for i in range(len(words)):
            if words[i] in d:
                if d[words[i]] == pattern[i]:
                    continue
                else:
                    return False
            else:
                d[words[i]] = pattern[i]
        flag = True
        d1 = {}
        for i in range(len(words)):
            if pattern[i] in d1:
                if d1[pattern[i]] == words[i]:
                    continue
                else:
                    return False
            else:
                d1[pattern[i]] = words[i]
        if flag:
            return True
        return False