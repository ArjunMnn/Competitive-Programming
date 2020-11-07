int Solution::lengthOfLastWord(const string A) {
    int c = 0;
    int i = A.length()-1;
    while(A[i]==' ')
        i--;
    for(;i>=0 && A[i]!=' ';i--)
        c++;
    return c;
}
