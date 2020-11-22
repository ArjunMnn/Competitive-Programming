int Solution::singleNumber(const vector<int> &A) {
    int x =A[0];
    for(int i = 1;i<A.size();i++){
        x^=A[i];
    }
    return x;
}
