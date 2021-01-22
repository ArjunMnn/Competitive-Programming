class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        if len(word1)!=len(word2):
            return False
        
        s1 = set(word1)
        s2 = set(word2)
        d1 = Counter(word1)
        d2 = Counter(word2)
        
        if s1 != s2:
            return False
        
        a1 = []
        a2 = []
        
        for c in s1:
            a1.append(d1[c])
        for c in s1:
            a2.append(d2[c])
            
        return sorted(a1) == sorted(a2)
        