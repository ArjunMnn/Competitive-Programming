import sys
import collections
import math
# sys.stdout = open("output.txt","w") 
# sys.stdin = open("input.txt","r") 


if __name__ == "__main__":
    s = input()
    d = collections.Counter(s)
    c = 0
    for i,j in d.items():
        if j%2 and c == 0:
            odd = i
            c+=1
        elif j%2 and c>0:
            print("NO SOLUTION")
            break
    else:
        res = [None for i in range(len(s))]
        i = 0
        j = len(s)-1
        for k,v in d.items():
            if v%2==0:
                while v:
                    res[i] = k
                    res[j] = k
                    i += 1
                    j -= 1
                    v-=2
        for i in range(len(res)):
            if res[i] is None:
                v = d[odd]

                while(v):
                    res[i] = odd
                    v-=1
                    i+=1
                break
        print(''.join(res))
            




	