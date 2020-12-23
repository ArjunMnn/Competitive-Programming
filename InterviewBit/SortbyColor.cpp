void Solution::sortColors(vector<int> &A) {
    int l = 0, m = 0, r = A.size()-1;
    while(m<=r){
        if(A[m]==0){
            swap(A[m],A[l]);
            m++;l++;
        }
        else if(A[m]==1)
            m++;
        else{
            swap(A[r],A[m]);
            r--;
        }
    }
   
}
