int Solution::bulbs(vector<int> &A) {
    int s = 0;
    int res = 0;
    for(int i = 0; i< A.size(); i++){
        if(s%2)
            A[i]^=1;
        if(A[i] == 0){
            res++;
            s++;
        }
    }
    return res;
}
