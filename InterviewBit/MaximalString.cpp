
int ans;

void back(string A,int k){
    if(k == 0)
        return;
    for(int i = 0;i<A.size();i++){
        for(int j = i+1; j<A.size(); j++){
            swap(A[i],A[j]);
            ans = max(ans,stoi(A));
            back(A,k-1);
            swap(A[i],A[j]);
        }
    }
}

string Solution::solve(string A, int B) {
    ans = stoi(A);
    back(A,B);
    return to_string(ans);
}
