int Solution::trailingZeroes(int n) {
    if(n<=4)
        return 0;
    int d = 5;
    int c = 0;
    while(n/d>=1){
        c+=int(n/d);
        d *= 5;
    }
    return c;
}
