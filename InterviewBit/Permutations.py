class Solution:
	# @param A : list of integers
	# @return a list of list of integers
	def permute(self, A):
	    self.ans = []
	    def dfs(A,l,r):
	        if l==r:
	            self.ans.append(list(A))
	            return
	        else:
	            for i in range(l,r):
	                A[l],A[i] = A[i],A[l]
	                dfs(A,l+1,r)
	                A[l],A[i] = A[i],A[l]
	                
	    dfs(A,0,len(A))
	    return self.ans 