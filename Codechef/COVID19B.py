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
    arr = list(map(int,input().split()))
    d = collections.defaultdict(int)
    maxc = -math.inf
    minc = math.inf
    if n == 3:
        for i in range(n):
            res = 1
            for j in range(n):
                if i!=j:
                    if i>j:
                        if arr[i]<arr[j]:
                            res+=1
                    else:
                        if arr[i]>arr[j]:
                            res+=1
            # print(res)
            minc = min(minc,res)
            maxc = max(maxc,res)
        print(minc,maxc)
    else:
        for i in range(n):
            d = collections.defaultdict(int)
            res = 1
            d[i] = 1
            for j in range(i+1,n):
                if arr[j]<arr[i]:
                    d[j] = 1
                    res+=1

            # for j in range(i-1,-1,-1):
            #     if arr[j]>arr[i]:
            #         d[j] = 1
            #         res+=1
            for j in range(0,i):
                if d[j]!=1:
                    for k in range(j+1,n):
                        
                        if d[k]==1 and arr[k]<arr[j] and d[j] == 0:
                            d[j] = 1
                            res+=1
                            
                        elif d[j] == 1 and d[k] == 0 and arr[k]<arr[j]:
                            res+=1
                            d[k] = 1
            # print(res)
            minc = min(minc,res)
            maxc = max(maxc,res)
        print(minc,maxc)






    







	

if __name__ == "__main__":

    t = int(input())
    for i in range(t):
        main()


	