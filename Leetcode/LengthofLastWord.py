class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        words = list(s.split())
        if not words:
            return 0
        return len(words[-1])