class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==1)    return 0;
        if(N==0)    return 1;
        int up = 2;
        while(up<=N)
            up = up<<1;
        return up - N - 1;
        
    }
};