class Solution:
    def power(self,a,n):
        M = 1000000007
        if n==0:
            return 1
        if n==1:
            return a
        temp = self.power(a,n//2)%M
        if n%2==0:
            return (temp*temp)%M
        return ((((a*temp)%M)*temp)%M)%M
        
    def fact(self,num):
        M = 1000000007
        if num == 0:
            return 1
        else:
            factorial = 1
            for i in range(1,num + 1):
                factorial = factorial*i
                factorial %=M
            return factorial
    
    
    def solve(self, A, B):
        M = 1000000007
        intervals = []
        B.sort()
        N = A - len(B)
        intervals.append(B[0]-1)
        for i in range(1,len(B)):
            intervals.append(B[i]-B[i-1]-1)
        intervals.append(A-B[-1])
        first = self.fact(N)
        for i in range(len(intervals)):
            first*=self.power(self.fact(intervals[i]),1000000005)%M
            first = first%M
        sec = 1
        for i in range(1,len(intervals)-1):
            if intervals[i]>=2:
                    sec*=self.power(2,intervals[i]-1)
                    sec = sec%M
        first = (first*sec)%M
        return first%M
