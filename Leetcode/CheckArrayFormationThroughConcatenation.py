class Solution:
    def canFormArray(self, arr: List[int], pieces: List[List[int]]) -> bool:
        
        copy = [i for i in arr]
        for array in pieces:
            f = 0
            y = 0
            it = 0
            while(it<len(copy) and array[0]!=copy[it]):
                it+=1
            for i in range(len(array)):
                if(it>=len(copy)):
                    y = 1
                    break
                if array[i] == copy[it]:
                    f = 1
                    copy[it] = -1
                elif f:
                    y = 1
                    break
                it+=1
            if y:
                copy = arr
            else:
                arr = copy
        print(arr)
        return arr.count(-1) == len(arr)
                
                    