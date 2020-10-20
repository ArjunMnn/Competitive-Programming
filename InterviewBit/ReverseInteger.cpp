int Solution::reverse(int x) {
    bool neg = false;
    if(x<0)
        neg = true;
        x = abs(x);
    long long r = 0;
    while(x!=0){
        int d = x%10;
        r = r*10+d;
        x = x/10;
    }
    long long c = pow(2,31);
    if(r<-c || r>c-1)
        return 0;
    if(neg)
        return -r;
    return r;
}
