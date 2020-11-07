int Solution::search(const vector<int> &A, int target) {
    int l = 0;
    int r = A.size()-1;
    while(l<r){
        int mid = l+(r-l)/2;
        if(A[r]<A[mid])
            l = mid + 1;
        
        else
            r = mid;
    }
    int offset = l;
    l = 0+offset;
    r = A.size()-1+offset;
    while(l<r){
        int mid = l+(r-l)/2;
        if(A[mid%A.size()]>=target)
            r = mid;
        else
            l = mid + 1;
    }
    if(A[l%A.size()]==target)
        return l%A.size();
    else
        return -1;
    
}