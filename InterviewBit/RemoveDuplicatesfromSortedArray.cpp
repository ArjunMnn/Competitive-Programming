int Solution::removeDuplicates(vector<int> &A) {
    if(A.size()==1)
        return 1;
    int i = 0;
    int j = 1;
    while(i<A.size() && j<A.size()){
        if(A[i]!=A[j]){
            swap(A[i+1],A[j]);
            i++;j++;
        }
        else
            j++;
    }
    int n = A.size()-i-1;
    while(n--){
        A.pop_back();
    }
    return A.size();
    
}