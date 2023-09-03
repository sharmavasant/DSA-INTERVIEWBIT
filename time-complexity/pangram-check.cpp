int Solution::solve(vector<string> &A) {
    int arr[123]={0}, c=0;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            int k = A[i][j];
            arr[k]++;
        }
    }
    for(int i=65;i<123;i++){
        if(arr[i]>0){
            c++;
        }
    }
    int flag = 0;
    if(c>=26){
        flag = 1;
    }
    return flag;
}
