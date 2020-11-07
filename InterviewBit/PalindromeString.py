import re
class Solution:
    # @param A : string
    # @return an integer
    def isPalindrome(self, s):
        new_s = ''.join(re.findall("[a-zA-Z0-9]", s)).lower()
        return 1 if new_s == new_s[::-1] else 0