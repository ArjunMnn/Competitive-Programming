string Solution::solve(string A, int B) {
    A+="$";
    string res = "", temp = "";
    int c = 1;
    for(int i = 0; i<A.size()-1;i++){
        temp+=A[i];
        if(A[i]==A[i+1]){
            c++;temp+=A[i];
        }
        else{
            if(c!=B)
                res+=temp;
            temp = "";c=1;
        }
    }
    return res;
}
