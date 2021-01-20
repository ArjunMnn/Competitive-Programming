int Solution::majorityElement(const vector<int> &A) {
    int candidate = A[0];
    int count = 1;
    for(int i = 1; i<A.size(); i++){
        if(A[i]!=candidate)
            count--;
        else
            count++;
        if(count == 0){
            candidate = A[i];
            count = 1;
        }
    }
    return candidate;
}
