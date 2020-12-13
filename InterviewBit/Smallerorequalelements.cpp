int Solution::solve(vector<int> &A, int B) {
    int l = 0, h = A.size()-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(A[mid]>=B+1)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return l;
}
