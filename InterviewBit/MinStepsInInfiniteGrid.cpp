int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int x = A[0];
    int y = B[0];
    int steps = 0;
    for(int i = 0;i<A.size();i++){
        steps+=max(abs(x - A[i]),abs(y - B[i]));
        x = A[i];
        y = B[i];
    }
    return steps;
}
