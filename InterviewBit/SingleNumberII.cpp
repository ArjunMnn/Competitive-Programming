bool getbit(int n, int pos){
    return (n&(1<<pos))!=0;
}
int setbit(int n,int pos){
    return n | (1<<pos);
}


int Solution::singleNumber(const vector<int> &A) {
    int result =0;
    int n = A.size();
    for(int i = 0;i<64;i++){
        int sum = 0;
        for(int j = 0;j<n;j++){
            if(getbit(A[j],i)){
                sum++;
            }
        }
        if(sum%3){
            result = setbit(result,i);
        }
    }
    return result;
}
