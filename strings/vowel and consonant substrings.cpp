int Solution::solve(string A) {
    long long int n=0;
    long long int ans=0;
    for(int i=0;i<A.size();i++){
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'){
           n++;
        }
    }
    for(int i=0;i<A.size();i++){
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'){
           ans+=A.size()-i-n;
           n--;
        }
        else{
            ans+=n;
        }
    }
    ans=ans%1000000007;
    return ans;
}
