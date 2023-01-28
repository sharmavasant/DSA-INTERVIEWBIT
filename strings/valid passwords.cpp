int Solution::solve(string A) {
    int n=A.size();
    int numerical=0, lowercase=0, uppercase=0, specialchar=0;
    for(int i=0;i<n;i++){
        if(A[i]>=48&&A[i]<=57){
            numerical++;
        }
        if(A[i]>=97&&A[i]<=122){
            lowercase++;
        }
        if(A[i]>=65&&A[i]<=90){
            uppercase++;
        }
        if(A[i]==64||A[i]==35||A[i]==37||A[i]==38||A[i]==33||A[i]==36||A[i]==42){
            specialchar++;
        }
    }
    if((n>=8&&n<=15)&&numerical>0&&lowercase>0&&uppercase>0&&specialchar>0){
        return 1;
    }
    return 0;
}
