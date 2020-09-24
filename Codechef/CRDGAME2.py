import sys
import collections
import operator as op
from functools import reduce
sys.stdout = open("output.txt",'w')
sys.stdin = open("input.txt",'r')
import math




def gcd(a,b):
	if a == 0:
		return b
	return gcd(b%a,a)

# def pow(m,n):
#     res = 1
#     m = m % 1000000007
#     while(n>0):
#         if (n&1):
#             res = (res*m)%1000000007
#         n = n >> 1
#         m = (m*m)%1000000007
#     return res

def inv(n,p):
    return pow(n,p-2,p)


# def ncr(n, r):
#     r = min(r, n-r)
#     numer = reduce(op.mul, range(n, n-r, -1), 1)
#     denom = reduce(op.mul, range(1, r+1), 1)
    # return (numer // denom)%1000000007
def ncr(n,r):
    p = 1000000007
    if r == 0:
        return 1
    fac = [0 for i in range(n+1)]
    fac[0] = 1
    for i in range(1,n+1):
        fac[i] = (fac[i-1]*i)%1000000007
    return ((fac[n]*inv(fac[r],p)%1000000007)*inv(fac[n-r],p)%p)%p



def main():
    m = 1000000007
    # print(pow(3,2))
    n = int(input())
    if n == 1:
        print(2)
        return
    cards = list(map(int,input().split()))
    maxcard = max(cards)
    countmax = cards.count(maxcard)
    one = pow(2,countmax,m)
    two = pow(2,n - countmax,m)
    if countmax%2==0:
        one = one - ncr(countmax,countmax//2)
    one = one % m
    print(one*two%m)
    	
    


    







	

if __name__ == "__main__":
    
    t = int(input())
    for i in range(t):
        main()


