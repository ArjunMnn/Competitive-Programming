int Solution::sqrt(int A) {
    if(A==1)
        return 1;
    long long l = 0;
    long long r = A/2;
    while(l<=r){
        long long mid = l + (r-l)/2;
        if(mid*mid==A)
            return mid;
        else if(mid*mid>A)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return l - 1;
}
