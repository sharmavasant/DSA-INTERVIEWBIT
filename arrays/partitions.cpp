int Solution::solve(int A, vector<int> &B) {
    int n=B.size();
    int sum=0;
    for(int i=0;i<n;i++){ sum+=B[i]; }
    sum=sum/3;
    vector<int> prefix;
    vector<int> suffix;
    int x=0;
    for(int i=0;i<n;i++){ 
        x+=B[i];
        if(x==sum){
            prefix.push_back(i);
        }
    }
    x=0;
    for(int i=n-1;i>=0;i--){ 
        x+=B[i];
        if(x==sum){
            suffix.push_back(i);
        }
    }
    int ans=0;
    for(int i=0;i<prefix.size();i++){
        for(int j=0;j<suffix.size();j++){
            x=0; int n=0;
            for(int k=prefix[i]+1;k<suffix[j];k++){ x+=B[k]; n=1; }
            if(n==1&&x==sum){
                ans++;
            }
        }
    }
    return ans;
}
