import collections
class Solution:
	# @param A : string
	# @param B : string
	# @return an integer
	def minDistance(self, A, B):
	    m=len(A)
        n=len(B)
        dp=[[None]*(n+1) for i in range(m+1)]
	    def rec(i,j):
	        if i == 0:
	            return j
	        if j == 0:
	            return i
	        if dp[i][j]:
	            return dp[i][j]
	        if A[i-1] == B[j-1]:
	            dp[i][j] = rec(i-1,j-1)
	            return dp[i][j]
	        else:
    	        ins = rec(i,j-1)+1
    	        dell = rec(i-1,j)+1
    	        sub = rec(i-1, j-1)+1
    	        dp[i][j] = min(ins, dell, sub)
    	        return dp[i][j]
    	return rec(len(A), len(B))
	   
	    
	    
	    
