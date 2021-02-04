int Solution::adjacent(vector<vector<int> > &A) {
    int N = A[0].size();
    
    vector<int> mat(N, 0);
    //memset(mat, 0, N);
    mat[0] = max(A[0][0], A[1][0]);
    if(N == 1) return mat[0]; // only 1 col
    mat[1] = max(mat[0], max(A[0][1], A[1][1]));
    if(N == 2) return mat[1]; // only 2 cols
    
    // more than 2 cols
    for(int i = 2; i<N; i++){
            mat[i] = max(mat[i-2] + max(A[0][i], A[1][i]), mat[i-1]);
    }
    
    int ans = *max_element(mat.begin(), mat.end());
    return ans;
}