int Solution::solve(string A) {
    int n = A.length();
    string B;
    for(int i = A.size()-1; i>=0; i--){
        B+=A[i];
    }
    // cout << B << endl;
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(A[i-1] == B[j-1])
                dp[i][j] = 1+ dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][n];
}
