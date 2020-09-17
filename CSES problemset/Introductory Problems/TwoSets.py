import sys
from sys import stdout
import collections

import math

def countingSort(arr, exp1): 
   
    n = len(arr) 
   
    
    output = [0] * (n) 
   
    count = [0] * (10) 
   

    for i in range(0, n): 
        index = (arr[i]/exp1) 
        count[int((index)%10)] += 1
   
 
    for i in range(1,10): 
        count[i] += count[i-1] 

    i = n-1
    while i>=0: 
        index = (arr[i]/exp1) 
        output[ count[ int((index)%10) ] - 1] = arr[i] 
        count[int((index)%10)] -= 1
        i -= 1
   
   
    i = 0
    for i in range(0,len(arr)): 
        arr[i] = output[i] 
 

def radixSort(arr):
 
    
    max1 = max(arr)
 
 
    exp = 1
    while max1/exp > 0:
        countingSort(arr,exp)
        exp *= 10


def countSort(arr): 
    output = [0 for i in range(256)] 
    count = [0 for i in range(256)] 
    ans = ["" for _ in arr] 
    for i in arr: 
        count[ord(i)] += 1
    for i in range(256): 
        count[i] += count[i-1] 
 
    for i in range(len(arr)): 
        output[count[ord(arr[i])]-1] = arr[i] 
        count[ord(arr[i])] -= 1
    for i in range(len(arr)): 
        ans[i] = output[i] 
    return ans

def partition(arr,low,high): 
	i = ( low-1 )		 	
	pivot = arr[high]	 

	for j in range(low , high): 

		if arr[j] < pivot: 
		
			i = i+1
			arr[i],arr[j] = arr[j],arr[i] 

	arr[i+1],arr[high] = arr[high],arr[i+1] 
	return ( i+1 ) 




def quickSort(arr,low,high): 
	if low < high: 

		
		pi = partition(arr,low,high) 

		quickSort(arr, low, pi-1) 
		quickSort(arr, pi+1, high) 




def gcd(a,b):
	if a == 0:
		return b
	return gcd(b%a,a)










	

if __name__ == "__main__":
    n = int(input())
    sumarr = (n*(n+1))//2
    if(sumarr%2):
        print("NO")
    else:
        summ = 0
        res = []
        res1= []
        for i in range(n,0,-1):
            if summ+i == sumarr//2:
                res.append(i)
                break
            elif summ+i<sumarr//2:
                summ+=i
                res.append(i)
            else:
                res1.append(i)
        for j in range(1,i):
            res1.append(j)
        print("YES")
        print(len(res))
        print(*res)
        print(len(res1))
        print(*res1)


