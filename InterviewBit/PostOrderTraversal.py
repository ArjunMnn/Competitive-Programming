class Solution:
	# @param A : root node of tree
	# @return a list of integers
	def postorderTraversal(self, A):
	    stack = []
	    res = []
	    curr = A
	    while stack or curr:
	        while curr:
	            res.append(curr.val)
	            if curr.left:
	                stack.append(curr.left)
	            curr = curr.right
	        if stack:
	            curr = stack.pop()
	    return res[::-1]