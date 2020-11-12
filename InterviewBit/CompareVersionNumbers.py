class Solution:
	# @param A : string
	# @param B : string
	# @return an integer
	def compareVersion(self, A, B):
	    ver1 = A.split('.')
	    ver2 = B.split('.')
	    for i in range(max(len(ver1),len(ver2))):
	        if i>=len(ver1):
	            one = 0
	            two = int(ver2[i])
	        elif i>=len(ver2):
	            two = 0
	            one = int(ver1[i])
	        else:
	            one = int(ver1[i])
	            two = int(ver2[i])
	        if one>two:
	            return 1
	        elif two>one:
	            return -1
	        else:
	            continue
	    return 0