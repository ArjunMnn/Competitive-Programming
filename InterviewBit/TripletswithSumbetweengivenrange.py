class Solution:
	def solve(self, A):
	    t = [float(i) for i in A]
	    t.sort()
	    for i in range(len(A)):
	        j = i+1
	        k = j+1
	        if(k<len(A)):
                a=t[i]+t[j]+t[k]
                if (a>2):
                    a=t[k]+t[0]+t[1]
                if(a>1 and a<2):
                    return 1
        return 0
	        

