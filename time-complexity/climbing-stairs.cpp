int Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> dp(n,0);
    dp[0] = A[0];
    dp[1] = A[0]+A[1];
    for(int i=2;i<n;i++) {
        dp[i] = min(A[i]+dp[i-1],A[i]+dp[i-2]);
    }
    return dp[n-1];
}
