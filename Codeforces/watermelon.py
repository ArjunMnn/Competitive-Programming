import sys
import collections
sys.stdout = open("output.txt",'w')
sys.stdin = open("input.txt",'r')
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


def main():
	n = int(input())
	if n==2:
		print("NO")
	elif n%2:
		print("NO")
	else:
		print("YES")


    







	

if __name__ == "__main__":

	
	main()
		

	