class Solution:
	def isPalindrome(self, x):
	    if str(x)==("".join(reversed(str(x)))):
	        return 1
	    return 0