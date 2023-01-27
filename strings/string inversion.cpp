string Solution::solve(string A) {
    int n=A.size();
    for(int i=0;i<n;i++){
        if(A[i]>=97){
            A[i]=A[i]-32;
        }
        else if(A[i]<=90){
            A[i]=A[i]+32;
        }
    }
    return A;
}
