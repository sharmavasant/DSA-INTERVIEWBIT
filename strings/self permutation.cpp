int Solution::permuteStrings(string A, string B) {
    int n1=A.size();
    int n2=B.size();
    if(n1!=n2) return 0;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int c=0;
    for(int i=0;i<n1;i++){
        if(A[i]==B[i]){
            c++;
        }
    }
    if(c==n1){
        return 1;
    }
    return 0;
}
