class Solution:
	# @param A : list of integers
	# @param B : list of integers
	def merge(self, A, B):
	    i = 0
	    j = 0
	    res = []
	    while i<len(A) or j<len(B):
	        if i<len(A) and j<len(B):
	            if A[i]<B[j]:
	                res.append(A[i])
	                i+=1
	            else:
	                res.append(B[j])
	                j+=1
	        else:
	            if(i<len(A)):
	                res.append(A[i])
	                i+=1
	            else:
	                res.append(B[j])
	                j+=1
	    while(A):
	        A.pop()
	    for i in res:
	        A.append(i)
	        
	   
	           
	                
        
