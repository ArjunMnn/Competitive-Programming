int Solution::solve(vector<int> &A, int B) {
    int l = 0, r = *max_element(A.begin(),A.end());
    int ans = 0;
    while(l<=r){
        int mid = l+(r-l)/2;
        long long int sum = 0;
        for(auto i:A)
            sum+=max(0,i-mid);
        if(sum>B)
            l = mid + 1;
        else if(sum<B)
            r = mid - 1;
        else
            return mid;
    }
    return r<0?0:r;
}