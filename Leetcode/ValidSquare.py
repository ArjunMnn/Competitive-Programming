class Solution:
    def validSquare(self, p1, p2, p3, p4):
        p = [p1,p2,p3,p4]
        dic = defaultdict(int)
        for i in range(3):
            x1,y1 = p[i][0],p[i][1]
            for j in range(i+1,4):
                x2,y2 = p[j][0],p[j][1]
                d = ((x2-x1)**2+(y2-y1)**2)**0.5
                dic[d]+=1
        print(dic)
        return x[0]==2 and x[1]==4
                