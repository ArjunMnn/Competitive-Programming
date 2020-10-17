
bool isprime(int num){
    for(int i = 2;i<num;i++){
        if(num%i==0)
            return false;
    }
    return true;
}

vector<int> Solution::primesum(int A) {
    for(int i = 2;i<A/2;i++){
        if (isprime(i) && isprime(A-i)){
            int a = i;
            int b = A-i;
            int small = a<b?a:b;
            int  big = a>b?a:b;
            return {small,big};
        }
    }
}
